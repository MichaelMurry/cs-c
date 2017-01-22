#include<stdio.h>
main()
{
    int fahr, celsius;
    int lower, upper, step;

    char str1[12] = "Fahrenheit";
    char str2[12] = "Celsius";

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%s\t%s\n", str1, str2);
    while (fahr <= upper) {
	celsius = 5 * (fahr-32) / 9;
	printf("%d\t%11d\n", fahr, celsius);
	fahr = fahr + step;
    }
    celsius = lower;
    printf("%s\t%s\n", str2, str1);
    while (celsius <= upper) {
	fahr = (celsius * 9) / 5 + 32;
        printf("%d\t%5d\n", celsius, fahr);
	celsius = celsius + step;
    }
}
