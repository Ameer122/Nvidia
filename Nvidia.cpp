#include <iostream>
#include<math.h>
using namespace std;

int Power(int num)
{
    int power = 1;
    while((num /=3) != 0)
        power++;
    return power;
}

int *requiredWeights(int length)
{
    int* A = new int[length];
    for (int i = 0; i <= length; i++)
        A[i] = pow(3,i);
    return A;
}

int main()
{
    int X = 40;
int *b;
int length = Power(X);
    b = requiredWeights(length);

    for(int i = 0; i<length;i++)
    {
        cout<<b[i] << endl;
    }
    return 0;
}
