#include<stdio.h>
#include<stdbool.h>
#define arr_size 50
#define closed 0//mean i can use the account for new costumer
#define opened 1//mean that i cant use the accounte 'cause alredy used!
#define balance 1
#define status 0


int accounts[arr_size][2];
int acount_amount = 0;



/////////////////////////////////////////
///////////  Declerations   ////////////
///////////////////////////////////////

void openAccount();
void Deposit();


/////////////////////////////////////////
///////////     Methods     ////////////
///////////////////////////////////////

int main()
{
while(1){

	openAccount();	
    Deposit();
	}

	return 1; 
        }


/*
the function get first deposit and register to new account
*/
void openAccount()
{
    int index;
    int deposit_amount;
    
	bool isavilble =false;
    for (index = 0;index< 50; index++) {
        if((accounts[index][0] == closed))
            {
                isavilble = true;
                break;
            }
          
    }
     if(isavilble){
        printf("initial deposit? ");
        scanf("%d", &deposit_amount);
        accounts[index][0] = opened;
        accounts[index][1] = deposit_amount;
        printf("\nnumber account: %d opened with income : %d\n" , index+901, accounts[index][1]);
        }
}

/*
the function get account number amount of money and print the new balance
*/
void Deposit( )
{
    int account_num;
    int deposit;
    printf("Account number: ");
    scanf("%d",&account_num);
    account_num = account_num-901;
    if((account_num < 50 || account_num >=0 )&& accounts[account_num][status] == 1)
    {
        printf("Amount: ");
        scanf("%d",&deposit);
        accounts[account_num][balance] += deposit;
        printf("now in account %d the balance is %d\n",account_num+901,accounts[account_num][balance]);
    }
    else
    {
        printf("Error: wrong account number or not opend!\n");
    }

    
}