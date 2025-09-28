#include <stdio.h>
int main() {
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>18)
    {
        printf("You are adult.\n");
        printf("you can vote.\n");
    }

  else if (age==18)
  {
    printf("you are eligible to vote this year");

  }

    else
     {
        printf("you are not eligible to vote yet.");
    } 
    return 0;

    }