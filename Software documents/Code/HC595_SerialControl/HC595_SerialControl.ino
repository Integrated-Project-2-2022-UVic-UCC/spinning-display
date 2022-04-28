  /*
  Nome do Projeto:  HC595_Serial_Control
  Nome do Aquivo:   HC595_Serial_Control.ino                 
  Dependencias:     SerialRelay.h  Fonte: https://www.robocore.net
  link:             https://github.com/RoboCore/SerialRelay
  MCU:              ATmega
  Board:            Arduino Uno/Mega/Mini
  Compilador        N/A
  IDE:              Arduino IDE 1.6.6
  Hardware:         Arduino UNO/MEGA/Mini
  Escrito por:      Rui Viana
  Modificado por:   N/A 
  Data:             5/4/2016
  Uso:              Didático
  Desenhos          N/A
  Copyright @       N/A
  
  Este programa é software livre;
  e é distribuído na esperança que possa ser útil, mas SEM QUALQUER GARANTIA;
  mesmo sem a garantia implícita de COMERCIALIZAÇÃO ou ADEQUAÇÃO A UM DETERMINADO FIM.
  
  REVISIONS: (latest entry first)  
  5/4/2016   -   HC595_Serial_Control.ino - Primeiro release
  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  Descrição:  
  
  Com este código voce pode acionar portas de CIs HC595 ligados em cascata.
  Cada modulo na cascata recebe um numero a partir de 1, na ordem em que estiver conectado.
  As portas são numeradas a partir de 1 até 8  no modulo numero 1, e a partir de 9 até 16 no modulo 2, 
  e assim por diante nesta mesma sequencia.
  Ele utiliza somente dois ports do arduino para se conectar aos HC595 ligados em cascata.
  Atraves do monitor serial, digita-se o numero da porta que se quer acionar.

 Digitando o numero da porta, a mesma se estiver em LOW, fica em HIGH, e vise-versa.
 Podes-se ligar LED ou transistores acionando reles a partir de cada porta.
 Digitando 0 ou qualquer digito diferente de numeros, todas portas serao desligadas.
  */
  //--------------------------------------------------------------
  #include <SerialRelay.h>                                        // Biblioteca para o uso de serial HC595 com 2 fios  
  const byte NumModulos = 3;                                      // Numeros de HC595 em cascata
  #define Data 3                                                  // Pino para ligar o Data do HC595 (Pino 14)
  #define Clock 2                                                 // Pino para ligar Clock  do HC595 (Pino 12
  SerialRelay relays(Data,Clock,NumModulos);                      // Configuração do modulo
  byte Porta;                                                     // Porta a ser acionada
  byte Modulo;                                                    // modulo que contem a porta a ser acionada
  byte LED_MAtriz[9] [NumModulos+1];                              // Matriz com o estado das portas
  int Digitado = 0;                                               // variavel para guardar numero digitado
  //--------------------------------------------------------------
  void setup() 
  {
    Serial.begin(9600);                                           // Inicialisacao da serial
    for (int M = 1 ; M <= NumModulos; M++)                        // Passe por todos modulos
    {
      for (int P = 1 ; P <=8; P++)                                // Passe por todas portas
      {
        relays.SetRelay(P, SERIAL_RELAY_OFF, M);                  // Reset todas portas
      }
    }
  }
  //--------------------------------------------------------------
  void loop() 
  {
    if (Serial.available() > 0)                                   // Se houver entrada via serial
    {
      delay(30);
      while(Serial.available())                                   // Enquanto houver dados na serial
      { 
        int ASCii=Serial.read();                                  // Le o valor em ASCii
        if (isDigit(ASCii))                                       // Faça se for um caracter decimal
        {                                           
          Digitado=(Digitado*10)+(ASCii-48);                      // Transforme numero digitado de ASCii para HEXA
        }                                           
        else                                                      // Se não for caracter decimal, 
        {                                           
          Digitado=0;                                             // Zere o numero digitado
        }                                           
      }
      if (Digitado == 0)                                          // Se for 0 reset todas portas
      {
         for (int M = 1; M <= NumModulos; M++)                    // Passe por todos modulos
         {
           for (int P = 1; P <= 8; P++)                           // Passe por todas portas
           {
             relays.SetRelay(P, SERIAL_RELAY_OFF, M);             // Reset todas portas
             delay(1); 
             LED_MAtriz [P][M] = 0;                               // Reset a matriz toda
           }
         }  
      }
      else                                                        // Se não for ligue a porta selecionada
      {
        Modulo = ((Digitado-1)/8)+1;                              // Calcula qual HC595 na sequencia
        Porta = Digitado - 8*(Modulo -1);                         // Calcula que porta do HC595 deve ser acionada
        LED_MAtriz[Porta][Modulo] = !LED_MAtriz[Porta][Modulo];   // Inverte estado da indicação da porta na matriz
        if (LED_MAtriz[Porta][Modulo] == 1)                       // Se a porta na matriz estiver 1
        {
          relays.SetRelay(Porta, SERIAL_RELAY_ON, Modulo);        // Ligue a porta selecionada
          delay(1);                                               
        }
        else                                                      // Se a porta na matriz estiver 0
        {
          relays.SetRelay(Porta, SERIAL_RELAY_OFF, Modulo);       // Desligue a porta selecionada
          delay(1);                                                
        }
      }
    }
    Digitado = 0;                                                 // Zere o mumero digitado
  }
