#include <stdio.h>

int main() {
	float nota_um;
	float nota_dois;

	scanf("%f", &nota_um);
	scanf("%f", &nota_dois);

	float media = (nota_dois + nota_um)/2;

	if(media >= 7) {
		printf("aprovado\n");
	}
	else if(media >= 3) {
		printf("final\n");
	}
	else {
		printf("nos vemos no próximo período\n");
	}

	return 0;
}