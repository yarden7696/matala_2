#include<stdio.h>
#include"myBank.h"

int main()
{
    char operation = 'a';
    printf("myBank Program\n");
    printf("===============\n\n");

    
    while(operation != 'E')
    {
        printf("Transaction type: ");
        scanf("%c", &operation);
        printf("\n");
        switch (operation)
        {
        case 'O':
            openAccount();
            break;
        case 'B':
            checkBalance();
            break;  
        case 'D':
            Deposit();
            break; 
        case 'W':
            withdrawal();
            break; 
        case 'C':
            closeAccount();
            break; 
        case 'I':
            interest ();
            break; 
        case 'P':
            showOpenAccounts();
            break; 
        case 'E':
             closeAccounts();
            break;       

        default:
            printf("wrong input!\n");
            break;
        }
	}

	return 1; 
}