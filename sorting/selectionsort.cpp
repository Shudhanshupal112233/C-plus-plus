#include <iostream>
using namespace std;
int selection(int arr[], int n)
{
    int i, j, min;
    for(i = 0; i < n - 1; i++)
    {
        int min = i;
        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }

       swap(arr[i], arr[min]);
    }

      for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    
}

int main()
{
    int arr[5] = {5, 3, 2, 1, 4};
    int n = 5;
    selection(arr, n);
 
}