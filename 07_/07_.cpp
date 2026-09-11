
#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{

    //srand(time(0));

    //int a;
    //a = rand() % 10;//0.....32767
    //cout << a << endl;
    //a = rand() % 10;
    //cout << a << endl;
    //a = rand() % 10;
    //cout << a << endl;
    //a = rand() % 10;
    //cout << a << endl;

    //for (int i = 0; i < 25; i++)
    //{
    //    a = rand() % 10;
    //    cout << a << " ";
    //}
    //cout << endl;
    //for (int i = 0; i < 25; i++)
    //{
    //    a = rand() % 100 + 1;
    //    cout << a << " ";
    //}
    //cout << endl;






    //for (int i = 0; i < 25; i++)
    //{
    //    //rand() % 90  0...89
    //    a =10 + rand() % 90;
    //    cout << a << " ";
    //}

    //cout << endl;



    ////marks --- 8 ... 12
    ////  12 - 8 = 4   rand()% 4  0...7  + 8
    //for (int i = 0; i < 25; i++)
    //{
    //    //rand() % 90  0...89
    //    a = rand() % 5 + 8;
    //    cout << a << " ";
    //}
    //cout << endl;
    ////0........x     rand()%x
    //// 
    //// 10.........10
    ////  32767 % 10 === 7
    ////  32766 % 10 === 6
    ////  32761 % 10 === 1
    ////  32762 % 10 === 2
    ////  32763 % 10 === 3
    ////  32764 % 10 === 4



    //const int size = 10;
    //int arr[size];//статичні масиви 
    //for (int i = 0; i < size; i++)
    //{
    //    arr[i] = rand() % 100+1;
    //    cout << arr[i] << " ";
    //}
    //  
    //const int rows = 4;
    //const int cols = 5;
    //{
    //    int array[rows][cols] {};
    //}
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        cout << array[i][j] << "  ";
    //    }
    //    cout << endl;
    //}
    //cout << endl;
    //int array1[3][3] = { {1,2,3}, {4,5,6} };
    //for (int i = 0; i < 3; i++)
    //{
    //    for (int j = 0; j < 3; j++)
    //    {
    //        cout << array1[i][j] << " ";
    //    }
    //}
    //cout << endl;



    //cout << "\n-----------  Two demention array  -------------" << endl;
    //const int rows = 4;
    //const int cols = 5;
    //int array[rows][cols]{};
    //int max;
    //for (int i = 0; i < rows; i++)
    //{
    //    max = array[i][0];
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array[i][j] = rand() % 100;
    //        cout << left << setw(4) << array[i][j] <<" ";
    //        if (array[i][j] > max) {
    //            max = array[i][j];
    //        }
    //    }
    //    cout << "max element in" << i << "row is" << max;
    //    cout << endl;
    //}

    //cout << endl;

srand(time(0));
//1
/*
const int rows = 4;
const int cols = 3;
int a[rows][cols];

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        a[i][j] = rand() % 5;
    }
}

cout << "\n--  Masiv  --" << endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << left << setw(4) << a[i][j];
    }
    cout << endl;
}

int count = 0;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        if (a[i][j] != 0)
        {
            count = count + 1;}
}
}
cout << endl;
cout <<"--"<<"    "<< count <<"    "<< "--" << endl;
*/


/*
//2
const int rows = 3;
const int cols = 3;
int a[rows][cols];

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        a[i][j] = rand() % 5;
    }
}
cout << "\n--  Masiv  --" << endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << left << setw(4) << a[i][j];
    }
    cout << endl;
}

int count = 0;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        if (a[i][j] == 0)
        {
            count = count + 1;
        }
    }
}

cout << endl;
cout << "--" << "    " << count << "    " << "--" << endl;
*/


//3

/*
const int rows = 7;
const int cols = 3;
int a[rows][cols];

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        a[i][j] = -20 + rand() % 40;
    }
}

cout << "\n--  Masiv  --" << endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << left << setw(5) << a[i][j];
    }
    cout << endl;
}

int count = 0;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        if (abs(a[i][j]) < 12)
        {
            count = count + 1;
        }
    }
}

cout << endl;
cout << "--" << "    " << count << "    " << "--" << endl;
*/

//4

/*
const int rows = 4;
const int cols = 5;
int a[rows][cols];

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        a[i][j] = -500 + rand() % 1000;
    }
}

cout << "\n--  Masiv  --" << endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << left << setw(6) << a[i][j];
    }
    cout << endl;
}

int count = 0;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        if (a[i][j] > 0)
        {
            count = count + 1;
        }
    }
}
cout << endl;
cout << "--" << "    " << count << "    " << "--" << endl;
*/

//5
/*
const int rows = 5;
const int cols = 4;
double a[rows][cols];

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        a[i][j] = -500 + rand() % 1000 + (rand() % 100) / 100.0;
    }
}

cout << "\n--  Masiv  --" << endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << left << setw(10) << a[i][j];
    }
    cout << endl;
}

double result = 1;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        if (a[i][j] > 0)
        {
            result = result * a[i][j];
        }
    }
}
cout << endl;
cout << "--" << "    " << result << "    " << "--" << endl;
*/

//6
/*
const int rows = 5;
const int cols = 4;
double a[rows][cols];

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        a[i][j] = -500 + rand() % 1000 + (rand() % 100) / 100.0;
    }
}

cout << "\n--  Masiv  --" << endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << left << setw(10) << a[i][j];
    }
    cout << endl;
}

double result = 1;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        if (a[i][j] < 0)
        {
            result = result * a[i][j];
        }
    }
}
cout << endl;
cout << "--" << "    " << result << "    " << "--" << endl;
*/

//7

/*
const int rows = 4;
const int cols = 4;
int a[rows][cols];

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        a[i][j] = rand() % 100;
    }
}

cout << "\n--  Masiv  --" << endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << left << setw(5) << a[i][j];
    }
    cout << endl;
}

int count = 0;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        if (a[i][j] % 6 == 1)
        {
            count = count + 1;
        }
    }
}
cout << endl;
cout << "--" << "    " << count << "    " << "--" << endl;
*/

//8
/*
const int rows = 5;
const int cols = 6;
int a[rows][cols];

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        a[i][j] = -100 + rand() % 200;
    }
}

cout << "\n--  Masiv  --" << endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << left << setw(6) << a[i][j];
    }
    cout << endl;
}

int minElement = a[0][0];
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        if (a[i][j] < minElement)
        {
            minElement = a[i][j];
        }
    }
}
cout << endl;
cout << "--" << "  Minimalnyi element: " << minElement << "  --" << endl;
*/

//9

/*
const int rows = 5;
const int cols = 6;
int a[rows][cols];

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        a[i][j] = -100 + rand() % 200;
    }
}

cout << "\n--  Masiv  --" << endl;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << left << setw(6) << a[i][j];
    }
    cout << endl;
}

int maxElement = a[0][0];
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        if (a[i][j] > maxElement)
        {
            maxElement = a[i][j];
        }
    }
}
cout << endl;
cout << "--" << "  Maksymalnyi element: " << maxElement << "  --" << endl;
*/

//10
//const int rows = 5;
//const int cols = 4;
//double a[rows][cols];
//
//for (int i = 0; i < rows; i++)
//{
//    for (int j = 0; j < cols; j++)
//    {
//        a[i][j] = -500 + rand() % 1000 + (rand() % 100) / 100.0;
//    }
//}
//
//cout << "\n--  Masiv  --" << endl;
//for (int i = 0; i < rows; i++)
//{
//    for (int j = 0; j < cols; j++)
//    {
//        cout << left << setw(10) << a[i][j];
//    }
//    cout << endl;
//}
//
//double sum = 0;
//for (int i = 0; i < rows; i++)
//{
//    for (int j = 0; j < cols; j++)
//    {
//        if (a[i][j] < 0)
//        {
//            sum = sum + a[i][j];
//        }
//    }
//}
//cout << endl;
//cout << "--" << "    " << sum << "    " << "--" << endl;



















}



 