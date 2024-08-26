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
    else 
        return true;
}
bool soccheck(float soc)
{
  if(soc < 20 || soc > 80) {
    cout << "State of Charge out of range!\n";
    return false;
  }
    else 
        return true;
}
bool chargeratecheck(float chargeRate)
{
  if(chargeRate > 0.8) {
    cout << "Charge Rate out of range!\n";
    return false;
  }
    else 
        return true;
}
bool batteryIsOk(float temperature, float soc, float chargeRate) {

  if((temperaturecheck(temperature)==false)||(soccheck(soc)==false)||(chargeratecheck(chargeRate)==false))
  {
    return false;
  }
  return true;
}

int main() {
  //assert(batteryIsOk(25, 70, 0.7) == true);
   assert(temperaturecheck(25) == true);
   assert(soccheck(70) == true);
   assert(chargeratecheck(0.7) == true);
   assert(temperaturecheck(50) == true);
   assert(soccheck(85) == true);
   assert(chargeratecheck(0) == true);
  //assert(batteryIsOk(50, 85, 0) == false);
  return 0;
}
