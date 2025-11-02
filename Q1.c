#include<stdio.h>
#include<math.h>
int main(){
    int num, num1, rmnd; //num 1 is for storing the value of orignal number and rmnd is for remainder
    int n=0;
    float result=0.0;
    // input from user
    printf("enter the number");
    scanf("%d",&num);

    num1=num;

    //firstly we ahve to count the number of digits

    while(num1 !=0){
        num1/=10;
        n++;
    }
    
    num1=num;

    while (num1 != 0) {
        rmnd = num1 % 10;
        result += pow(rmnd, n);
        num1 /= 10;
    }
    if((int)result==num){
        printf("%d is an Armstrong number.\n",num);
    }
    else{
        printf("%d is not an armstrong number.",num);}
    return 0;
}