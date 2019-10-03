/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float centigrados, fahrenheit;
    char grados;
    printf("Ingrese los grados,(c=centigrados o f=fahrenheit)=");
    scanf("%c",&grados);
    if(grados=="c"){
        printf("Ingrese el valor");
        scanf("%f",& centigrados);
        fahrenheit=((9/5)*centigrados)+32;
        printf("fahrenheit=%f",fahrenheit);
    }
    else{
        printf("Ingrese el valor");
        scanf("%f",&fahrenheit);
        centigrados=((fahrenheit-32)/1.8);
        printf("centigrados=%f",centigrados);
    }
}    

