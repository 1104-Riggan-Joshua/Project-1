//Author:Joshua Riggan
//Date:2/11/2024
//Purpose:Project 1

#include <stdio.h>

int main(){

//Declaration

	double inches_day_1, inches_day_2, inches_day_3;
	char day_1, day_2, day_3;
	int date_1, date_2 ,date_3;
	double total;
	double average;
	
//Input Collection

	printf("Enter the first day's data (inches, day, date):");
	scanf("%lf %c %d", &inches_day_1, &day_1, &date_1);  

	printf("Enter the second day's data (inches, day, date):");
	scanf("%lf %c %d", &inches_day_2, &day_2, &date_2);  

	printf("Enter the third day's data (inches, day, date):");
	scanf("%lf %c %d", &inches_day_3, &day_3, &date_3);  

//Total & Average Calculations

	total = inches_day_1 + inches_day_2 + inches_day_3;
	average = total / 3;

//Dispaying The Data

	printf("\n");
	printf("    ***Snowfall Table***     \n");
	printf("=============================\n");
	printf("| DATE | WEEKDAY | SNOWFALL |\n");
	printf("|---------------------------|\n");
	printf("|  %d   |    %c    |   %.2lf   |\n", date_1, day_1, inches_day_1);
	printf("|---------------------------|\n");
	printf("|  %d   |    %c    |   %.2lf   |\n", date_2, day_2, inches_day_2);
	printf("|---------------------------|\n");
	printf("|  %d   |    %c    |   %.2lf   |\n", date_3, day_3, inches_day_3);
	printf("|---------------------------|\n");
	printf("| TOTAL|             %.2lf   |\n", total);
	printf("|---------------------------|\n");
	printf("| AVG  |             %.2lf   |\n", average);
	printf("=============================\n");

	return 0;
}
