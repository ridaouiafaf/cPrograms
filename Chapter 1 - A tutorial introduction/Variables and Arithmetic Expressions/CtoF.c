#include <stdio.h>

int main(){
	float fahr, celsius;
	float lower, upper, step;
	
	printf("Give me the max value\n");
	scanf("%f",&upper);
	
	printf("Give me the min value\n");
	scanf("%f",&lower);
	
	printf("Give me the step value\n");
	scanf("%f",&step);
	
	printf("°C\t°F\n");
	printf("================================\n");
	
	while (fahr <= upper) {
	celsius = (5.0/9.0) * (fahr-32.0);
	printf("%3.0f %6.1f\n", fahr, celsius);
	fahr += step;
	}
}
