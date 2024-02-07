#include<iostream>
using namespace std;

int main() 
{
	int num;
    cin >> num;
    int odd = 0, even = 0;

    while (num)
    {
        num % 2 == 0 ? even += num % 10 : odd += num % 10;
        num /= 10;
    }

    cout << even << " " << odd;
    return 0;
	
}
