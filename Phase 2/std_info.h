//header file

struct Student
{
   int roll;
   char name[100];
   int sem;
   int isa1[5];
   int isa2[5];
   int esa[5];
   int total[5];
   char grade[5];

};

void std_info(struct Student *students, int n);

void display(struct Student *students, int n,int roll,const char *name);

