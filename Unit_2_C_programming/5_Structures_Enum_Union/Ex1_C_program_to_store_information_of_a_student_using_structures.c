
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//student data
struct Sstudent
{
	char name[100];
	unsigned short roll;
	short mark;

} s;


//function to read student data
struct Sstudent read_student(void){
	struct Sstudent student;
	printf("Enter name: ");
	gets(student.name);
	printf("Enter roll number: ");
	scanf("%hu", &student.roll);
	printf("Enter marks: ");
	scanf("%hd", &student.mark);

	return student;
}

// function to print student data
void print_student(struct Sstudent student){
	printf("\nName: %s", student.name);
	printf("\nRoll: %u", student.roll);
	printf("\nMarks: %d", student.mark);
}



int main(void) {


	s = read_student();
	print_student(s);

}
