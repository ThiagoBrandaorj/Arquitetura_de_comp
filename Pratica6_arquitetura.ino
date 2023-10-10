#define I0 2 // define a macro relativa a entrada (pino) 2 - em cada pino um LED
#define I1 3
#define I2 4
#define S0 5 // define a macro relativa a saida (pino) 5 - em cada pino um LED
#define S1 6
#define S2 7

void setup(){
   pinMode(I0,INPUT); // Configura os pinos I0, I1 e I2 como entrada (leds)
   pinMode(I1,INPUT);
   pinMode(I2,INPUT);
  
   pinMode(S0,OUTPUT); // Configura os pinos S0, S1 e S2 como saida (botoes)
   pinMode(S1,OUTPUT);
   pinMode(S2,OUTPUT);
}

void loop(){
   int a, b , c , saida; // Declara as variáveis internas a funcao loop 
   a = digitalRead(I0); // Le a entrada e atribui o valor lido a variavel
   b = digitalRead(I1);
   c = digitalRead(I2);
  if (a==0 && b==0){
  digitalWrite (S0,HIGH);
    digitalWrite (S1,HIGH);
    digitalWrite (S2,HIGH);
  }
  if (a==1 && b==0){
    digitalWrite (S0,HIGH);
    digitalWrite (S1,LOW);
    digitalWrite (S2,LOW);}
  
  if (a==0 && b==1){
     digitalWrite (S0,LOW);
    digitalWrite (S1,HIGH);
    digitalWrite (S2,LOW);}
  
 if (a==1 && b==1){
    digitalWrite (S0,LOW);
    digitalWrite (S1,LOW);
    digitalWrite (S2,LOW);}
 
    
}