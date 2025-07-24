#include<stdio.h>
int main(){
    float a,b,c,s,ara;
    printf("Enter Your Frist Number Bahu a=");
    scanf("%f",&a);
    printf("Enter Your Frist Number Bahu b=");
    scanf("%f",&b);
    printf("Enter Your Frist Number Bahu c=");
    scanf("%f",&c);
    
    s = (a + b + c)/2;
    ara = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The ara Is = %.2f\n",ara);
    return 0;



}
