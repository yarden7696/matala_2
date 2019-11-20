#include<stdio.h>
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
	
    for (i = 0;i< 50; i++) {
        if((account[i][0] == 0))
            {
                break;
            }
         //printf("%d , %d \n",i, account[i][0] );        
    }
     if(i<50){
        printf("initial deposit? ");
        scanf("%d", &a);
        account[i][0] = 1;
        account[i][1] = a;
        printf("number account: %d opened with income : %d\n" , i+901, account[i][1]);
        }
}

