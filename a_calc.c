#include <stdio.h>

int main(){
	int numCourses;
	double grade, total = 0.0, average;

	printf("Kaç dersin var? ");
	scanf("%d", &numCourses);

	if (numCourses <= 0){
		printf("Geçerli bir ders sayısı girin. \n");
		return 1;
	}

	for (int i = 1; i <= numCourses; i++){
		printf("%d. dersin notunu gir: ", i);
		scanf("%lf", &grade);
	
		if (grade < 0 || grade > 100) {
			printf("Geçersiz not! (0 - 100 arasında olmalı) \n");
			return 1 ;
		}
	total += grade;
	}

	average = total / numCourses;
	printf("\n ortalaman %.2lf\n", average);
	
	if(average >= 60.0){
		printf("Tebrikler, geçtin! \n");
	}else {
		printf("Malesef kaldın. \n");
	}
	return 0;
}
