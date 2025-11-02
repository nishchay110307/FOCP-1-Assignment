// Q5. Develop a C program to determine the quadrant in which a given coordinate point (x, y) lies on
// the XY plane, illustrating the use of conditional statements and coordinate geometry logic relevant in
// game development and robotics navigation.


#include<stdio.h>
int main(){
float x,y;
printf("enter x");
scanf("%f",&x);
printf("enter y");
scanf("%f",&y);
 if (x>0&&y>0)
 
        printf("The point(%.2f, %.2f) lies in the 1st Quadrant.\n",x, y);
    else if (x<0&&y>0)
        printf("The point (%.2f, %.2f) lies in the 2nd Quadrant.\n",x, y);
    else if (x<0&&y< 0)
        printf("The point (%.2f, %.2f) lies in the 3rd Quadrant.\n",x, y);
    else if (x>0&&y <0)
        printf("The point(%.2f, %.2f) lies in the 4th Quadrant.\n",x, y);
    else if (x==0&&y==0)
        printf("The point(%.2f, %.2f) is at the Origin.\n",x, y);
    else if (x== 0)
        printf("The point (%.2f, %.2f) lies on the Y-axis.\n",x, y);
    else if (y== 0)
        printf("The point (%.2f, %.2f) lies on the X-axis.\n",x, y);

    return 0;
}
