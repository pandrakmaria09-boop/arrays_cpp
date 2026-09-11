#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
    srand(time(0));

    //1

    /*
    const int rows = 3;
    const int cols = 4;
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


    //2



    int n;
    cout << "Vvedit rozmir matrytsi n: ";
    cin >> n;

    int a[20][20];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = -50 + rand() % 100;
        }
    }

    cout << "\n--  Matrytsia  --" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << left << setw(5) << a[i][j];
        }
        cout << endl;
    }

    int maxElement = a[1][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)
            {
                if (a[i][j] > maxElement)
                {
                    maxElement = a[i][j];
                }
            }
        }
    }

    cout << endl;
    cout << "--" << maxElement << "  --" << endl;

}











