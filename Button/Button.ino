// Dichiarazione variabili pin

int led = 13;
int button = 12;

int time = 1000;
int state = 0;

// Setup

void setup() {

  // Pin input/output

  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

}

// Loop

void loop() {

  // Assegnazione stato tasto(0/1)

  state = digitalRead(button);

  // Tasto premuto/non premuto

  if (state == 1) {

    // Led acceso

    digitalWrite(led, HIGH);

  }
  else {

    // Led spento

    digitalWrite(led, LOW);

  }
  
}