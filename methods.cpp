#include <iostream>
using namespace std;

int sum = 0;
int num = 0;

bool isEven(int num);
int sumOfDigits(int num);
bool isPrime(int num);
bool isSpecialNumber(int num);



int main() {
    cout << "enter a number" << endl;
    cin >> num;
    cout << " " << endl;
    if (isEven(num)) {
        cout << "Is Even: True" << endl;
        
    } else {
        cout << "Is Even: False" << endl;
    }

    sumOfDigits(num);

    if (isPrime(num)) {

        cout << "Is Prime: True" << endl;
    }else {
        cout << "Is Prime: False" << endl;
    }

    if (isSpecialNumber(num)) {
        
        cout << "Is Special Number: True" << endl;
    }else {
        cout << "Is Special Number: False" << endl;
    }

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
}

bool isEven(int num)
{

    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isPrime(int num)
{
    if (num <= 1)  {
        return false;
    } else {

    int cnt =0;
    for (int i = 1; i <= num; i++) {if (num % i == 0)  
        cnt++;
    }

    if (cnt > 2)
        return false;
     
    else 
        return true;
    }
}

bool isSpecialNumber(int num) {
    
    return isEven(num) && isPrime(num);
}


    
    

