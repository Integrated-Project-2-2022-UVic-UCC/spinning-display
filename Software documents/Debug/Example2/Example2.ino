int StartPin=A0;                       // PD is connected to this Pin 

int LED1 =4;                           //LED
int LED2 =5;                           //LED
int LED3 =6;                           //LED
int LED4 =7;                           //LED
int LED5 =8;                           //LED
int LED6 =9;                           //LED  
int LED7 =13;                          //LED

void setup(){
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT);
}

void loop(){
    int val=analogRead(StartPin);                   //read the value of PD
      if(val > 200){                                //TEXT write Here      

            //Sp();Sp();
            //Sp();Sp();
            C();Sp();
            I();Sp();
            R();Sp();
            C();Sp();
            U();Sp();
            I();Sp();
            T();Sp();
            S();Sp();
            T();Sp();
            O();Sp();
            D();Sp();
            A();Sp();
            Y();Sp();
            //A();Sp();
            //Y();Sp();
            //*/    
      }
     }

void A(){                                            //Alphabet A
  signal(0,1,1,1,1,1,1);                             // 1st Column
  signal(1,0,0,1,0,0,0);                             // 2nd Column   
  signal(1,0,0,1,0,0,0);                             // 3rd Column
  signal(1,0,0,1,0,0,0);                             // 4th Column
  signal(0,1,1,1,1,1,1);                             // 5th column
}

void B(){
  signal(1,1,1,1,1,1,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,0,1,0,0,1);
  signal(0,1,1,1,1,1,0);  
}

void C(){
  signal(0,1,1,1,1,1,0);
  signal(1,0,0,0,0,0,1);
  signal(1,0,0,0,0,0,1);
  signal(1,0,0,0,0,0,1);
  signal(0,1,0,0,0,1,0);
}

void D(){
  signal(1,1,1,1,1,1,1);
  signal(1,0,0,0,0,0,1);
  signal(1,0,0,0,0,0,1);
  signal(1,0,0,0,0,0,1);
  signal(0,1,1,1,1,1,0);
}

void E(){
  signal(1,1,1,1,1,1,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,0,0,0,0,1);
}

void Ff(){
  signal(1,1,1,1,1,1,1);
  signal(1,0,0,1,0,0,0);
  signal(1,0,0,1,0,0,0);
  signal(1,0,0,1,0,0,0);
  signal(1,0,0,0,0,0,0);
}

void G(){
  signal(0,1,1,1,1,1,0);
  signal(1,0,0,0,0,0,1);
  signal(1,0,0,0,1,0,1);
  signal(1,0,0,0,1,0,1);
  signal(0,1,0,0,1,1,1);
}

void H(){
  signal(1,1,1,1,1,1,1);
  signal(0,0,0,1,0,0,0);
  signal(0,0,0,1,0,0,0);
  signal(0,0,0,1,0,0,0);
  signal(1,1,1,1,1,1,1);
}

void I(){
  signal(1,0,0,0,0,0,1);
  signal(1,1,1,1,1,1,1);  
  signal(1,0,0,0,0,0,1);
}

void J(){
  signal(0,0,0,0,0,1,0);
  signal(0,0,0,0,0,0,1);
  signal(0,0,0,0,0,0,1);
  signal(0,0,0,0,0,0,1);
  signal(1,1,1,1,1,1,0);    
}

void K(){
  signal(1,1,1,1,1,1,1);
  signal(0,0,0,1,0,0,0);
  signal(0,0,1,0,1,0,0);
  signal(0,1,0,0,0,1,0);
  signal(0,0,0,0,0,0,1);
}

void L(){
  signal(1,1,1,1,1,1,1);
  signal(0,0,0,0,0,0,1);
  signal(0,0,0,0,0,0,1);
  signal(0,0,0,0,0,0,1);
  signal(0,0,0,0,0,0,1);
}

void M(){
  signal(1,1,1,1,1,1,1);
  signal(0,1,0,0,0,0,0);
  signal(0,0,1,0,0,0,0);
  signal(0,0,0,1,0,0,0);
  signal(0,0,1,0,0,0,0);
  signal(0,1,0,0,0,0,0);
  signal(1,1,1,1,1,1,1);
}

void N(){
  signal(1,1,1,1,1,1,1);
  signal(0,0,1,0,0,0,0);
  signal(0,0,0,1,0,0,0);
  signal(0,0,0,0,1,0,0);
  signal(1,1,1,1,1,1,1);
}

void O(){
  signal(0,1,1,1,1,1,0);
  signal(1,0,0,0,0,0,1);
  signal(1,0,0,0,0,0,1);
  signal(1,0,0,0,0,0,1);
  signal(0,1,1,1,1,1,0);
}

void P(){
  signal(1,1,1,1,1,1,1);
  signal(1,0,0,1,0,0,0);
  signal(1,0,0,1,0,0,0);
  signal(0,1,1,0,0,0,0);
}

void Q(){
  signal(0,1,1,1,1,1,0);
  signal(1,0,0,0,0,0,1);
  signal(1,0,0,0,1,0,1);
  signal(1,0,0,0,0,1,0);
  signal(0,1,1,1,1,0,1);
}

void R(){
  signal(1,1,1,1,1,1,1);
  signal(1,0,0,1,0,0,0);
  signal(1,0,0,1,1,0,0);
  signal(1,0,0,1,0,1,0);
  signal(0,1,1,0,0,0,1);
}

void S(){
  signal(0,1,1,0,0,0,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,0,0,1,1,0);
}

void T(){
  signal(1,0,0,0,0,0,0);
  signal(1,0,0,0,0,0,0);
  signal(1,1,1,1,1,1,1);
  signal(1,0,0,0,0,0,0);
  signal(1,0,0,0,0,0,0);
}

void U(){
  signal(1,1,1,1,1,1,0);
  signal(0,0,0,0,0,0,1);
  signal(0,0,0,0,0,0,1);
  signal(0,0,0,0,0,0,1);
  signal(1,1,1,1,1,1,0);
}

void V(){
  signal(1,1,1,0,0,0,0);
  signal(0,0,0,1,1,0,0);
  signal(0,0,0,0,0,1,1);
  signal(0,0,1,1,0,0,0);
  signal(1,1,1,0,0,0,0);
}  

void W(){
  signal(1,1,1,1,1,1,1);
  signal(0,0,0,0,0,1,0);
  signal(0,0,0,1,1,0,0);
  signal(0,0,0,0,0,1,0);
  signal(1,1,1,1,1,1,1);
}

void X(){
  signal(1,1,0,0,0,1,1);
  signal(0,0,1,0,1,0,0);
  signal(0,0,0,1,0,0,0);
  signal(0,0,1,0,1,0,0);
  signal(1,1,0,0,0,1,1);
}

void Y(){
  signal(1,1,0,0,0,0,0);
  signal(0,0,1,0,0,0,0);
  signal(0,0,0,1,1,1,1);
  signal(0,0,1,0,0,0,0);
  signal(1,1,0,0,0,0,0);
}

void Z(){
  signal(1,0,0,0,0,1,1);
  signal(1,0,0,0,1,0,1);
  signal(1,0,0,1,0,0,1);
  signal(1,0,1,0,0,0,1);
  signal(1,1,0,0,0,0,1);
}

void Sp(){
  signal(0,0,0,0,0,0,0);
  signal(0,0,0,0,0,0,0);
  signal(0,0,0,0,0,0,0);
  signal(0,0,0,0,0,0,0);
  signal(0,0,0,0,0,0,0);
}

void signal(int D1,int D2,int D3,int D4,int D5,int D6,int D7){
  
  if (D1==1) {digitalWrite(LED1,HIGH);}   else {digitalWrite(LED1,LOW);}
  if (D2==1) {digitalWrite(LED2,HIGH);}   else {digitalWrite(LED2,LOW);}
  if (D3==1) {digitalWrite(LED3,HIGH);}   else {digitalWrite(LED3,LOW);}
  if (D4==1) {digitalWrite(LED4,HIGH);}   else {digitalWrite(LED4,LOW);}
  if (D5==1) {digitalWrite(LED5,HIGH);}   else {digitalWrite(LED5,LOW);}
  if (D6==1) {digitalWrite(LED6,HIGH);}   else {digitalWrite(LED6,LOW);}
  if (D7==1) {digitalWrite(LED7,HIGH);}   else {digitalWrite(LED7,LOW);}
  
  delay(1);                            // change this accordimg to speed of motor
  
}

