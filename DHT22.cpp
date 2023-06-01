#include <DHT.h>

\\Construtor 
DHT22::DHT22(int pino)
{
  DHT dht(dadosDHT, DHT22)
}

void DHT22::begin()
{
  dht.begin();
  delay(2000);
}

double DHT22::getTemp_C()
{
  double Vtemp = 0.0;
  int N=10;
  for (int i =0;i<N;i++){
  Vtemp = Vtemp +  dht.readTemperature()// Retorna o valor da temperatura em °C
  }
  return Vtemp/N;
}