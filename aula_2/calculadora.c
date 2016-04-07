#include <stdio.h>

int main() {
	//Calculadora
	float x;
	float y;
	int operacao;

	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%d", &operacao);

	if(operacao == 1) {
		printf("%.2f\n", x + y);
	}
	else if(operacao == 2) {
		printf("%.2f\n", x - y);
	}
	else if(operacao == 3) {
		printf("%.2f\n", x * y);
	}
	else if(operacao == 4) {
		printf("%.2f\n", x / y);
	}
	else {
		printf("erro\n");
	}

	return 0;
}