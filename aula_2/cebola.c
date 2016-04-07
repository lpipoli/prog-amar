#include <stdio.h>

int main() {
	int usuario = 8852;
	int senha = 1234;

	int u;
	int s;

	scanf("%d", &u);
	scanf("%d", &s);

	if(usuario == u && senha == s) {
		printf("Você entrou!\n\n\n");
	}
	else {
		printf("Vai catar coquinho!\n\n\n");
	}

	return 0;
}