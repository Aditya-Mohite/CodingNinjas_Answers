#include <bits/stdc++.h> 
bool isArmstrong(int num) 
{
    int originalno = num;
    int count = 0;
    int temp = num;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while (num != 0)
    {
        int digit = num % 10;
        sumofpower += pow(digit,count);
        num /= 10;
    }
    return (sumofpower == originalno);
}
