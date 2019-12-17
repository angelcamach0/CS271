//CS 271 - Lab 1
//Program Name: lab1.c
//Angel Camacho
//Aug, 27, 2019


#include <stdio.h>
#include <math.h>

//the purpouse of this is to calculate the length of hypothenuse
//of a right triangle.

int main (void){
    double radius;
    double circumference;
    double area;
    
    //input the length of the legs
    printf("Enter the radius A\n");
    scanf("%lf", &radius);
    
    circumference = M_PI*(radius + radius);
    area = M_PI*(radius * radius);
    
    printf("\nThe Circumference of the circule is: \n");
    printf("%.2f\n", area);
    
    
    printf("\nThe Area of the Circule is: \n");
    printf("%.2f\n", circumference);
    
    
    
}//end main functions
