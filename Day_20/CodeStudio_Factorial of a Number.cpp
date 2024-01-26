#include <iostream>
using namespace std;

int factorial(int X) 
{
   int ans = 1;
   for (int i = 1; i <= X; i++) 
   {
      ans = ans * i;
   }
   return ans;
}

int main() 
{
    int num;
    cin>>num;
    if(num>=0)
    {
        cout<<factorial(num);
    }
    else
    cout<<"Error";

    return 0;
}
