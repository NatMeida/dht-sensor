#include <DHT.h>
#include <DHT_U.h>

// C++ code
//

#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup()
{
  Serial.begin(9600);
  dht.begin();
}

void loop()
{
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println("ºC");

  Serial.print("Umidade relativa: ");
  Serial.print(temperature);
  Serial.println("%");

  delay(1000);
}

