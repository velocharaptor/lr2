#ifndef LR2_SEQUENCE_H
#define LR2_SEQUENCE_H

#include <cstring>
#include <iostream>

using namespace std;

template<class S> class Sequence{

    virtual size_t GetLength() = 0;

    virtual S GetFirst() = 0;

    virtual S GetLast() = 0;

    virtual S Get(size_t index) = 0;

    virtual void Append(S item) = 0;

    virtual void Prepend(S item) = 0;

    virtual void InsertAt(S item, size_t index) = 0;

    virtual void Print() = 0;

    virtual void Set(S item , size_t index) = 0;

};

#endif //LR2_SEQUENCE_H
