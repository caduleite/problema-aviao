#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	
	// Declaração de variavel
	float bagageiroA = 0.0, bagageiroB = 0.0, numeroVet, 
	      vetMala[15], vetA[15]={0}, vetB[15]={0};
	int qntMalaA = 0, qntMalaB = 0;
	
	// Entrada de dados
	for(int i=0;i<15;i++)
	{
		cout << "-> Mala N.: "<< i+1 << " - Informe o Peso da Mala Kg: ";
		cin >> vetMala[i];		
	}
	
    // Ordernação das Malas:
	for(int i=0; i<15; i++)
		{
        	for(int j=i+1; j<15; j++)
			{
        		if(vetMala[i] > vetMala[j])
				  {
				  	numeroVet = vetMala[i];
                    vetMala[i] = vetMala[j];
                    vetMala[j] = numeroVet;                          
                  }	
            }                   
        }
	
	// Operações, cálculos e restrições:	
	for(int i=14;i>=0;i--)
	{
		if(i==14)
		  {
			bagageiroA += vetMala[i];
			vetA[i] = vetMala[i];						
			qntMalaA++;
		  }
		else{
				if(bagageiroA > bagageiroB)
				  {
					bagageiroB += vetMala[i];
					vetB[i] = vetMala[i];
					qntMalaB++;
				  }
				else
					{
					   bagageiroA += vetMala[i];	
					   vetA[i] = vetMala[i];
					   qntMalaA++;
					}		
		    }
	}
	
	// Saida de dados
	cout << "\n -> Peso total Bagageiro A: " << bagageiroA << " kg. \n";
	cout << " -> Nº de Mala(s) alocadas no Bagageiro A: " << qntMalaA << "\n"; 
	cout << " -> Mala(s) alocadas no Bagageiro A: "; 
	
	// Saida de dados
	for(int i=14;i>=0;i--)
	{
		if(vetA[i]!=0)
		{
			cout << "[" << vetA[i] << "]"; 
		}
	}
	
	// Saida de dados
	cout << "\n\n -> Peso total Bagageiro B: " << bagageiroB << " kg. \n";
	cout << " -> Nº de Mala(s) alocadas no Bagageiro B: " << qntMalaB << "\n"; 
	cout << " -> Mala(s) alocadas no Bagageiro B: "; 

	// Saida de dados
	for(int i=14;i>=0;i--)
	{
		if(vetB[i]!=0)
		{
			cout << "[" << vetB[i] << "]"; 
		}
	}
	
	cout << "\n\n";
	
	system("PAUSE");
    return EXIT_SUCCESS;
	
}
