#include <stdio.h>

int main(){
    
    // Find Area Of Square.
    float side;
    printf("Enter Side Of Square :: ");
    scanf("%f",&side);
    printf("Area Of The Square Is :: %f",side*side);
    return 0;
  
    // Find Area of Circle.
    float radius;
    printf("Enter The Radius Circle :: ");
    scanf("%f",&radius);
    printf("Area Of Circle Is :: %f",3.14*radius*radius);
    return 0;
  
    // Find Area Of Triangle.
    float base;
    float height;
    printf("Enter The Length Of Base Of The Triangle :: ");
    scanf("%f",&base);
    printf("Enter The Height Of Triangle ::");
    scanf("%f",&height);
    printf("Area Of The Triangle Is :: %f",0.5*base*height); // 1/2 = 0.5

    // Area Of Sphere
    float radius;
    printf("Enter The Radius Of The Sphere :: ");
    scanf("%f",&radius);
    printf("Area Of The Sphere Is :: %f",4*3.14*radius*radius);

    // Added All In Same File, It's Just For Example & My Practice.
}
