/* Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table. */

#include <stdio.h>

/* print Celsius-Fahrenheit Table
    for celsius = 0, 20, ..., 300; floating-point version */

main()
{
   float fahr, celsius;
   int lower, upper, step;
   char head1[12] = "Fahrenheit";
   char head2[12] = "Celsius";   

   lower = 0;		/* lower limit of temperature table */
   upper = 300;		/* upper limit */
   step = 20;		/* step size */

   celsius = lower;
   
   printf("%s\t%s\n", head2, head1);
   while (celsius <= upper) {
       fahr = (9.0/5.0) * celsius + 32.0;
       printf("%7.0f %10.1f\n", celsius, fahr);
       celsius = celsius + step;
   }
}
