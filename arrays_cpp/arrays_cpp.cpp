
#include <iostream>
using namespace std;
int main()
{
	// Масив  -  це набір однотипних даних, об'єднаний загальним ім'ям.

 //   int train[3];
 //   train[0] = 5;
 //   train[1] = 3;
 //   train[2] = 7;
 //   cout << "vagon 1 :  " << train[0] << endl;
 //   cout << "vagon 2 :  " << train[1] << endl;
 //   cout << "vagon 3 :  " << train[2] << endl;

 //   const int size = 12;
 //   int marks[size];
	//marks[0] = 12;
	//marks[1] = 2;
	//marks[2] = 1;
	//marks[3] = 12;
	//marks[4] = 12;
	//marks[5] = 1;
	//marks[6] = 12;
	//marks[7] = 12;
	//marks[8] = 2;
	//marks[9] = 1;
	//marks[10] = 12;
	//marks[11] = 2;
	//cout << "marks:  " << marks << " - " << marks[5]<<" , " << marks[11] << endl;

	//int arrl[5];

	//const int size = 10;
	//double arr[size];
	/*
	const int size = 10;
	int arr1[size] = { 1,2,3,4,5,6,7,8,9,0 };

	for (int i = 0; i < size; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << endl;

	int arr2[size] = {  };
	for (int i = 0; i < size; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;
	int arr3[size] = { 1,2,3 };
	for (int i = 0; i < size; i++)
	{
		cout << arr3[i] << " ";
	}

	int arr4[size];
	for (int i = 0; i < size; i++)
	{
		cout << "enter number:  " << i + 1;
		cin >> arr4[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr4[i] << "  ";
	}
	cout << endl;

	//написати програму, яка знах суму всіх - елементів масиву

	const int SIZE = 10;
	int arr5[SIZE] = { -4,-6,7,-7,9,-8,3,-4,2,-3 };
	int min = arr5[0], max = arr5[0];
	int summa = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr5[i] < 0) {
			summa += arr5[i];
		}
		if (arr5[i] > max ) {
			max = arr5[i];
		}
		if (arr5[i] < min) {
			min = arr5[i];
		}
	}
	cout << "summa negative elements  =  " << summa << endl;

*/




	//1


	

	//const int size = 10;

	//int dobt = 1;

	//int arrl[size];
	//for (int i = 0; i < size; i++)
	//{
	//	cout << "enter number:  " << i + 1 << "  " << endl;
	//	cin >> arrl[i];
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arrl[i] << "  ";
	//	{
	//		dobt *= arrl[i]; 
	//		
	//	}
	//}
	//cout << endl;
	//cout <<  dobt << endl;
	//cout << endl;


	//2
	//const int size = 7;
	//int arr5[size] = { -4,-6,7,-46,34,23,1};
	//int min = arr5[0], max = arr5[0];
	//int negative = 0;
	//int positiv = 0;

	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr5[i] << "  ";
	//	if (arr5[i] > 0) {
	//		positiv++;
	//	}
	//	if (arr5[i] < 0) {
	//		negative++;
	//	}
	//}
	//cout << endl;
	//cout << positiv <<" , " << negative << endl;


	//3
	//const int size = 7;
	//int arr5[size] = { 2,33,44,22,12,6,56 };
	//int summa = 0;
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr5[i] << "  ";
	//	if (arr5[i]%2==0 ) {
	//		summa += arr5[i];
	//	}

	//}
	//cout << endl;
	//cout << summa<< endl;



	//5
	//const int size = 7;
	//int arr5[size] = { -4, -6, 7, -46, -34, -23, -1 };
	//for (int i = 0; i < size; i++) {
	//	if (arr5[i] < 0) {
	//		arr5[i] = arr5[i] * -1;
	//	}
	//	cout << arr5[i] << "  ";
	//}




	//4
	//const int SIZE = 10;
	//int arr[SIZE];
	//for (int i = 0; i < SIZE; i++) {
	//	arr[i] = pow(2, i + 1);
	//}

	//for (int i = 0; i < SIZE; i++) {
	//	cout << arr[i] << " ";
	//}
	//cout << endl;
	//for (int i = SIZE - 1; i >= 0; i--) {
	//	cout << arr[i] << " ";
	//}
	//cout << endl;



//8  

	const int size = 12;
	const int SIZE = 12;
	
	int arrl[size];
	int arr1[SIZE];
	for (int i = 0; i < size; i++)
	{
		cout << "enter number:  " << i + 1 << "  " << endl;
		cin >> arrl[i];
	}


	for (int i = 0; i < SIZE; i++)
	{
		cout << "enter firstly months:  " << endl;
		cout << "enter last months:  " << endl;
		cout << "enter last months:  " << endl;
		cout << "enter last months:  " << endl;
		cin >> arr1[i];
	}
	//незавершено











}