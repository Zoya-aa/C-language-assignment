#include <stdio.h>
int main() {
	int programming_marks,maths_marks,AI_marks;
	float attendance_percentage;
	float average;
	
	printf("Enter programming_marks: ");
	scanf("%d", &programming_marks);
	printf("Enter maths_marks: ");
	scanf("%d", &maths_marks);
	printf("Enter AI_marks: ");
	scanf("%d", &AI_marks);
	printf("Enter Attendence percentage: ");
	scanf("%f", &attendance_percentage);
	
	if(programming_marks>=50 && maths_marks>=50 && AI_marks>=50 && attendance_percentage>=75){
		average=(programming_marks+maths_marks+AI_marks)/3;
		printf("Student is eligible");
		printf("\n");
		printf("Avergage: %.2f", average);
		printf("\n");
		
		if(average>=80)
		 printf("Excellent \n");
		 else if(average>=70)
		 printf("Very good \n");
		else if(average>=60)
		 printf("Good \n");
		else if(average>=50)
		 printf("Satisfactory \n");
		else if(average<50)
		 printf("Poor \n");		 
	}
	else {
		printf("Student is Not Eligible");
	}
	return 0;
}
