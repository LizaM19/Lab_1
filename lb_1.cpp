// lb_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int m[10];
	int max=0;
	int min=200;
	int r,i;
	/*

	for (i = 0;i < 10;i++) 
	{
		m[i] = rand() % 20+1;
		printf("%3d", m[i]);
	}
	//-----------------------------------------------------------
	for (i = 0; i < 10; i++)
	{
		if (m[i] < min)
			min = m[i];
	}

	for (i = 0; i < 10; i++)
	{

		if (m[i] > max)
			max = m[i];
	}
	r = max - min;
	printf("\n%d\n", r);


	//----------------------------------------------------------------

	int* z; 
	int n;
	scanf("%d", &n);
	z = (int*)malloc(n * sizeof(int));
	
	for (i = 0; i < n; i++)
	{
		z[i] = rand() % 30 + 1;
		printf("%3d", z[i]);
	}
	printf("\n");
		free(z); 
		//----------------------------------------------------------------
		
		int a[5][5];
		int sc[5];
		int s, j;
		srand(time(NULL));
		for (i = 0; i < 5; i++) sc[i] = 0;
		for (i = 0; i < 5; i++) {
			s = 0;
			for (j = 0; j < 5; j++) {
				a[i][j] = rand() % 10;
				printf("%5d", a[i][j]);
				s += a[i][j];
				sc[j] += a[i][j];
			}
			printf("   |%d\n", s);
		}
		for (i = 0; i < 5; i++)
			printf("%5s", "--");
		printf("\n");
		for (i = 0; i < 5; i++)
			printf("%5d", sc[i]);
		printf("\n");
*/
		//-------------------------------------------------

	/*
			setvbuf(stdin, NULL, _IONBF, 0);
			setvbuf(stdout, NULL, _IONBF, 0);
			struct student
			{
				char famil[20];
				char name[20], facult[20];
				int Nomzach;
			} stud[3];

			for (i = 0;i <3;i++)
			{
				printf("Введите фамилию студента\n "); 
				scanf("% 20s", stud[i].famil);
			}
			for (i = 0;i<3;i++)
			{
				printf("Введите имя студента % s\n", stud[i].famil); 
				scanf(" % 20s", stud[i].name);
			}
			for (i = 0;i<3;i++)
			{
				printf("Введите название факультета студента % s% s\n", stud[i].famil, stud[i].name); scanf(" % 20s", stud[i].facult);
			}
			for (i = 0;i<3;i++)
			{
				printf("Введите номер зачётной книжки студента % s % s\n ", stud[i].famil, stud[i].name); scanf(" % d ", stud[i].Nomzach);
			}
			for (i = 0;i<3;i++)
			{
				printf("Cтудент % s % s обучается на факультете % s, номер зачётной книжки % d \n ", stud[i].famil, stud[i].name,

					stud[i].facult, stud[i].Nomzach);

			}
		*/


	struct student {
		char famil[20], name[20], number[20];
	};


	setlocale(LC_ALL, "Russian");

	student arr[3];

	for (int i = 0; i < 3; i++)
		scanf("%s %s %s", arr[i].famil, arr[i].name, arr[i].number);



	for (int i = 0; i < 3; i++)
		printf(" %s  %s  %s \n", arr[i].famil, arr[i].name, arr[i].number);

	printf("-------------------------------------------------------------------------------\n\n");

	

}


