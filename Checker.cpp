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
bool batteryIsOk(float temperature, float soc, float chargeRate) {
   
temperaturecheck(temperature);
soccheck(soc);
chargeratecheck(chargeRate); 
        
  return true;
}

int main() {
  
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
  return 0;
}
