#include<stdio.h>
#include<stdbool.h>
#define arr_size 50
#define closed 0//mean i can use the account for new costumer
#define opened 1//mean that i cant use the accounte 'cause alredy used!



 int account[50][2];

 int acount_amount = 0;
void openAccount();
int main()
{
while(1){

	openAccount();	
	}

	return 1; 
        }

void openAccount()
{
    int i;
    int a;
    int current_index = 0;
	bool isavilble =false;
    for (i = 0;i< 50; i++) {
        if((account[i][0] == closed))
            {
                isavilble = true;
                break;
            }
          
    }
     if(isavilble){
        printf("initial deposit? ");
        scanf("%d", &a);
        account[i][0] = opened;
        account[i][1] = a;
        printf("number account: %d opened with income : %d\n" , i+901, account[i][1]);
        }
}

