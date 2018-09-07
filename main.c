/* This program computers the factorial
    of any given number and shows it to the user

    Author: Hugo Aguirre Doria
    Date: September 6, 2018
    */

#include <stdio.h>


int main(void) {

    int num, i, fact=1; //Variable declarations

    //Here we ask for n number to compute the factorial
    printf("Enter the number you are computing the factorial:\n");
    scanf("%d",&num);
    i=num;
    while(i>=1) //The cycle starts depending on conditions
    {
        fact=fact*i;    //Make operations and calculate
        i--;
    }
    printf("The factorial of given number %d is %d\n",num,fact); //We give the factorial of the entered number
    return 0;
}