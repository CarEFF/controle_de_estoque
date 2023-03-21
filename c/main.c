#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int mes1, mes2, mes3, produtoA, produtoB, produtoC, TempoRepos, LoteRepos, Estoquemin, Estoquemax, Estoqueatual,VendaMediaDiaria;
	
	printf("INFORME O VALOR DE VENDA DO MES 1:");
	scanf("%i", &mes1);
	
	printf("INFORME O VALOR DE VENDA DO MES 2:");
	scanf("%i", &mes2);
	
	printf("INFORME O VALOR DE VENDA DO MES 3:");
	scanf("%i", &mes3);
	
	VendaMediaDiaria = ((mes1+mes2+mes3)/3)/25; 
	
	printf("SUA VENDA MEDIA DIARIA E: %i \n", VendaMediaDiaria);
	
	printf("INFORME O ESTOQUE ATUAL:");
	scanf("%i",&Estoqueatual);
	
	printf("INFORME O TEMPO DE REPOSITACAO:");
	scanf("%i",&TempoRepos);
	
	printf("INFORME O LOTE DE REPOSICAO:");
	scanf("%i",&LoteRepos);
	
	Estoquemin = VendaMediaDiaria * TempoRepos;
	Estoquemax = Estoquemin + LoteRepos; 
	
	printf("ESTOQUE ATUAL DO PRODUTO A: %i \n", Estoqueatual);
	printf("ESTOQUE MINIMO DO PRODUTO A: %i \n", Estoquemin);
	printf("ESTOQUE MAXIMO DO PRODUTO A: %i \n", Estoquemax);
	
	Estoquemin = Estoquemin - Estoqueatual; 
	
	if(Estoqueatual < Estoquemin){
		printf("REABASTECER ESTOQUE MINIMO COM: %i\n", Estoqueatual);
	}else 
		if(Estoqueatual < Estoquemax){
		printf("ESTOQUE OK COM: %i\n", Estoquemax);
	}else
		if(Estoqueatual >= Estoquemax ){
			printf("ESTOQUE CHEIO COM: %i\n", Estoquemax);
		}
		
	
	
	printf("------------------------------------\n");
	printf("INFORME O VALOR DE VENDA DO MES 1:");
	scanf("%i", &mes1);
	
	printf("INFORME O VALOR DE VENDA DO MES 2:");
	scanf("%i", &mes2);
	
	printf("INFORME O VALOR DE VENDA DO MES 3:");
	scanf("%i", &mes3);
	
	VendaMediaDiaria = ((mes1+mes2+mes3)/3)/25; 
	
	printf("SUA VENDA MEDIA DIARIA E: %i \n", VendaMediaDiaria);
	
	printf("INFORME O ESTOQUE ATUAL:");
	scanf("%i",&Estoqueatual);
	
	printf("INFORME O TEMPO DE REPOSITACAO:");
	scanf("%i",&TempoRepos);
	
	printf("INFORME O LOTE DE REPOSICAO:");
	scanf("%i",&LoteRepos);
	
	Estoquemin = VendaMediaDiaria * TempoRepos;
	Estoquemax = Estoquemin + LoteRepos;
	 
	printf("ESTOQUE ATUAL DO PRODUTO B: %i \n", Estoqueatual);
	printf("ESTOQUE MINIMO DO PRODUTO B: %i \n", Estoquemin);
	printf("ESTOQUE MAXIMO DO PRODUTO B: %i \n", Estoquemax);
	
	Estoquemin = Estoquemin - Estoqueatual;
	
	if(Estoqueatual < Estoquemin){
		printf("REABASTECER ESTOQUE MINIMO COM: %i\n", Estoqueatual);
	}else 
		if(Estoqueatual < Estoquemax){
		printf("ESTOQUE OK COM: %i\n", Estoquemax);
	}else
		if(Estoqueatual >= Estoquemax ){
			printf("ESTOQUE CHEIO COM: %i\n", Estoquemax);
		}
	
	
	printf("------------------------------------\n");
	printf("INFORME O VALOR DE VENDA DO MES 1:");
	scanf("%i", &mes1);
	
	printf("INFORME O VALOR DE VENDA DO MES 2:");
	scanf("%i", &mes2);
	
	printf("INFORME O VALOR DE VENDA DO MES 3:");
	scanf("%i", &mes3);
	
	VendaMediaDiaria = ((mes1+mes2+mes3)/3)/25; 
	
	printf("SUA VENDA MEDIA DIARIA E: %i \n", VendaMediaDiaria);
	
	printf("INFORME O ESTOQUE ATUAL:");
	scanf("%i",&Estoqueatual);
	
	printf("INFORME O TEMPO DE REPOSITACAO:");
	scanf("%i",&TempoRepos);
	
	printf("INFORME O LOTE DE REPOSICAO:");
	scanf("%i",&LoteRepos);
	
	Estoquemin = VendaMediaDiaria * TempoRepos;
	Estoquemax = Estoquemin + LoteRepos; 
	
	printf("ESTOQUE ATUAL DO PRODUTO C: %i \n", Estoqueatual);
	printf("ESTOQUE MINIMO DO PRODUTO C: %i \n", Estoquemin);
	printf("ESTOQUE MAXIMO DO PRODUTO C: %i \n", Estoquemax);
	
	Estoquemin = Estoquemin - Estoqueatual;
	
	if(Estoqueatual < Estoquemin){
		printf("REABASTECER ESTOQUE MINIMO COM: %i\n", Estoqueatual);
	}else 
		if(Estoqueatual < Estoquemax){
		printf("ESTOQUE OK COM: %i\n", Estoquemax);
	}else
		if(Estoqueatual >= Estoquemax ){
			printf("ESTOQUE CHEIO COM: %i\n", Estoquemax);
		}
	
	
	return 0;
}
