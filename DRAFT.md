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


%%%%%%%% COMENTARIOS DE GUILHERME RICARTE %%%%%%% 

MULTIPLAS FILAS
    __________________________________
   |	F1		     |	      |
   |	0 -> 0 -> 0 ... 0    |	      |
   |	.		     |        |
   ->	.		     |-> CPU <-  
	.		     |    |
	0 -> 0 -> 0 ... 0    |	  -------> [fim]
	FN		     |


PROCESSOS:
	struct
		id
		prioridade
		tamanho
		tipo	
		quantum
		numeroDeVezesQueExecutou
		.
		.
		.

CPU:
	struct
		pid
		tempo
			//tipo: int
			//tempo logico
		.
		.
		.

ESQUEMA:

	while()
	//quando o tempo de processos for menor que 500
	//quando o tempo for < que 200.000
	{
		chega_ou_não_chega_processos(); //A cada [60] processos executa a função em questao
		executa_proximo();
		atualiza_estatisticas();
		.
		.
		.
	}
	
	chega_ou_não_chega_processos()
	{
		proba = 60
		x = random (100);
		if(x=<60)
		{
			criar_processo(); 
			//popula a struct processos.
			//cenario alternativo para gerar prioridade e tamanhos para novos processos.
			insere_fila();
		}
	}


ESTATISTICAS
	- througput //Tempo medio: a cada N intervalos de tempo verifica o numero de processos que terminaram e gera o througput                       
	 	  T= t1+t2+t3...+tn		ProcessosTerminados
		    ----------------     =    -----------------------
                           N				Tempo
	- tamanho medio filas //Tempo medio: a cada N intervalos de tempo verifica o tamanho da fila


INTERFACE GRAFICA (NAO!)
       	ID  NP
	F1 (25) 3 11 18 ... 2
	F2 (2)   7 17 ... 4
	.
	.
	.
	FN (6)   5 12 ... 4


Usar o esquema de debug Trace



		
	

	











