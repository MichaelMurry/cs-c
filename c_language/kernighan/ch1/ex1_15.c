/* Exercise 1-15. REwrite the temperature conversion program from Exercise 1-2 to use a function for conversion */

#include <stdio.h>

/* fahr2celsius: convert fahrenheit to celsius */
float fahr2celsius(float f)
{
    float c;
    c = (5.0/9.0) * (f-32.0);
    return c;
}

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
        printf("%10.0f %7.1f\n", fahr, fahr2celsius(fahr));
	fahr = fahr + step;       
   }
}


