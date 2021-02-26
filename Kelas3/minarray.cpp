#include <iostream>
using namespace std;

template <class T>
T findMin(T arr[],int n)
{
    int i;
    T min;
    min=arr[0];
    for(i=0;i<n;i++)
    {
         if(min > arr[i])
        min=arr[i];
    }
    return(min);
}

int main()
{
    int arrInt[] = {10, 2, 8, -1, -22};
    float arrFloat[] = {-1112.10f, 3.02, -123.0f,  -283.0f};
    cout << findMin<int>(arrInt, 5) << endl;
    cout << findMin<float>(arrFloat, 5) << endl;
    return 0;
}