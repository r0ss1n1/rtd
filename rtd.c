#include <stdio.h>
#include <Windows.h>
#include <synchapi.h>
#define _USE_MATH_DEFINES
#include <math.h>
/* author: Charles Thomas Wallace Truscott at github.com/r0ss1n1. Email me at englishmansdentist@gmail.com */
/* Shout out to my father Mark Watters and uncle Rodney Watters */
/* Thanks for mentoring me for five years NSA and Australian Military */

int main(void) {
	printf("Charles Truscott, Radians to Degrees 0 <= n <= 360\xF8\n");
	printf("Command-line tool\n");
	printf("I love you Dad, Mark William Watters, uncle Rodney Watters\n");

	printf("Thanks for mentoring me for five years National Security Agency TAO\n");
	Sleep(3000);
	printf("To convert from radians to degrees, enter a number of degrees from 0 to 360\n");
	double degrees;
	scanf("%lf", &degrees);
	if (degrees < 0 || degrees > 361) {
		printf("EXITING. Enter a value between 0 and 360.9999999\n");
		exit(1);
	} else {
		printf("%lf degrees is %lf radians\n", degrees, degrees * (M_PI / 180));
	}
	printf("To display the sine, cosine, and tangent of a degree value, enter a number of degrees from 0 to 360\n");
	double i;
	scanf("%lf", &i);
	if (i < 0 || i > 361) {
		printf("EXITING. Enter a value between 0 and 360.9999999\n");
		exit(1);
	} else {
		printf("sin(%.3lf\xF8):%.3lf\tcosine(%.3lf\xF8):%.3lf\ttangent(%.3lf\xF8):%.3lf\n", i, sin((double) i * (M_PI / 180)), i, cos((double) i * (M_PI / 180)), i, tan((double) i * (M_PI / 180)));
	}
	
	return 0;
}