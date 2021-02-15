#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//����������, ���������� ����������� ��������
double mina = 1;
//����������, ������������ ������ ����� for
int i = 0;
//����������, ���������� ������ ������������  ��������
int index = 0;

//�������, ���������� �������� �������� ���������� �� � ������� �����
void tcel(double* x) {
	double tcel = (int)*x;
	printf("Tcel: %lf\n", tcel);
	*x -= tcel;
	printf("X posle tcel: %lf\n ", *x);
	*x = (*x >= 0) ? (*x) : ((*(x)) * (-1));
	printf("X posle proverki uslovia: %lf\n\n", *x); 
}

//�������,����������� �������� �������� � ��������� �� ����� ���� �������
int minarr(double* x, double* p) {
	if (*x <= mina) {
		mina = *x;
		index = i;
		printf("Minimum: %lf\n\n", *(p + index));
	}
	else printf("Minimum: %lf\n\n", *(p + index));
	return 0;
}


int main() {

	//�������� ���-�� ���������
	int n;
	do
	{
		printf("Vvedite kol-vo elementov: ");
		scanf("%d", &n);
	} while (n <= 0);

	//�������� ����������, � ������� �������� �����
	double x;

	//�������� �������, � ������� ��������� ��� �������� �����
	double* p = (double*)malloc(n * sizeof(double));

	//�������� �����, � ������ ����� ������������ �������
	for (; i < n; i++) {
		printf("Vvodite elementi. 0 to exit: ");
		scanf("%lf", &x);
		printf("Vvedennoe chislo: %lf\n\n", x);
		if (x == 0) {
			printf("Exiting...\n");
			break;
		}
		*(p + i) = x;
		tcel(&x);
		minarr(&x, p);
	}

	//������������ �������, ���������� ��� ������
	free(p);
	return 0;
}