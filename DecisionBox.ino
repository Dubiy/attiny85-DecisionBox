//attiny85

void setup() {
    int led1 = 0, led2 = 1, tmp = 0, i = 0, val = 0;   
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);

    int iterations = (analogRead(0) + analogRead(1) + analogRead(2) + analogRead(3)) % 10 + 15;

    for (i = 0; i < iterations; i++) {
      val = 0;
      while (val < 255) {
          analogWrite(led1, val);
          analogWrite(led2, 255 - val);
          val = val + 10;
          delay(i);
      }
      tmp = led1;
      led1 = led2;
      led2 = tmp;
    }
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
 }

void loop() {

}

