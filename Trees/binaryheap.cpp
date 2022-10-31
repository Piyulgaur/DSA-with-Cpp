#include <iostream>
using namespace std;

void insert(int arr[], int i)
{
    int temp = arr[i];

    while (i > 1 && temp > arr[i / 2])
    {
        arr[i] = arr[i / 2];
        i = i / 2;
    }
    arr[i] = temp;
}

void deleteE(int arr[], int n)
{
    int x = arr[1];
    arr[1] = arr[n];
    int i = 1, j = 2 * i;
    while (j < n - 1)
    {
        if (arr[j + 1] > arr[j])
        {
            j = j + 1;
        }

        if (arr[i] < arr[j])
        {
            swap(arr[i], arr[j]);
            i = j;
            j = 2 * j;
        }
        else
            break;
    }
    arr[n] = x;
}

void heapSort(int arr[])
{
    for (int i = 1; i < 8; i++)
    {
        deleteE(arr, 8 - i);
    }
}

void heafify()
{
    int arr[] = {5, 10, 30, 20, 35, 40, 15};
    for (int i = 7 / 2-1; i >= 0; i++)
    {

        int j = 2 * i + 1;
        while (j < 7 - 1)
        {
            if (arr[j + 1] > arr[j])
            {
                j = j + 1;
            }
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
                i = j;
                j = 2 * i + 1;
            }
            else
                break;
        }
    }

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // int arr[8];
    // arr[0] = 0;
    // arr[1] = 2;
    // cout << " enter element" << endl;
    // for (int i = 2; i < 8; i++)
    // {
    //     cin >> arr[i];
    //     insert(arr, i);
    // }

//     for (int i = 1; i < 8; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     // deleteE(arr, 7);
//     // cout << endl;
//     heapSort(arr);
//     cout << endl;
//     for (int i = 1; i < 8; i++)
//     {
//         cout << arr[i] << " ";
//     }]

heafify();
}