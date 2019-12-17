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

    // HealthProfile::HealthProfile(){
    //     firstName = "";
    //     lastName = "";
    //     gender = ""; 
    //     day = 0;
    //     month = 0;
    //     year = 0;
    //     height = 0;
    //     weight = 0;
    //     insurance = "";
    // }

//Constructor
   HealthProfile::HealthProfile(string fName, string lName, string gender, int day, int month, int year){
       //firstName = fName;
       setFirstName(fName);
       setLastName(lName);
       //lastName = lName;
       // I know I could of put them in difrent lines but I just did it to practice.
        // if ( month > 0 && month <= 12) {          } else { throw invalid_argument("Invalid month.");}
       setMonth(month);
       //if ( gender == "M" || gender == "F"){    gender = gender;    } else { throw invalid_argument("Invalid gender.");}
       setGender(gender);
       //if ( day > 0 && day <= 31 ){      } else { throw invalid_argument("Invalid day.");}
       setDay(day);
       setYear(year);
   }

//Assessors
   string HealthProfile::getFirstName( ){
       return firstName;
   }
   string HealthProfile::getLastName( ){
       return lastName;
   }
   string HealthProfile::getGender( ){
       return gender;
   }
   int HealthProfile::getDay( ){
       return day;
   }
   int HealthProfile::getMonth( ){
       return month;
   }
   int HealthProfile::getYear( ){
       return year;
   }
   double HealthProfile::getHeight( ){
       return height;
   }
   double HealthProfile::getWeight( ){
       return weight;
   }
   string HealthProfile::getInsurance( ){
       return insurance;
   }

//Mutators
   void HealthProfile::setFirstName( string fname){
       firstName = fname;
   }
   void HealthProfile::setLastName( string lname ){
       lastName = lname;
   }
   void HealthProfile::setGender( string g ){
       if ( g == "M" || g == "F"){    
           gender = g;    
           } else { throw invalid_argument("Invalid gender.");}
       
   }
   void HealthProfile::setDay(int d){
       int m = 0;
       m = getMonth();
       //int months[] = {0, 31 , 28 , 31 , 30, 31, 30, 31, 31, 30, 31, 30, 31};
       if ( ( m ==  2 ) && ( d > 0 && d <= 28 )){
               day = d;
        }
        else if ( ( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 ) && ( d > 0 && d <= 31 )){
               day = d;
        } 
        else if ( ( m == 4 || m == 6 || m == 9 || m == 11 ) && ( d > 0 && d <= 30 )){ 
               day = d;
            }else { 
                throw invalid_argument("Invalid day for Month.");
        }
          
   } 
   void HealthProfile::setMonth( int m){
       if ( m > 0 && m <= 12) {    
           month = m; 
       } else { 
           throw invalid_argument("Invalid month.");
           }
       
   }
   void HealthProfile::setYear( int y ){
     if( y > 0){
       year = y;
     } else{
       throw invalid_argument("Invalid year.");
     }
   
   }
   void HealthProfile::setHeight( double h){
       if ( h < 0 ){
           throw invalid_argument("Invalid height!");
       }
       height = h;
   }
   void HealthProfile::setWeight( double w){
       if( w < 0){
           throw invalid_argument("Invalid weight");
       }
       weight = w;
   }
   void HealthProfile::setInsurance( string i){
       insurance = i;
   }

// //Other Functions
   void HealthProfile::dobChanger(int month, int day, int year){
       setMonth(month);
       setDay(day);
       setYear(year);
   }
   float HealthProfile::calcAgeInYears(){
       // was not sure how to use the time function so I looked up how to use it
       // however the logic implemented is mine
       time_t now = time(0);
       float yr2 = getYear() , mm2  = getMonth(), dy = getDay();
       struct tm dayofbirth;
       float seconds = 0.0;
       dayofbirth = *localtime(&now); // temporary
       dayofbirth.tm_mon = mm2-1; 
       dayofbirth.tm_mday = dy;
       dayofbirth.tm_year = yr2-1900;

       seconds = difftime(now,mktime(&dayofbirth));
       float result = seconds/31557600; 
       return result;
   }
   float HealthProfile::calcMHR(){
       // max hear rate cal age 220 - age
       float result = 220 - calcAgeInYears();
       return result;
   }
   float * HealthProfile::calcTHR(){
       // max heart rate * .50 85 percent
       float min = calcMHR() * .50;
       float max = calcMHR() * .80;
       static float range [2];
       range[0] = min;
       range[1] = max;
       return range;
   }




   /* tm *ltm = localtime(&now);
       float yr, mm, dd, ss;
       yr = ltm->tm_year;
       mm = ltm->tm_mon + 1;
       dd = ltm->tm_yday;
       float yr2 , mm2, dd2, ss2;
       yr2 = getYear();
       mm2 = getMonth();
       dd2 = getDay();
       */