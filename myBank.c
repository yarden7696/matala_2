#include<stdio.h>
#include<stdbool.h>
#define arr_size 50
#define closed 0 //mean i can use the account for new costumer
#define opened 1 //mean that i cant use the accounte 'cause alredy used!
#define balance 1 // balance index
#define status 0 // status index



 int account[50][2];

 int acount_amount = 0;
void openAccount();
void checkBalance();
int main()
{
while(1){

	openAccount();	
    checkBalance();
    //withdrawal();
    interest ();

	}

	return 1; 
        }

void openAccount()
{
    int index;
    int a;
	bool isavilble =false;
    for (index = 0;index< 50; index++) {
        if((account[index][0] == closed))
            {
                isavilble = true;
                break;
            }
          
    }
     if(isavilble){
        printf("initial deposit? ");
        scanf("%d", &a);
        account[index][0] = opened;
        account[index][1] = a;
        printf("number account: %d opened with income : %d\n" , index+901, account[index][1]);
        }
}

/*
The function get an account number and print the balance on the screen only if the account
 number is open.
*/

void checkBalance(){
    int randomAcoount;
    printf (" enter an account nunber between 901 to 950 : ");
    scanf( "%d" , &randomAcoount);
if ( (randomAcoount> 950 ) || (randomAcoount<901)) 
{
    printf( " account number dosnt exist! \n");
}
else  // if the account number is proper
{
if ( account [randomAcoount-901][status] == opened) 
{
printf(" The balance in account nunmber : %d is : %d \n", randomAcoount, account[randomAcoount-901][balance]);
}
else // account nunber is close
{
printf( " This account number is close ! \n ");
}
}
}

/*
The function get an account number and print the sum after the withdrawal
*/
void withdrawal()
{
    int account1;
    int withdraw;
    
    printf (" enter an account nunber: ");
    scanf( "%d" , &account1);
    if ( (account1> 950 ) || (account1<901)) 
{
    printf( " account number dosnt exist! \n");
}   
else // number account is exist 
{
    if( account[account1-901][status] == opened  )
    {
        printf("Amount?");
       scanf("%d", &withdraw);
       if( account[account1-901][balance]>= withdraw)
       {
           account[account1-901][balance]=account[account1-901][balance]-withdraw;
printf("The new balance after the withdrawal is: %d \n",account[account1-901][balance] );
    }
    else // there isnt enough money 
    {
    printf("There isnt enough money for withdrawal ! \n");
    }
}
else
 {
printf(" This account number is close ! \n");
}
}
}

void interest ()
{
    int index;
    int interest;
    double percent;
    printf("Interest rate ? ");
    scanf("%d", &interest);
    percent = interest/100.0;
    for(index=0; index<50; index++ )
    {
        if(account[index][status]==opened)
        {

         double d = account[index][balance]*percent;   
            account[index][balance] += d; 
        }
    }
}