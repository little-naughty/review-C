#include <iostream>

using namespace std;

int main()
{
    for(int x = 1; x <= 9; x++)
    {
        for(int y = 1; y <= 9; y++)
        {
            if(x == 1 || x == 9 || y == 1 || y == 9)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    for(int x = 1; x <= 9; x++)
    {
        for(int y = 1; y <= 7; y++)
        {
            if(y < 4 || y > 6)
            {
                cout << " ";
            }
            else if(x == 1 || x == 9)
            {
                cout << "*";
            }
            else if((x == 2 || x == 8) && (y > 2 || y < 6))
            {
                cout << " ";
            }
            if((x == 2 || x == 8) && (y == 2 || y == 5))
            {
                cout << "*";
            }
            else if((x >= 3 && x <= 7) && (y >= 2 && y <= 6))
            {
                cout << " ";
            }
            if((x >= 3 && x <= 7) && (y == 1 || y == 4))
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    cout << endl;

    for(int x = 1; x <= 9; x++)
    {
        for(int y = 1; y <= 5; y++)
        {
            if(y == 3)
            {
                cout << "*";
            }
            else if(x == 2 && (y >= 2 && y <= 4))
            {
                cout << "*";
            }
            else if(x == 3)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    for(int x = 1; x <= 9; x++)
    {
        for(int y = 1; y <= 9; y++)
        {
            if((x == 1 || x == 9) && y == 5)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
