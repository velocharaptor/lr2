#include <iostream>
#include <cstring>
#include "DynamicArray.h"

using namespace std;

int main()
{
    size_t n, k, z, index1 = 0, index2 = 0;
    int* arr1;
    int* arr2;

    cout << "Enter size array 1:";
    cin >> n;
    arr1 = new int[n];
    cout << "Enter elem arr_1:\n";
    for(int i = 0; i < n; i++){
        cout << "[" << i << "]:";
        cin>> arr1[i];
    }
    cout << "Enter size array 2:";
    cin >> k;
    arr2 = new int[k];
    for(int i = 0; i < k; i++){
        cout<< "[" << i << "]:";
        cin >> arr2[i];
    }
    DynamicArray<int> arr_1(arr1, n);
    DynamicArray<int> arr_2(k);

    arr_1.output_array();
    arr_2.output_array();

    arr_1.resize(k);
    cout << "arr1(after resize): ";
    arr_1.output_array();
    cout << "arr1(after copy_elem_array): ";
    arr_1.output_array();

    delete[] arr1;
    delete[] arr2;

    return 0;
}
