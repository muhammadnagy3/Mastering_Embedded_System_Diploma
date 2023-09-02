
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//student data
struct Sstudent
{
	char name[100];
	// unsigned short roll;
	short mark;

} student[10];


//function to read student data
struct Sstudent read_student(int roll_num){
	struct Sstudent student;
	printf("For roll number %d", roll_num+1);
	printf("\nEnter name:");
	gets(student.name);
	printf("Enter marks: ");
	scanf("%hd", &student.mark);
	scanf("%c");
	

	return student;
}

// function to print student data
void print_student(struct Sstudent student, int roll_num){

	printf("\n\nInformation for roll number %d", roll_num+1);
	printf("\nName: %s", student.name);
	printf("\nMarks: %d", student.mark);

}



int main(void) {

	printf("Enter information of students\n");
	for(int i = 0; i < 10; i++){
		student[i] = read_student(i);
	}

	printf("Displaying information of students\n");
	for(int i = 0; i < 10; i++){
		print_student(student[i], i);
	}

}
