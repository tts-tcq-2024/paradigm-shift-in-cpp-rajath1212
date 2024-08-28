#include <assert.h>
#include <cassert>
#include <iostream>
using namespace std;
uint8_t batterycheck(bool temperatureCheck, bool socCheck, bool chargeRateCheck) {
  return temperatureCheck&&socCheck&&chargeRateCheck;
}
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
    return true;
 
}
bool chargeratecheck(float chargeRate)
{
  if(chargeRate > 0.8) {
    cout << "Charge Rate out of range!\n";
    return false;
  }
    return true;

}
bool batteryIsOk(float temperature, float soc, float chargeRate) {
   
bool tempflag    = temperaturecheck(temperature);
bool socflag     = soccheck(soc);
bool chargeflag  = chargeratecheck(chargeRate); 
        
  return batterycheck(tempflag, socflag, chargeflag) ;
}

int main() {
  
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
  return 0;
}
