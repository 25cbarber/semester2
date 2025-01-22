#include <iostream>
using namespace std;

int sum = 0;

bool isEven(int num);
int sumOfDigits(int num);
bool isPrime(int num);
bool isSpecialNumber(int num);



int main() {
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    cout << sumOfDigits(num) << endl;
    cout << isPrime(num) << endl;
    cout << isSpecialNumber(num) << endl;


    return 0;
    
}

int sumOfDigits(int num)
{
    while (num != 0)
    {

        int last = num % 10;

        sum += last;

        num /= 10;
    }
    return sum;
    return num;
}

void isEven(int num)
{

    if (num % 2 == 0)
    {
        cout << "true" << endl;
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
        return false;
    }
}

bool isPrime(int num)
{
    if (num <= 1)  {
        return false;
    }

    int cnt =0;
    for (int i = 1; i <= num; i++) {if (num % i == 0)  {
        cnt++;
        }
    }

    return (cnt ==2); 
}

bool isSpecialNumber(int num) {
    num = sum;
    if (isEven) {

        return true;
        cout << "true" << endl;
    }
    else {
        return false;
        cout << "false" << endl;
    }

}