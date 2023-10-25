#define I0 11
#define I1 10
#define I2 9
#define I3 8
#define S0 2
#define S1 3
#define S2 4

int tempo = 100;

void setup() {
  pinMode(I0, INPUT);
  pinMode(I1, INPUT);
  pinMode(I2, INPUT);
  pinMode(I3, INPUT);

  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
}

void loop() {
  int sw1, sw2, sw3, sw4;
  sw1 = digitalRead(I0);
  sw2 = digitalRead(I1);
  sw3 = digitalRead(I2);
  sw4 = digitalRead(I3);

  if (sw1 == 1) {
    if (sw2 == 1 && sw3 == 1 && sw4 == 1) {
      playGameOfThronesIntro();
    }
    if (sw2 == 1 && sw3 == 1 && sw4 == 0) {
      playStarWarsTheme();
    }
    if (sw2 == 1 && sw3 == 0 && sw4 == 0) {
      playGodfatherTheme();
    }
    if (sw2 == 1 && sw3 == 0 && sw4 == 1) {
      playInterstellarTheme();
    }
    if (sw2 == 0 && sw3 == 1 && sw4 == 1) {
      playHarryPotterTheme();
    }
    if (sw2 == 0 && sw3 == 0 && sw4 == 1) {
      playMarioTheme();
    }
    if (sw2 == 0 && sw3 == 1 && sw4 == 0) {
      playSilentNight();
    }
    if (sw2 == 0 && sw3 == 0 && sw4 == 0) {
      playOdeToJoy();
    }
  } else {
    noTone(S0);
    noTone(S1);
    noTone(S2);
  }


delay(5000);
}

void playGameOfThronesIntro() {
  int melody[] = {
    329, 391, 440, 391, 329, 391, 440, 391, 329, 493, 554, 523, 493, 440,
    391, 493, 554, 493, 391, 329, 391, 440, 493, 391, 329, 293, 329, 391,
    440, 391, 329, 391, 440, 391, 329, 493, 554, 523, 493, 440,
    391, 329, 391, 523, 493, 391
  };

  int duration[] = {
    200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 400,
    200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 400,
    200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200,
    200, 200, 200, 200, 200, 400
  };

  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    tone(S2, melody[i], duration[i]);
    delay(duration[i]);
  }
}

void playStarWarsTheme() {
  int melody[] = {
    392, 392, 392, 311, 466, 392, 587, 784, 587, 784, 1174,
    1047, 987, 987, 1047, 784, 880, 784, 987, 784, 587,
    784, 987, 784, 587, 523, 659, 587, 523, 493,
    466, 392, 466, 587, 784, 587, 784, 1174
  };

  int duration[] = {
    400, 400, 400, 250, 250, 400, 250, 250, 400, 400, 800,
    400, 400, 400, 250, 250, 250, 250, 400, 250, 250,
    400, 400, 400, 250, 250, 250, 250, 400,
    400, 400, 400, 250, 250, 400, 250, 250
  };

  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    tone(S0, melody[i], duration[i]);
    delay(duration[i]);
  }
}

// Continue com as outras funções de melodias

void playGodfatherTheme() {
  int melody[] = {
    784, 880, 987, 1047, 784, 880, 987, 1047, 784, 880, 987,
    698, 784, 880, 987, 1047, 784, 880, 784, 987, 1047, 784, 698
  };

  int duration[] = {
    250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250,
    250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250
  };

  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    tone(S0, melody[i], duration[i]);
    delay(duration[i]);
  }
}

void playInterstellarTheme() {
  int melody[] = {
    523, 523, 659, 784, 880, 988, 1047, 784, 523, 659, 784, 880, 988,
    1047, 784, 659, 523, 392, 523, 659, 784, 880, 784, 523, 392
  };

  int duration[] = {
    375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375, 375,
    375, 750, 375, 375, 375, 375, 375, 375, 375, 375, 375, 750
  };

  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    tone(S0, melody[i], duration[i]);
    delay(duration[i]);
  }
}

void playHarryPotterTheme() {
  int melody[] = {
    784, 659, 698, 987, 784, 659, 698, 1175, 1047, 784, 659,
    987, 784, 587, 659, 523
  };

  int duration[] = {
    250, 250, 250, 500, 250, 250, 250, 500, 250, 250, 250,
    500, 250, 375, 375, 500
  };

  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    tone(S0, melody[i], duration[i]);
    delay(duration[i]);
  }
}

void playMarioTheme() {
  int melody[] = {
    880, 880, 784, 698, 784, 880, 784, 659, 523, 587, 659, 698, 784, 880, 784, 698,
    784, 880, 784, 659, 784, 698, 784, 659, 587, 494, 523, 587, 659, 698, 784, 880, 987, 880, 784, 698, 784, 880, 784, 659, 523, 587, 659, 698, 784, 880, 784, 698, 784, 880, 784, 659, 784, 698, 784, 659, 587, 494, 523, 587, 659, 698, 784, 880, 987, 880, 784, 698, 784, 880, 784, 659, 587, 659, 698, 784, 880, 784, 698, 784, 880, 784, 659, 659
  };

  int duration[] = {
    250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 150,
    250, 250, 250, 250, 250, 250, 250, 250, 250, 150, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 150, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 150, 250, 250, 250, 250, 250, 250, 250, 250, 250, 150, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250
  };

  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    tone(S0, melody[i], duration[i]);
    delay(duration[i]);
  }
}

void playSilentNight() {
  int melody[] = {
    349, 349, 392, 349, 440, 349, 523, 466, 440, 349, 392, 349, 349, 294, 349,
    349, 392, 349, 440, 349, 523, 466, 440, 349, 392, 349, 349, 523, 440, 392, 349,
    349, 349, 349, 392, 349, 440, 349, 523, 466, 440, 349, 392, 349, 349, 294, 349,
    392, 349, 349, 349, 349, 349, 349, 349, 392, 349, 440, 466, 440, 349
  };

  int duration[] = {
    200, 200, 400, 200, 200, 200, 400, 200, 200, 200, 200, 400, 200, 200, 400,
    200, 200, 200, 200, 200, 400, 200, 200, 200, 200, 400, 200, 200, 400, 200, 200,
    200, 200, 400, 200, 200, 200, 400, 200, 200, 200, 200, 400, 200, 200, 400, 200,
    200, 200, 200, 200, 200, 200, 200, 400, 200, 200, 200, 400, 200
  };

  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    tone(S0, melody[i], duration[i]);
    delay(duration[i]);
  }
}

void playOdeToJoy() {
  int melody[] = {
    392, 440, 494, 523, 587, 659, 587, 523, 494, 440, 392, 440, 494, 523,
    587, 659, 587, 523, 494, 440, 392, 392, 349, 349, 392, 440, 392
  };

  int duration[] = {
    400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400,
    400, 400, 400, 400, 400, 400, 400, 800, 400, 400, 400, 400, 800
  };

  for (int i = 0; i < sizeof(melody) / sizeof(melody[0]); i++) {
    tone(S0, melody[i], duration[i]);
    delay(duration[i]);
  }
}