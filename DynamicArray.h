#ifndef LR2_DYNAMICARRAY_H
#define LR2_DYNAMICARRAY_H

#include <cstring>
#include <iostream>

using namespace std;

template<class T> class DynamicArray{
private:
    T* arr = nullptr;
    size_t size{};
public:
    //выделение памяти на массив DynamicArray и копирование в него элементов из введенного массива
    DynamicArray copy_elem_array(T* input_arr, size_t count){
        size = count;
        arr = new T[size];
        for (int i = 0; i < size; i++) {
            arr[i] = input_arr[i];
        }
    }
    //выделение памяти на массив
    DynamicArray create_array(size_t count){
        size = count;
        arr = new T[size];
        cout << "Successful.\n";
    }

    void delete_array(){
        delete[] arr;
        cout << "Array destroy.\n";
    }
    //выделение памяти на массив и копирование в него элементов из другого массива этого же класса
    DynamicArray copy(DynamicArray<T> const &input_arr){
        size = input_arr.size;
        arr = new T[size];
        for(int i = 0; i < size; i++){
            arr[i] = input_arr.arr[i];
        }
    }

    T get(size_t index){
        return arr[index];
    }

    T get_size(){
        return size;
    }

    void set(size_t index, T value){
        arr[index] = value;
    }

    void resize(size_t newSize){
        DynamicArray<T> new_arr = new T[size];
        for(int i = 0; i < size; i++){
            new_arr[i] = arr[i];
        }
        delete[] arr;
        //size = newSize;
        arr = new T[newSize];

        if(newSize > size) {
            for (int i = 0; i < size; i++) {
                arr[i] = new_arr[i];
            }
            for (int i = size; i < newSize; i++) {
                arr[i] = 0;
            }
        }
        else{
            for (int i = 0; i < newSize; i++) {
                arr[i] = new_arr[i];
            }
        }
        delete[] new_arr;
    }

    void output_array(){
        cout << "Output array:\n";
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};


#endif //LR2_DYNAMICARRAY_H
