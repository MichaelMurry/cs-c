/* Exercise 1-3. Write a program to print the corresponding Fahrenheit to Celsius table. 
	Include a heading above the table */

#include <stdio.h>

/* print Fahrenheit-Celsius Table
    for fahr = 0, 20, ..., 300; floating-point version */

main()
{
   float fahr, celsius;
   int lower, upper, step;
   char head1[12] = "Fahrenheit";
   char head2[7] = "Celsius";   

   lower = 0;		/* lower limit of temperature table */
   upper = 300;		/* upper limit */
   step = 20;		/* step size */

   fahr = lower;
   
   printf("%s %s\n", head1, head2);
   while (fahr <= upper) {
	celsius = (5.0/9.0) * (fahr-32.0);
        printf("%10.0f %7.1f\n", fahr, celsius);
	fahr = fahr + step;       
   }
}
