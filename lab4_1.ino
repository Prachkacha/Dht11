#include <DHT.h>
DHT dht;
void setup()
{
  Serial.begin(9600);
  dht.setup(2); // data GPIO2 D4
}
void loop() {
  delay(dht.getMinimumSamplingPeriod());
  float humidity = dht.getHumidity(); 
  float temperature = dht.getTemperature(); 
  Serial.print(dht.getStatusString());
  Serial.print("\t Humidity = ");
  Serial.print(humidity, 1);
  Serial.print("\t Temperature = ");
  Serial.println(temperature, 1);
  delay(500);
}
