#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>


int m[10000];
void qs(int* items, int left, int right) //вызов функции: qs(items, 0, count-1);
{
	int i, j;
	int x, y;

	i = left; j = right;

	/* выбор компаранда */
	x = items[(left + right) / 2];

	do {
		while ((items[i] < x) && (i < right)) i++;
		while ((x < items[j]) && (j > left)) j--;

		if (i <= j) {
			y = items[i];
			items[i] = items[j];
			items[j] = y;
			i++; j--;
		}
	} while (i <= j);

	if (left < j) qs(items, left, j);
	if (i < right) qs(items, i, right);
}


void shell(int* items, int count)
{

	int i, j, gap, k;
	int x, a[5];

	a[0] = 9; a[1] = 5; a[2] = 3; a[3] = 2; a[4] = 1;

	for (k = 0; k < 5; k++) {
		gap = a[k];
		for (i = gap; i < count; ++i) {
			x = items[i];
			for (j = i - gap; (x < items[j]) && (j >= 0); j = j - gap)
				items[j + gap] = items[j];
			items[j + gap] = x;
		}
	}
}


int cmp(const void* a, const void* b) {    //функция сравнения элементов массива
	{
		return *(int*)a - *(int*)b;		// Если результат вычитания равен 0, то числа равны
	}
}

int main()
{

	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);

	setlocale(LC_ALL, "Rus");
	
	srand(time(NULL));

	
	//for (int i = 0; i < 10000; i++) {   //Заполнение массива рандомными числами
	//	m[i] = rand() % 100 + 1;
	//}

	//for (int i = 1; i < 10000; i++) {		//Возрастающая последовательность
	//	m[i] = m[i-1]+1;
	 //}
	
	//	for (int i = 0; i < 10000; i++) {	//Убывающая последовательность
	//	m[i] = 10000-i;
	// }

	//		for (int i = 0; i < 5000; i++) {	//Возрастающе-убывающая последовательность
	//			m[i] = m[i - 1] + 1;
	// }
	//		for (int i = 5; i < 10000; i++) {
	//			m[i] = 10000 - i;
	//		}

	int start_time = clock();

	//shell(m, 10000);	//Сортировка Шелла
	//qs(m, 0, 10000 - 1);	//Быстрая сортировка
	//sort(m, 10000, sizeof(int), cmp); // Ф-я быстрой сортировки
		
	
		int end_time = clock();
		int search_time = end_time - start_time;

		printf("%d", search_time);
		return (0);

}

