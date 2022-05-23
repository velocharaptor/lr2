#ifndef LR2_STEK_H
#define LR2_STEK_H

#include <iostream>
#include <cstring>
#include "Sequence.h"
#include <functional>

using namespace std;

template<class D, class T> class Stek{
private:
    D* stek;
public:
    Stek(){
        stek = new D[0];
    }

    Stek(size_t size){
        stek = new D[size];
    }

    Stek(size_t size, T item){
        stek = new D[size];
        for(int i = 0; i < size; i++){
            stek->InsertAt(item, i);
        }
    }

    Stek(size_t size, T* item){
        stek = new D[size];
        for(int i = 0; i < size; i++){
            stek->InsertAt(item[i], i);
        }
    }

    Stek(D &stek2): stek(D(stek2.getLength())){
        for(int i = 0; i < stek2.getLength(); i++){
            push(stek2[i]);
        }
    }


    size_t GetLength(){
        return stek->GetLength();
    }

    T GetLast(){
        return stek->GetLast();
    }

    void AddLast(T item){
        stek->Append(item);
    }

    void PopBack(){
        stek->PopBack();
    }

    Stek<D, T> operator+(Stek<D, T> const &new_stek){
        D* temp = this->stek + new_stek.stek;
        Stek<D, T> concat_stek(temp);
        return concat_stek;
    }

    Stek<D, T> map(function<T(T &)> function1){
        Stek<D, T> temp;
        for(int i = 0; i < this->size(); i++){
            temp.AddLast(function(stek[i]));
        }
        return temp;
    };

    Stek<D, T> where(function<bool(T &)> function2){
        Stek<D, T> temp;
        for(int i = 0; i < stek->size(); i++){
            if(function2(this->stek[i])){
                temp.AddLast(this->stek[i]);
            }
        }
        return temp;
    };

    T reduce(function<T(T &, T &)> function3, T start){
        T temp = function3(this->stek[0], start);
        for(int i = 0; i < stek->size(); i++){
            temp = function3(this->stek[i], temp);
        }
        return temp;
    };

    void Print(){
        stek->Print();
    }

    ~Stek(){
        delete stek;
    }
};

#endif //LR2_STEK_H
