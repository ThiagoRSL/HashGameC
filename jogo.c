#include <stdio.h>
#include <locale.h>

int main()
{
    char casas[9] = {'1','2','3','4','5','6','7','8','9'}; 
    int casaAtual = 0;
    char jogadorAtual = 'X';    
    char sair = 'N'; 

    while (sair != 'S')
    {
        system("cls");
        printf("\n\n");
        for(int count = 0; count < 9; count++)
        {
            printf("%c", casas[count]);
            if(count == 2 || count == 5 || count == 8)
            {
                printf("\n");
            }
            else
            {
                printf("|");
            }        
        }    
        printf("\n Realize sua jogada, insira o numero da casa que deseja substituir: ");
        scanf("%i", &casaAtual);

        if(casas[casaAtual-1] == 'X' || casas[casaAtual-1] == 'O')
        {
            printf("Escolha inválida, você deverá jogar novamente!\n");
            system("pause");
        }
        else
        {
            casas[casaAtual-1] = jogadorAtual;   
            if(casas[0] == casas[1] && casas[1] == casas[2] || 
                casas[3] == casas[4] && casas[4] == casas[5] || 
                casas[6] == casas[7] && casas[7] == casas[8] || 
                casas[0] == casas[3] && casas[3] == casas[6] || 
                casas[1] == casas[4] && casas[4] == casas[7] || 
                casas[2] == casas[5] && casas[5] == casas[8] || 
                casas[0] == casas[5] && casas[5] == casas[8] || 
                casas[2] == casas[4] && casas[4] == casas[6])
            {
                sair = 'S';
                system("cls");
                printf("\n|-------------------------|\n      o Jogador %c ganhou!       \n|-------------------------|\n", jogadorAtual);
            }
            else if(casas[0] != '1' && casas[1] != '2' && casas[2] != '3' && casas[3] != '4' && casas[4] != '5' && casas[5] != '6' && casas[6] != '7' && casas[7] != '8' && casas[8] != '9')
            {
                sair = 'S';
                system("cls");
                printf("\n|-------------------------|\n      Deu velha!       \n|-------------------------|\n");                system("pause");
            }     
            else
            {
                if(jogadorAtual == 'X')
                {
                    jogadorAtual = 'O';
                }
                else
                {
                    jogadorAtual = 'X';
                }
            }
        }
    }  
    for(int count = 0; count < 9; count++)
    {
        printf("%c", casas[count]);
        if(count == 2 || count == 5 || count == 8)
        {
            printf("\n");
        }
        else
        {
            printf("|");
        }        
    }    
    system("pause");
}