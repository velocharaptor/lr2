#ifndef LR2_ARRAYSEQUENCE_H
#define LR2_ARRAYSEQUENCE_H

#include <cstring>
#include <iostream>
#include "DynamicArray.h"
#include "Sequence.h"

using namespace std;

template<class A> class ArraySequence: public Sequence<A>{
private:
    DynamicArray<A>* array;
public:
    ArraySequence(A* input_arr, size_t count){
        array = new DynamicArray<A>(input_arr, count);
    }

    explicit ArraySequence(size_t size){
        array = new DynamicArray<A>(size);
    }

    ArraySequence(ArraySequence<A> &input_arr){
        array = new DynamicArray<A>(input_arr.GetLength());
        for(int i = 0; i < input_arr.GetLength(); i++){
            array->Set(i, input_arr.Get(i));
        }
    }

    ~ArraySequence(){
        array->~DynamicArray();
    }

    A Get(size_t index) override{
        return array->Get(index);
    }

    size_t GetLength() override{
        return array->GetLength();
    }

    A GetFirst() override{
        return array->Get(0);
    }

    A GetLast() override{
        return array->Get(array->GetLength() - 1);
    }

    void Set(A value, size_t index) override{
        array->Set(index, value);
    }

    void Resize(size_t new_size){
        array->Resize(new_size);
    }

    void Append(A item) override{
        array->Resize(array->GetLength() + 1);
        array->Set(item, array->GetLength() - 1);
    }

    void Prepend(A item) override{
        array->Resize(array->GetLength() + 1);
        for(int i = array->GetLength() - 1; i > 0; i--){
            A temp = array->Get(i);
            array->Set(array->Get(i-1), i);
            array->Set(temp, i - 1);
        }
        array->Set(item, 0);
    }

    void InsertAt(A item, size_t index){
        array->Set(index, item);
    }

    void Print() override{
        array->OutputArray();
    }
};

#endif //LR2_ARRAYSEQUENCE_H
