
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//distance data
struct Sdistance  
{
	int feet;
	float inch;

} distance_1, distance_2;


//function to read distance data
struct Sdistance read_distance(void){
	struct Sdistance distance;
	printf("Enter feet: ");
	scanf("%d", &distance.feet);
	printf("Enter inch: ");
	scanf("%f", &distance.inch);

	return distance;
}

// function to print added ditances
void print_distance(struct Sdistance distance_1, struct Sdistance distance_2){
	if (distance_1.inch + distance_2.inch >= 12){
		printf("Sum of dintances = %d' - %0.1f\"", 
		distance_1.feet + distance_2.feet + 1,
		distance_1.inch + distance_2.inch - 12);
	}
	else{
		printf("Sum of dintances = %d' - %0.1f\"", 
		distance_1.feet + distance_2.feet,
		distance_1.inch + distance_2.inch);
	}
}



int main(void) {

	printf("Enter information of 1st distance\n");
	distance_1 = read_distance();
	printf("Enter information of 2nd distance\n");
	distance_2 = read_distance();

	print_distance(distance_1, distance_2);



}
