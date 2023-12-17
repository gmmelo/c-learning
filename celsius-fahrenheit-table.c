#include <stdio.h>

/* print Celsius-Fahrenheit conversion
   table for C° = -50, -40, ..., 100 */

int main()
{
	float celsius, fahr;
	int lower, upper, step;

	lower = -50;   /* lower limit for C° in temperature table */ 	 
	upper = 100; /* upper limit */
	step = 10;   /* interval size for table entries */

	/* table heading */
	printf("C°   F°\n");
	printf("--------\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius * (9.0 / 5.0) + 32.0;
		printf("%3.0f  %3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
