/*percentage calculator*/
#include<stdio.h>

int main(){
	
	int p,b,m,c,e;
	float TotalPercentage;
	
	
	printf("enter marks of physics biology maths computer english resp : \n");
	scanf("%d%d%d%d%d",&p,&b,&m,&c,&e);
	TotalPercentage=(p+b+m+c+e)/5;
	printf("\nTotalPercentage = %.2f",TotalPercentage);
	
	
	
	if(TotalPercentage >= 90)
    {
        printf("Grade A");
    }
    else if(TotalPercentage >= 80)
    {
        printf("Grade B");
    }
    else if(TotalPercentage >= 70)
    {
        printf("Grade C");
    }
    else if(TotalPercentage >= 60)
    {
        printf("Grade D");
    }
    else if(TotalPercentage >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

	
	
}
