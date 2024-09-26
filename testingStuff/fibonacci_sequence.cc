// fibonacci sequence

#include <iostream>

using namespace std;

int num1 = 0;
int num2 = 1;
int num_storage;

int main()
{
    while (num1 < 1000)
    {
        cout << num1 << endl;
        num_storage = num1;
        num1 += num2;
        num2 = num_storage;
    }
    return 0;
}