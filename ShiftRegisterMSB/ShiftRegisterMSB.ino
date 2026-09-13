// Dichiarazione variabili pin 

int data = 13;
int latch = 12;
int clock = 11;

int time = 1000;

// Setup

void setup() {

  // Pin output

  pinMode(data, OUTPUT);
  pinMode(latch, OUTPUT);
  pinMode(clock, OUTPUT);

}

// Loop

void loop() {

  // Ciclo accensione e spegnimento led

  for (int count = 0; count < 8; count++) {

    // Latch impostato su low

    digitalWrite(latch, LOW);

    // Funzione shiftOut per sequenza

    shiftOut(data, clock, MSBFIRST, 1 << count);

    // Latch impostato su high

    digitalWrite(latch, LOW);
    delay(time);

  }

}