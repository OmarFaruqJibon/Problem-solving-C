#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

long int p,q,t=0,n,m,d,pp,pp2,P,C,flag=0;

int a,b,i,j;

int count;

double em,en,en2;

double ez,ez2=5.0;

int i2=1;

int gcd(int a)

{

// Finds the GCD and then asks the user to pick one of the related prime numbers between 1<e<m

    int remainder = 2;

    int divident,divisor;

// printf("Enter Number\n");

// scanf("%d",&p);

    for(i = 2 ; i < a ; i++)
    {

        divident = a;

        divisor = i;

        while(divisor != 0)
        {

            remainder = divident % divisor;

            divident = divisor;

            divisor = remainder;

        }

        if(divident == 1)
        {

            printf("Relatively Prime Number is : %d \n",i);

        }

    }

    printf("\nChoose a number\n");

    scanf("%d", &pp);

    return pp;

}

double de(int m, int pp2)

{

//Function de will do the operation ((i2*m)+1)/e

//i2 is the counter number

//If the operation has any remainders, it will loop back

    em = (i2*m)+1;

// printf("\nw %f\n",em);

    en2 = em;

    en = em/pp2;

// printf("\nwo %f\n",en);

    ez = fmod(em,pp2);

// printf("\nwo2 %f\n",ez);

    if(ez!=0)
    {

        i2++;

        return de(m,pp2);

    }

    return en;

}

int EncryKey(int count, int n)
{

    int startP,x=0,Cnew;

    printf("\nChoose a value for P: ");

    scanf("%d",&startP);

// printf("%d", startP);

    x = pow(startP, count);

    Cnew = x%n;

// printf("\n%d\n",Cnew);

    return Cnew;

}

int DecryKey(int C, int d, int n)
{

    int Pnew, x=0;

    x = pow(C, d);

// printf("\n%d\n",x);

    Pnew = x%n;

// printf("\n%d\n",Pnew);

    return Pnew;

}

int main()

{

// clrscr();

    printf("\nEnter the first prime number: ");

    scanf("%d",&p);

    t=p/2;

    for(i=2; i<=t; i++)
    {

        if(p%i==0)
        {

            printf("\nYou entered a number which is not a prime\n"); //If it's not a prime it will loop back to main and ask again

// getch():

            return main();

        }

    }

    m=0;

    printf("\nEnter the second prime number: ");

    scanf("%d",&q);

    t=q/2;

    for(i=2; i<=t; i++)
    {

        if(q%i==0)
        {

            printf("\nYou Entered a number which is not prime\n"); //If it's not a prime it will loop back to main and ask again

            return main();

        }

    }

    n = p*q;

    m = (p-1)*(q-1);

// printf("%d\n",m);

    count = gcd(m);

    d = de(m,count);

    C = EncryKey(count, n);

    P = DecryKey(C, d, n);

    printf("\nThe public key is {%d, %d}\n", count, n); //The following will print the private, public keys and the encrypted message

    printf("\nThe private key is {%d, %d}\n", d, n);

    printf("\nThe encrypted message is: %d\n",C);

    printf("\nThe decrypted message is: %d\n",P);

    return 0;

}
