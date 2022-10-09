#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){ 
int se,ce,jn;
    
    do{
	  jn=0;
	  printf("Escolha uma jogada:\n 1.Pedra 2.Papel 3.Tesoura 4.Lagarto 5.Spock \n ");
	  scanf("%d",&se);
	  
	  srand(time(NULL));
	  ce=rand()%5+1;
	  printf("Escolha computador: %d\n",ce);
	 
	  
	   
	    if((se==1&&ce==1)||(se==2&&ce==2)||(se==3&&ce==3)||(se==4&&ce==4)||(se==5&&ce==5)){
			printf("Empate\n");
			printf("Quer jogar novamente ?\n 1.sim 2.nao");
			scanf("%d",&jn);}
	    else if((se==1&&ce==3)||(se==3&&ce==2)||(se==2&&ce==1)||(se==1&&ce==4)||(se==4&&ce==5)||(se==5&&ce==3)||(se==3&&ce==4)||(se==4&&ce==2)||(se==2&&ce==5)||(se==5&&ce==1)){
			
			printf("Voce Ganhou !\n");}
			
		else if((ce==1&&se==3)||(ce==3&&se==2)||(ce==2&&se==1)||(ce==1&&se==4)||(ce==4&&se==5)||(ce==5&&se==3)||(ce==3&&se==4)||(ce==4&&se==2)||(ce==2&&se==5)||(ce==5&&se==1)){
			
			printf("Voce Perdeu !\n");}
			
	}while(jn==1);	
}
		  
