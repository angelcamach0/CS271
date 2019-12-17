// Angel Camacho
// Nov 13, 2019
#include <string>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <stdexcept>
#include <cmath>
#include "HealthProfile.h"
using namespace std;

int main(){
    cout << "This is a test" << endl;
    //HealthProfile Angel;                    //  dd/mm/yyyy
    HealthProfile Angel("Angel", "Camacho", "M" , 30, 3, 2000); 
    
    // Angel.setLastName("Camacho");
    // Angel.setGender("M");
    // Angel.setDay(12);
    // Angel.setMonth(2);
    // Angel.setYear(2000);

    cout << Angel.getFirstName() << endl;
    Angel.setFirstName("Gabriel");
    cout << "Month: " << Angel.getMonth() << " Day: " << Angel.getDay() << endl;
    cout << Angel.getFirstName() << endl;
    cout << "Age in Years: " << Angel.calcAgeInYears() << endl; 
    float *target;
    target = Angel.calcTHR();
    cout << "Minimum Heart Rate: " << target[0] << " Maximum Heart Rate: " << target[1] <<  endl;    

}