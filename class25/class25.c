#include<stdio.h>
int main()
{
    char lower;
    printf("enter any lower case letter: ");
    scanf("%c", &lower);

    printf("the upper case letter is : %c", lower-32);

}