a.exe : file1.o std_info.o grade_calc.o 
	gcc file1.o std_info.o grade_calc.o 

file1.o:file1.c std_info.h
	gcc -c file1.c

std_info.o:std_info.c std_info.h
	gcc -c std_info.c

grade_calc.o:grade_calc.c std_info.h
	gcc -c grade_calc.c

