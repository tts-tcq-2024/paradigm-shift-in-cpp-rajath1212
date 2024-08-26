#include <assert.h>
#include <cassert>
#include <iostream>
using namespace std;
bool temperaturecheck(float temperature)
{  
    if(temperature < 0 || temperature > 45) {
    cout << "Temperature out of range!\n";
    return false;
    }
}
bool soccheck(float soc)
{
  if(soc < 20 || soc > 80) {
    cout << "State of Charge out of range!\n";
    return false;
  }
    
}
bool chargeratecheck(float chargeRate)
{
  if(chargeRate > 0.8) {
    cout << "Charge Rate out of range!\n";
    return false;
  }
}

int main() {
  
   assert(temperaturecheck(25) == true);
   assert(soccheck(70) == true);
   assert(chargeratecheck(0.7) == true);
   assert(temperaturecheck(50) == false);
   assert(soccheck(85) == false);
   assert(chargeratecheck(0) == false);
  return 0;
}
