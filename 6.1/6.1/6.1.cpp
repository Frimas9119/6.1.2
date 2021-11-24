#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void Create(int* b, const int size, const int Low, const int High, int i){

	b[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(b, size, Low, High, i + 1);

}

void Print(int* b, const int size, int i)
{
	
	for (i = 0;i < 24; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
}

double Math1(int* b, const int size, int i, int z) {

	for (i = 0;i < 24; i++) {
		if (b[i] < 0 && (b[i] == -2 || b[i] == -4 || b[i] == -6 || b[i] == -8 || b[i] == -10 || b[i] == -12 || b[i] == -14)) {
			z = z + 1;

		}
	}
	return z;
}

double Math2(int* b, const int size, int i, int z) {

	for (i = 0;i < 24; i++) {
		if (b[i] < 0 && (b[i] == -2 || b[i] == -4 || b[i] == -6 || b[i] == -8 || b[i] == -10 || b[i] == -12 || b[i] == -14)) {
			z = z + b[i];
		}
	}
	return z;
}
void Math3(int* b, const int size, int i) {

	for (i = 0;i < 24; i++) {
		if (b[i] < 0 && (b[i] == -2 || b[i] == -4 || b[i] == -6 || b[i] == -8 || b[i] == -10 || b[i] == -12 || b[i] == -14)) {
			b[i] = 0;
		}
	}
	for (i = 0;i < 24; i++) {
		cout << b[i]<<" ";
	}
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 24;
	int b[n];
	int Low = -15;
	int High = 75;
	Create(b, n, Low, High, 0);
	Print(b, n, 0);
	cout << "Kilkist elementiv: "<< Math1(b, n, 0, 0) << endl;
	cout << "Sum elementiv: "<< Math2(b, n, 0, 0) << endl;
	Math3(b, n, 0);
	return 0;
}
