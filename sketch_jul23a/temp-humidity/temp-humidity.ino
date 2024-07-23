#include <DHT.h>

DHT dht(26, DHT11);
void setup() {
  // put your setup code here, to run once:
  dht.begin();
  // delay needs to happen so it works in time
  delay(2000);
  // this is for the serial and the number needs to match on the serial too 
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  // this defines the temp and humidity
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();
  // print text for the temps and humidity
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print(" C ");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" % ");
  // make sure to end the line at the last bit here
  delay(2000);

}
