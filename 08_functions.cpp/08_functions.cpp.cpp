#include <iostream>
using namespace std;

/*
void Hello()
{
    cout << "Hello world" << endl;
}
void sayHello();//prototype function

void Star(int count)//1500
{
    for (int i = 0; i < count; i++)
    {
        cout << "* ";
    }
    cout << endl;
}
void AnyLine(char symbol, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << symbol << " ";
    }
    cout << endl;
}
int myPow(int number, int step)//5**4
{
    int pow = 1;
    for (int i = 0; i < step; i++)
    {
        pow *= number;
    }
    //cout << "Pow number " << number << " = " << pow << endl;
    return pow;
}

int Max(int a, int b)
{
    /*if (a > b)
        return a;
    else
        return b;*/
/*
    return (a > b) ? a : b;
}
int Min(int a, int b)
{
    return (a < b) ? a : b;
}
void Second()
{
    cout << "Second function working" << endl;
}
void First()
{
    cout << "First function start" << endl;
    Second();
    cout << "First function end" << endl;
}
void Change(int a, int b)
{
    cout << "a = " << a << " . b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << " . b = " << b << endl;
}
void InitArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}
void ShowArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int SummaArray(int arr[], int size)
{
    int summa = 0;
    for (int i = 0; i < size; i++)
    {
        summa += arr[i];
    }
    return summa;
}
void InitMatrix(int arr[][7], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 90 + 10;
        }
    }
}
void ShowMatrix(int arr[][7], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int A = 100;

void setA()
{
    A = 99;
}
void Show()
{
    cout << A << endl;
}
void setSecond()
{
    int A = 77;
    cout << A << endl;
}
*/


////1
//void Pramokytnick(int N, int K) {
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j < K; j++)
//        {
//            cout << "* ";
//        }
//        cout << endl;
//    }
//}
//
////2
//long long factorial(int n)
//{
//    long long result = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        result *= i;
//    }
//    return result;
//}
//
////3
//bool Number(int number)
//{
//    if (number < 2)
//        return false;
//
//    for (int i = 2; i * i <= number; i++)
//    {
//        if (number % i == 0)
//            return false;
//    }
//    return true;
//}
//
//
////5
//
//int Max(int a, int b)
//{
//    return (a > b) ? a : b;
//}
//
////6
//bool Dodatne(int number)
//{
//    return number > 0;
//}

//1.1
bool Year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int DaysInMonth(int month, int year)
{
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == 2 && Year(year))
        return 29;
    return days[month - 1];
}
long long ToDays(int day, int month, int year)
{
    long long totalDays = 0;
    for (int y = 1; y < year; y++)
    {
        totalDays += Year(y) ? 366 : 365;
    }
    for (int m = 1; m < month; m++)
    {
        totalDays += DaysInMonth(m, year);
    }
    totalDays += day;
    return totalDays;
}
long long DateDifference(int day1, int month1, int year1,
    int day2, int month2, int year2)
{
    long long d1 = ToDays(day1, month1, year1);
    long long d2 = ToDays(day2, month2, year2);
    return (d1 > d2) ? (d1 - d2) : (d2 - d1);
}


int main()
{
    ////1
    //cout << " --- 1 --- " << endl;
    //Pramokytnick(4, 6);
    //cout << endl;


    ////2
    //cout << " --- 2 --- " << endl;
    //int num = 6;
    //cout << num << "! = " << factorial(num) << endl;
    //cout << endl;

    ////3
    //cout << " ---- 3 ---- " << endl;
    //int a[] = { 2,7,3,9,6,4,8};
    //for (int n : a)
    //{
    //    cout << n << "  -   ";
    //    if (Number(n))
    //        cout << "proste" << endl;
    //    else
    //        cout << "ne proste" << endl;
    //}
    //cout << endl;

    ////5
    //cout << " --- 5 --- " << endl;
    //cout <<" Max(13,81) --> " << Max(13, 81) << endl;
    //cout << endl;
  
    ////6
    //cout << " --- 6 --- " << endl;
    //int Numbers[] = {1,  4,  8,  -8,  -4};
    //for (int n : Numbers)
    //{
    //    cout << n << " - ";
    //    if (Dodatne(n))
    //        cout << "dodathe" << endl;
    //    else
    //        cout << "ne dodatne" << endl;
    //}





   //1.1
    cout << " --- 1.1 --- " << endl;
    int d1 = 10, m1 = 3, y1 = 2025;
    int d2 = 10, m2 = 1, y2 = 2026;
    cout << "date 1;" << d1 << "." << m1 << "." << y1 << endl;
    cout << "date 2:" << d2 << "." << m2 << "." << y2 << endl;
    cout << "riznica v days: " << DateDifference(d1, m1, y1, d2, m2, y2) << endl;
    cout << "2025 " << (Year(2025)) << endl;
    cout << "2026 " << (Year(2026)) << endl;
    cout << endl;













  /* 
    srand(time(0));
    int A = 10;
    cout << A << endl;
    cout << ::A << endl;
    ::A = 333;
    cout << ::A << endl;
    setA();
    Show();
    setSecond();
    Show();


    /*  int a = 5;
      if (a == 5)
      {
          int b = 3;
          cout << b << endl;
          cout << a << endl;
      }
      cout << a << endl;
      cout << b << endl;*/





    /*
    const int rows = 5;
    const int cols = 7;
    int array[rows][cols];
    InitMatrix(array, rows, cols);
    ShowMatrix(array, rows, cols);





    const int size = 10;
    int arr[size];
    InitArray(arr, size);
    ShowArray(arr, size);
    int summa = SummaArray(arr, size);
    cout << "Summa elements array = " << summa << endl;



    int a = 4, b = 7;
    cout << "a = " << a << " . b = " << b << endl;
    Change(a, b);
    cout << "a = " << a << " . b = " << b << endl;



    First();
    cout << "MAx element : " << Max(8, 120) << endl;
    cout << "MAx element : " << Max(18, 1) << endl;
    cout << "Min element : " << Min(18, 1) << endl;
    cout << "Min element : " << Min(18, 100) << endl;
    cout << "Res : " << myPow(5, 2) << endl;
    int res = myPow(5, 4);
    cout << "Pow returned " << res << endl;
    AnyLine('$', 65);
    AnyLine('#', 5);
    AnyLine('@', 15);
    Star(5);
    Star(15);
    Star(50);



    Hello();
    sayHello();
    sayHello();
    sayHello();
    sayHello();
    return 0;
}

void sayHello()
{
    cout << "Hello world" << endl;*/


}