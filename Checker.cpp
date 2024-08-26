#include <assert.h>
#include <cassert>
#include <iostream>
using namespace std;
bool temperaturecheck(float temperature1)
{  
    if(temperature1 < 0 || temperature1 > 45) {
    cout << "Temperature out of range!\n";
    return false;
    }
    else 
        return true;
}
bool soccheck(float soc1)
{
  if(soc1 < 20 || soc1 > 80) {
    cout << "State of Charge out of range!\n";
    return false;
  }
    else 
        return true;
}
bool chargeratecheck(float chargeRate1)
{
  if(chargeRate1 > 0.8) {
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
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
  return 0;
}
