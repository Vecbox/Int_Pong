void setup() {

  Serial.begin(9600);     // initialize serial communication

}



void loop() {

  // read the inputs



  int leftPaddleUp = analogRead(A0);

  int leftPaddleDown = analogRead(A1);

  int rightPaddleUp = analogRead(A2);

  int rightPaddleDown = analogRead(A3);



  Serial.print(leftPaddleUp);                

  Serial.print(",");                   // add a comma

  Serial.print(leftPaddleDown);

  Serial.print(",");

  Serial.print(rightPaddleUp);

  Serial.print(",");

  Serial.println(rightPaddleDown);

  delay(10);                           // delay before sending the next set

}