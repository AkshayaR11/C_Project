

#include<stdio.h>


void std_info(char name[][100],int roll[],int semester[],int n)
{
    
    printf("Enter Names of %d Students:\n",n);
    for(int i=0;i<n;i++)
    {
            scanf("%s",&name[i]);
    } 

    printf("Enter Roll No of %d Students:\n",n);
	for (int i=0;i<n;i++)
{
	scanf("%d",&roll[i]);
}

    printf("Enter Semester:\n");
	for (int i=0;i<n;i++)
{
	scanf("%d",&semester[i]);
}


}  

    