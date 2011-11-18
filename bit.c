#include<msp430.h>
main()
{
       int n,i=3;
       P1DIR = 0;
       while(((P1IN >> i) & 1) == 1)
       {
       }
        P1DIR = 1;
        P1OUT = 1;
}

