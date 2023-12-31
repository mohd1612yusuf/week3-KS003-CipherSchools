#include <iostream>
using namespace std;
void simplesearch(int *arr, int l, int r, int val)
{
    int i;
    for (i = 1; i < r + 1; i++)
    {
        if (arr[i] == val)
        {
            cout << "congrats your value is present in the array";
            return;
        }
    }
    cout << "Sad bro, your value is not present in the array";
    return;
}
int binarysearch(int *arr, int l, int r, int val)
{
    int middle;
    middle = 1 + (r - 1) / 2;
    if (arr[middle] == val)
    {
        return 1;
    }
    else if (arr[middle] > val)
    {
        return binarysearch(arr, 1, middle - 1, val);
    }
    else
    {
        return binarysearch(arr, middle + 1, r, val);
    }
}
int main()
{
    int arr[7] = {1, 3, 10, 2, 4, 7, 5};
    int size = 7;
    simplesearch(arr, 0, 6, 13);
    simplesearch(arr, 0, 6, 10);
    if (binarysearch(arr, 0, 6, 13) == -1)
        cout << "your value is present";
    return 0;
}