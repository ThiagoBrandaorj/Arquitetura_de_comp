#define S0 2 // define a macro relativa a saida (pino) 5 - em cada pino um LED
#define S1 3
#define S2 4
#define I0 8 // liga e desliga
#define I1 9
#define I2 10
#define I3 11
#define Do 262
#define Re 294 
#define Mi 330
#define Fa 349
#define Sol 392 
#define La 440 
#define Si 494
#define Pausa 0

void setup() {
  // put your setup code here, to run once:
   pinMode(S0,OUTPUT); // Configura os pinos S0, S1 e S2 como saida
   pinMode(S1,OUTPUT);
   pinMode(S2,OUTPUT);
   pinMode(I0,INPUT);
   pinMode(I1,INPUT);
   pinMode(I2,INPUT);
   pinMode(I3,INPUT);
}

void loop() {

  if (I0 == 0){
  tone(S0, 1000, 100); // Gera um tom de 50 Hz, no pino S0, com duração de 100 milissegundos
  tone(S1, 1000, 300); // Gera um tom de 1 kHz, no pino S1, com duração de 300 milissegundos
  tone(S2, 1000, 500); // Gera um tom de 2 kHz, no pino S2, com duração de 500 milissegundos
  }

  if (I0 == 1 && I1 == 1 && I2 == 0 && I3 == 0){
    tone(La,500);
    tone(Re,300);
    tone(Fa,250);
    tone(Sol, 250);
    tone(La, 250);
    tone(Re, 300); 
    tone(Fa, 200);
    tone(Sol, 200);
    tone(Mi, 700);
    tone(Pausa, 200);
    tone(Sol, 500);
    tone(Do, 500);
    tone(Fa, 200);
    tone(Mi,200);
    tone(Sol,200);
    tone(Do,500);
    tone(Fa,200);
    tone(Mi,200); 
    tone(Re,500);
    // musica
  }

  if (I0 == 1 && I1 == 1 && I2 == 1 && I3 == 0){
    // musica
  }

  if (I0 == 1 && I1 == 1 && I2 == 1 && I3 == 1){
    // musica
  }

  if (I0 == 1 && I1 == 0 && I2 == 0 && I3 == 0){
    // musica
  }

  if (I0 == 1 && I1 == 0 && I2 == 0 && I3 == 1){
    // musica
  }

  if (I0 == 1 && I1 == 0 && I2 == 1 && I3 == 0){
    // musica
  }

  if (I0 == 1 && I1 == 0 && I2 == 1 && I3 == 1){
    // musica
  }
}
