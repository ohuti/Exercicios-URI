#include <stdio.h>

int main(void){
	int N, Ano, Mes, Dia;
	scanf("%d", &N);
	Ano = N / 365;
	Mes = N % 365 / 30;
	Dia = N % 365 % 30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", Ano, Mes, Dia);
	return 0;
}
