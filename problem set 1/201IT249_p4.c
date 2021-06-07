#include<stdio.h>
int main()
{
    int pop , men, wom , menl, woml, menil , womil, popl,popil;
    pop = 80000;
    men = (52 * pop) / 100;
   wom = pop - men;
   popl = (48 * pop) / 100;
   menl = (35 * pop) / 100;
  woml = popl - menl;
  menil = men - menl;
     womil= wom - woml;

        printf("Illiterate population of men     :\t%d\n",menil);
    printf("Illiterate population of women   :\t%d",womil);

    return 0;
 
}