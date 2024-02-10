#include <stdio.h>
int main() 
{
	 int stu_grade, count=0, total = 0;
	 double average;
	 printf("Enter a student grade: ");
	 scanf("%d", &stu_grade);
do {
	 ++ count;
	 total+=stu_grade;
	 printf("Enter a student grade: ");
	 scanf("%d", &stu_grade);
 } while (stu_grade != -1) ;
 
 average = total/count;
		printf ("Total number of Students = %d\n", count);
		printf("Total grades of Students = %d\n", total);
		printf("Average grades of Students = %lf\n", average);
return 0;
}
