#include <iostream>
using namespace std;

int sum = 0;

void isEven(int num);
void sumOfDigits(int num);
void isPrime(int num);
void isSpecialNumber(int num);



int main() {
    int num;
    cout << "enter a number" << endl;
    cin >> num;
    isEven(num);
    sumOfDigits(num);
    isPrime(num);
    isSpecialNumber(num);


    return 0;
    
}

void sumOfDigits(int num)
{
    while (num != 0)
    {

        int last = num % 10;

        sum += last;

        num /= 10;
    }
    cout << sum << endl;
}

void isEven(int num)
{

    if (num % 2 == 0)
    {
        cout << "True" << endl;
        bool even = true;
    }
    else
    {
        cout << "False" << endl;
    }
}

void isPrime(int num)
{
    if (num <= 1)  {
        cout << "false" << endl;
    } else {

    int cnt =0;
    for (int i = 1; i <= num; i++) {if (num % i == 0)  {
        cnt++;
        }
    }

    cnt == 2; 
    cout << "True" << endl;
    }
}

void isSpecialNumber(int num) {
    num = sum;
    
    if (isEven) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

}