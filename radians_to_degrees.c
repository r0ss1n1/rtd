﻿#include <stdio.h>
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
	for(int i = 0; i < 361; ++i) {
		printf("%d degrees is %lf radians\n", i,(float) i * (M_PI / 180));
		Sleep(500);
	}
	for(int i = 0; i < 361; ++i){
		printf("sin(%d\xF8):%.3lf\tcosine(%d\xF8):%.3lf\ttangent(%d\xF8):%.3lf\n", i, sin((double) i * (M_PI / 180)), i, cos((double) i * (M_PI / 180)), i, tan((double) i * (M_PI / 180)));
		Sleep(500);
	}
	return 0;
}