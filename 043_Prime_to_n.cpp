// 043_Prime_to_n.cpp
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i, num, lim;
    cout << "Enter the number :";
    cin >> num;
    
    cout << "Enter the Limit : ";
    cin >> lim;

    cout << "Prime numbers up to " << lim << " are : " << endl;

    for (num = num; num <= lim; num++)
    {

        if(num<=1)
        continue;
        
        bool prime = true;
        int s = sqrt(num);

        for (i = 2; i <= s; i++)
        {
            if (num % i == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            cout << num << " ";
        }
    }
}