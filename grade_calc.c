#include <stdio.h>

void grade_calc(char name[][100],int roll[],int semester[],int isa1[][5],int isa2[][5],int esa[][5],int n)
{

char subject[5][100]={"PHYSICS","MATHEMATICS","C      ","EEE    ","MECHANICAL"};
int total[n][5];

for(int i=0;i<n;i++)
{
for(int j=0;j<5;j++)
{
	total[i][j]=isa1[i][j]+isa2[i][j]+esa[i][j];
	
	
}
}

char grade[n][5];

for(int i=0;i<n;i++)
{
for(int j=0;j<5;j++)
{
	if (total[i][j]>=90)
		grade[i][j]='S';
	if (total[i][j]>=80 && total[i][j]<90)
		grade[i][j]='A';
	if (total[i][j]>=70 && total[i][j]<80)
		grade[i][j]='B';
	if (total[i][j]>=60 && total[i][j]<70)
		grade[i][j]='C';
	if (total[i][j]>=50 && total[i][j]<60)
		grade[i][j]='D';	
	if (total[i][j]<50)
		grade[i][j]='F';
	
}
}



int no;
printf("Enter the roll no of Student:");
scanf("%d",&no);

int flag=0;

for(int i=0;i<n;i++)
{
if (roll[i]==no)
{
flag=1;

printf("\t\t\n ------------------- GRADE CARD --------------------- \t\t\n\n");
printf("NAME : %s\nROLL NO. : %d\nSEMESTER : %d\n\n",name[i],roll[i],semester[i]);
printf("SUBJECT \t ISA1 \t ISA2 \t ESA \t TOTAL \t GRADE\n\n");





for(int j=0;j<5;j++)
{

printf("%s \t %d \t %d \t %d \t %d \t %c\n",subject[j],isa1[i][j],isa2[i][j],esa[i][j],total[i][j],grade[i][j]);
} 


}
}

if(flag ==0)
{printf("Roll Number Not Found!!\n");
}


}


 	