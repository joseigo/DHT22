#ifdef DHT22_H
#define DHT22_H
#include <DHT.h>
 
 class DHT22
 {
   private:
    int pin;
    double data;
    DHT dht;

   public:
   \Construtor 
    DHT22(int pin) \\Construtor 
    void begin();
    double getTemp_C();
    double getTemp_F();
 }
 
#endif