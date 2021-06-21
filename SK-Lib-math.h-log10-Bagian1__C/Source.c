/* log10 example */
#include <stdio.h>      /* printf */
#include <math.h>       /* log10 */
#include <conio.h>

/*	Source by CPlusPlus
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main() {
	double param, result;
	param = 1000.0;
	result = log10(param);
	printf("log10(%f) = %f\n", param, result);
	_getch();
	return 0;
}