#include <iostream>
#include<math.h>
using namespace std;
#define N 3


//Question 1:

void trans(int array[N][N])
{
    int temp = 0;
    for (int i = 0; i < N; i++)
        {
            for (int j = i; j < N; j++)
            {
            temp = array[j][i];
            array[j][i] = array[i][j];
            array[i][j] = temp;
            }
        }

     for(int i = 0; i<N;i++)
    {
        for(int j = 0; j<N; j++)
        {
            cout<<array[i][j] << ' ' ;
        }
        cout<<endl;
    }
}

//Question 2 :


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
    cout<< "Question Number 1: " <<endl;
    int arr[N][N] = { { 1, 2, 3 },
                      { 4 ,5, 6 },
                      { 7 ,8, 9 }};
     trans(arr);

cout<<endl;


cout<<"Question Number 2 : " <<endl;


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
