#include <stdio.h>

/* print Fahrenheit-Celsius conversion
   table for F° = 0, 20, ..., 300 */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;    /* lower limit of temperature table */
	upper = 300;  /* upper limit */
	step = 20;    /* step size */

	/* table header */
	printf("F°   C°\n");    
	printf("----------\n");

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f  %5.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
