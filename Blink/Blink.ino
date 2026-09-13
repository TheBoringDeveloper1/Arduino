// Dichiarazione variabili

int led = 13;
int time = 1000;

// Setup

void setup() {

  // Pin output

  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

// Loop

void loop() {

  // Led acceso

  digitalWrite(led, HIGH);
  Serial.println("Led acceso!");

  delay(time);

  // Led spento

  digitalWrite(led, LOW);
  Serial.println("Led spento!");

  delay(time);
  
}