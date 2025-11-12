#include<stdio.h>

int main() {

/*
Name:kazi naveel
UIN:251P020
Class: Comps Eng
Division: C-1
*/

float physics,chemistry,maths;
printf("Enter your physics marks: \n");
scanf("%f", &physics);
printf("Enter your chemistry marks: \n");
scanf("%f", &chemistry);
printf("Enter your maths marks: \n");
scanf("%f", &maths);

float avg=(physics+chemistry+maths)/3.0;
printf(avg>=50 ? "You are eligible for Admission":"You are not eligible for Admission");

return 0;
}
