#include <iostream>
#include <cstring>
#include "DynamicArray.h"

using namespace std;

int main()
{
    size_t n, k, index1 = 0, index2 = 0;
    int* arr_1;
    int* arr_2;
    DynamicArray<int> arr1;
    DynamicArray<int> arr2;
    cout << "Enter size array 1:";
    cin >> n;
    arr_1 = new int[n];
    cout << "Enter elem arr_1:\n";
    for(int i = 0; i < n; i++){
        cout << "[" << i << "]:";
        cin>> arr_1[i];
    }
    //arr1.create_array(n);
    //arr2.create_array(n);

    arr1.copy_elem_array(arr_1, n);
    arr2.copy(arr1);
    arr1.output_array();
    arr2.output_array();
    /*cout << "Enter index for element array\n" << "(max index1: " << arr1.get_size() - 1 << ") 1:";
    cin >> index1;
    cout << "(max index2: " << arr2.get_size() - 1 <<") 2:";
    cin >> index2;
    cout << arr1.get(index1) << "\n";
    cout << arr2.get(index2) << "\n"; */
    cout << "value: " <<arr1.get(1) << ". New value: ";
    arr1.set(1, 5);
    cout << arr1.get(1) << "\n";
    arr1.output_array();

    cout << "Enter size array 2:";
    cin >> k;
    arr_2 = new int[k];
    for(int i = 0; i < k; i++){
        cout<< "[" << i << "]";
        cin >> arr_2[i];
    }

    arr1.resize(k); // переделать функцию resize
    arr1.output_array();
    arr1.copy_elem_array(arr_1, k);
    arr1.output_array();

    delete[] arr_1;
    delete[] arr_2;
    arr1.delete_array();
    arr2.delete_array();

    return 0;
}
