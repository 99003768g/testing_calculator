#include "area.h"

int area_circum(double radius)
 {
   double PIE = 3.141;
   double areaC = 0;
   areaC = PIE * radius * radius;
//    printf("Area of circle : %0.4f\n", areaC);
   return areaC;
}

int rect_area(int length,int width)
{
    int area1=0;
    area1=length*width;
   //  printf("Area of rectangle : %d\n", area1);
    return area1;
}

int square_area(int length)
{
    int area2=0;
    area2=length*length;
   // printf("Area of square : %d\n", area2);
   return area2;
}

int triangle_area(int length,int width)
{
    int area3=0;
    area3=0.5*length*width;
    //printf("Area of triangle : %d\n", area3);
    return area3;

}
