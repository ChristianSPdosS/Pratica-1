#include <stdio.h>
#include<math.h>

int main() {

float a= 1.0f;
float b= 6.0f;
float c= 5.0f;

float delta= (b * b -4 * a * c);

float x1= (-b + sqrt(delta))/(2 * a);
float x2= (-b - sqrt(delta))/(2 * a);

printf("%s%f\n" , "x1= " , x1);
printf("%s%f\n" , "x2= " , x2);


return 0;
}