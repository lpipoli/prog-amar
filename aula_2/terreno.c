#include <stdio.h>

int main() {
	float c;
	float l;
	float p;

	scanf("%f", &c);
	scanf("%f", &l);
	scanf("%f", &p);

	float comp_da_tela = (2*c) + (2*l);
	printf("%.2f", comp_da_tela * p);
	return 0;
}