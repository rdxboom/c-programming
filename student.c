#include<stdio.h>
#include<string.h>
struct student{
	char name[10];
	int p,m,b;
};


int main(){
	float percentage;
	int i,sum[3];
	
	struct student s[3];
	
	printf("enter information of 3 students");
	for(i=0;i<3;i++)
	{
		printf("\nNAME : ");
		scanf("%s",&s[i].name);
		printf("\nPHYSICS MARKS : ");
		scanf("%d",&s[i].p);
		printf("\nBIOLOGY MARKS : ");
		scanf("%d",&s[i].b);
		printf("\nMATHS MARKS : ");
		scanf("%d",&s[i].m);
	}
	printf("student information list");
	for(i=0;i<3;i++)
	{	
		printf("\nNAME :%s",s[i].name);
		printf("\nPHYSICS MARKS :%d ",s[i].p);
		printf("\nBIOLOGY MARKS :%d ",s[i].b);	
		printf("\nMATHS MARKS : %d",s[i].m);
		sum[i]=s[i].p+s[i].b+s[i].m;
		printf("\nsum is %d",sum[i]);
		percentage==((sum[i]/300)*100);
		printf("\npercentage is %f",percentage);
	}
	
}
