float  val=0.0;
float temp;
void setup() {
pinMode(A0,INPUT);//Initialising the analog pin
Serial.begin(9600);//Starting the serial communication(Output on serial monitor)
}

void loop() {
 val=4.54 *analogRead(A0);//4.636 is for a voltage of 4.75v
 temp= val/10;
 Serial.print("Temperature= ");//Serial Monitor Outputs
 Serial.print(temp);
  Serial.println("C");
 delay(1000);

}
