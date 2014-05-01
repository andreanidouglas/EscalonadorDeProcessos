DRAFT
=========

---Multiplas Filas de processo

int lambda = 0 //numero de processos executados
struct processo{
	int Id;
	prioridade;
	tamanho;
	tipo;
	quantum;
}

struct cpu{
	int pid_do_processo_em_execucao
	int tempo_de_simulacao(logico)=0
}

cpu.tempo = tempo+p[i].quantum


-ESQUEMA
while(cpu.tempo<tempo_maximo || lambda<lambda_maximo){
	chega_ou_nao_chega_processo()
	executa_proximo()
	atualiza_estatisticas()
	}
chega_ou_nao_chega_processo() //randomiza criacao de processos
{
	probabilidade=60
	x= random % 100
	if (x<probabilidade)
	{
		processo = cria_processo()
		inserir_fila(processo)
	}
}

-ESTATISTICAS
througput = processos_finalizados
media aritimetica do throughput por periodo de tempo
tamanho medio das filas













