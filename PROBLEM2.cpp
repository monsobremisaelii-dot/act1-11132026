#include <iostream>

using namespace std;

long long factorial(int n);
long long sumNatural(int n);
long long sumSquares(int n);
void compareResults(int n);

int main()
{
    int choice, n;

    while (true)
    {
        cout << "\n======= Factorial and Series Calculator =======\n";
        cout << "1 - Factorial\n";
        cout << "2 - Sum of Natural Numbers\n";
        cout << "3 - Sum of Squares\n";
        cout << "4 - Compare Factorial and sum\n";
        cout << "0 - Exit\n";
        cout << "Enter you choice: ";
        cin >> choice;

        if (cin.fail() || choice < 0 || choice > 4)
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid CHOICE! PLEASE ENTER NUMBERS BETWEEN 0 AND 4.\n";
            continue;
        }

        if (choice == 0)
        {
            cout << "Thank you for using the program. Goodbye!\n";
            break;
        }

        cout << "Enter a number from 0 to 12: ";
        cin >> n;

        while (cin.fail() || n < 0 || n > 12)
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid choice of number! PLEASE ENTER A NUMBER BETWEEN 0 and 12: ";
            cin >> n;
        }
    
        switch (choice)

        {
            case 1:
                cout << "Factorial is = " << factorial(n) << endl;
                break;
            
            case 2:
                cout << "Sum of Natural Number is = " << sumNatural(n) << endl;
                break;

            case 3:
                cout << "Sum of Squares is = " << sumSquares(n) << endl;
                break;

            case 4:
                compareResults(n);
                break;
               
        }

    }
    return 0;
}

long long factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

long long sumNatural(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumNatural(n - 1);
}

long long sumSquares(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n * n) + sumSquares(n - 1);
}

void compareResults(int n)
{
    long long fact = factorial(n);
    long long sumNat = sumNatural(n);

    if (fact > sumNat)
    {
        cout << "Factorial is greater (" << fact << " > " << sumNat << ")" << endl;
    }

    else if (fact < sumNat)
    {
        cout << "Sum is greater (" << sumNat << " > " << fact << ")" << endl;
    }

    else
    {
        cout << "Both are equal (" << fact << " = " << sumNat << ")" << endl;
    }
}
