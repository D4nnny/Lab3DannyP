const int boton1 = 3;
const int boton2 = 4;
const int boton3 = 5;
const int led1 = 8;
const int led2 = 9;
const int led3 = 10;

const int poten = A1;
int valuePoten;
void setup() {
  // put your setup code here, to run once:
   // Configure the pins for the buttons and LEDs as inputs and outputs
  pinMode(boton1, INPUT_PULLUP);
  pinMode(boton2, INPUT_PULLUP);
  pinMode(boton3, INPUT_PULLUP);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  // Configure the serial port at a baud rate of 9600
  Serial.begin(9600);

}

void loop() {
  // Read the state of the buttons and turn on and off the required button
  if (digitalRead(boton1) == LOW) {
    digitalWrite(led1, HIGH);
  } else {
    digitalWrite(led1, LOW);
  }
  if (digitalRead(boton2) == LOW) {
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(led2, LOW);
  }
  if (digitalRead(boton3) == LOW) {
    digitalWrite(led3, HIGH);
  } else {
    digitalWrite(led3, LOW);
  }

  // Read the value of the potenciometer and print it on the serial monitor
  valuePoten = analogRead(poten);
  Serial.print("Potenciometro: ");
  Serial.println(valuePoten);
  delay(100);
}
