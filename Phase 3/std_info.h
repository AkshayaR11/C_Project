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
void calculate(struct Student* students,int n);
void saveStudentData(struct Student *students, int n) ;
void searchAndDisplayData(struct Student *students) ;
void displayStudentData(struct Student* students,int n,int roll,const char *name);
void printall();
void read_data();
void update(struct Student *students,int roll,int ch,int n);
