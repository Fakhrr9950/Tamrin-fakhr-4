
int ledpin=3;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);//start serial communication pins at rate 9600
pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
float voltage=analogRead(A0);//it is useed to read the base adc value  
float voltage1=voltage/1023*5;//perform proportional to convert adc value to voltage
Serial.print("Voltage=");
Serial.println(voltage1);// display the voltage value`in the serial manitor
//delay(1000);
float voltage2=map(voltage,0,1023,0,255);
analogWrite(3,voltage2);




}
