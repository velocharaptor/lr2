#include <iostream>
#include "ArraySequence.h"
#include "ListSequence.h"

using namespace std;

void GetLengthTest(ArraySequence<int> &Array, ArraySequence<char> &cArray){
    if(Array.GetLength() == 3)
        cout << "GetLengthTest<int> - OK\n";
    else
        cout << "GetLengthTest<int> - FALSE\n";
    if(cArray.GetLength() == 3)
        cout << "GetLengthTest<char> - OK\n";
    else
        cout << "GetLengthTest<char> - FALSE\n";
}
void GetFirstTest(ArraySequence<int> &Array, ArraySequence<char> &cArray){
    if(Array.GetFirst() == 1)
        cout << "GetFirstTest<int> - OK\n";
    else
        cout << "GetFirstTest<int> - FALSE\n";
    if(cArray.GetFirst() == 'b')
        cout << "GetFirstTest<char> - OK\n";
    else
        cout << "GetFirstTest<char> - FALSE\n";
}
void GetLastTest(ArraySequence<int> &Array, ArraySequence<char> &cArray){
    if(Array.GetLast() == 3)
        cout << "GetLastTest<int> - OK\n";
    else
        cout << "GetLastTest<int> - FALSE\n";
    if(cArray.GetLast() == 'd')
        cout << "GetLastTest<char> - OK\n";
    else
        cout << "GetLastTest<char> - FALSE\n";
}
void GetTest(ArraySequence<int> &Array, ArraySequence<char> &cArray){
    if(Array.Get(1) == 2)
        cout << "GetTest<int> - OK\n";
    else
        cout << "GetTest<int> - FALSE\n";
    if(cArray.Get(1) == 'c')
        cout << "GetTest<char> - OK\n";
    else
        cout << "GetTest<char> - FALSE\n";
}
void ArrayPrependTest(ArraySequence<int> &Array, ArraySequence<char> &cArray){
    if(Array.GetFirst() == 0)
        cout << "PrependTest<int> - OK\n";
    else
        cout << "PrependTest<int> - FALSE\n";
    if(cArray.GetFirst() == 'a')
        cout << "PrependTest<char> - OK\n";
    else
        cout << "PrependTest<char> - FALSE\n";
}
void ArrayAppendTest(ArraySequence<int> &Array, ArraySequence<char> &cArray){
    if(Array.GetLast() == 4)
        cout << "AppendTest<int> - OK\n";
    else
        cout << "AppendTest<int> - FALSE\n";
    if(cArray.GetLast() == 'e')
        cout << "AppendTest<char> - OK\n";
    else
        cout << "AppendTest<char> - FALSE\n";
}
void ArrayInsertAtTest(ArraySequence<int> &Array, ArraySequence<char> &cArray){
    if(Array.Get(2) == 2)
        cout << "InsertAtTest<int> - OK\n";
    else
        cout << "InsertAtTest<int> - FALSE\n";
    if(cArray.Get(2) == 'c')
        cout << "InsertAtTest<char> - OK\n";
    else
        cout << "InsertAtTest<char> - FALSE\n";
}

void ArraySequenceTests(){
    int arr[3] = {1, 2, 3};
    char carr[3] = {'b', 'c', 'd'};
    ArraySequence<int> Array(arr, 3);
    ArraySequence<char> cArray(carr, 3);
    GetLengthTest(Array, cArray);
    GetFirstTest(Array, cArray);
    GetLastTest(Array, cArray);
    GetTest(Array, cArray);
    Array.Prepend(0);
    Array.Append(4);
    cArray.Prepend('a');
    cArray.Append('e');
    ArrayPrependTest(Array, cArray);
    ArrayAppendTest(Array, cArray);
    Array.InsertAt(4,2);
    cArray.InsertAt('f',2);
    ArrayInsertAtTest(Array, cArray);
}

void GetLengthTest(ListSequence<int> &List, ListSequence<char> &cList){
    if(List.GetLength() == 3)
        cout << "GetLengthTest<int> - OK\n";
    else
        cout << "GetLengthTest<int> - FALSE\n";
    if(cList.GetLength() == 3)
        cout << "GetLengthTest<char> - OK\n";
    else
        cout << "GetLengthTest<char> - FALSE\n";
}
void GetFirstTest(ListSequence<int> &List, ListSequence<char> &cList){
    if(List.GetFirst() == 1)
        cout << "GetFirstTest<int> - OK\n";
    else
        cout << "GetFirstTest<int> - FALSE\n";
    if(cList.GetFirst() == 'b')
        cout << "GetFirstTest<char> - OK\n";
    else
        cout << "GetFirstTest<char> - FALSE\n";
}
void GetLastTest(ListSequence<int> &List, ListSequence<char> &cList){
    if(List.GetLast() == 3)
        cout << "GetLastTest<int> - OK\n";
    else
        cout << "GetLastTest<int> - FALSE\n";
    if(cList.GetLast() == 'd')
        cout << "GetLastTest<char> - OK\n";
    else
        cout << "GetLastTest<char> - FALSE\n";

}
void GetTest(ListSequence<int> &List, ListSequence<char> &cList){
    if(List.Get(1) == 2)
        cout << "GetTest<int> - OK\n";
    else
        cout << "GetTest<int> - FALSE\n";
    if(cList.Get(1) == 'c')
        cout << "GetTest<char> - OK\n";
    else
        cout << "GetTest<char> - FALSE\n";
}
void ListPrependTest(ListSequence<int> &List, ListSequence<char> &cList){
    if(List.GetFirst() == 0)
        cout << "PrependTest<int> - OK\n";
    else
        cout << "PrependTest<int> - FALSE\n";
    if(cList.GetFirst() == 'a')
        cout << "PrependTest<char> - OK\n";
    else
        cout << "PrependTest<char> - FALSE\n";
}
void ListAppendTest(ListSequence<int> &List, ListSequence<char> &cList){
    if(List.GetLast() == 4)
        cout << "AppendTest<int> - OK\n";
    else
        cout << "AppendTest<int> - FALSE\n";
    if(cList.GetLast() == 'e')
        cout << "AppendTest<char> - OK\n";
    else
        cout << "AppendTest<char> - FALSE\n";
}
void ListInsertAtTest(ListSequence<int> &List, ListSequence<char> &cList){
    if(List.Get(2) == 4)
        cout << "InsertAtTest<int> - OK\n";
    else
        cout << "InsertAtTest<int> - FALSE\n";
    if(cList.Get(2) == 'f')
        cout << "InsertAtTest<char> - OK\n";
    else
        cout << "InsertAtTest<char> - FALSE\n";
}
void ListSubListTest(ListSequence<int> &List, ListSequence<char> &cList){
    if((List.GetSubListSequence(1,2).Get(1) == 1)&&(List.GetSubListSequence(1,2).Get(2) == 2))
        cout << "SubListTest<int> - OK\n";
    if((cList.GetSubListSequence(1,2).Get(1) == 'b')&&(cList.GetSubListSequence(1,2).Get(2) == 'c'))
        cout << "SunListTest<char> - OK\n";
}

void ListSequenceTests(){
    int arr[3] = {1, 2, 3};
    char carr[3] = {'b', 'c', 'd'};
    ListSequence<int> List(arr, 3);
    ListSequence<char> cList(carr, 3);
    GetLengthTest(List, cList);
    GetFirstTest(List, cList);
    GetLastTest(List, cList);
    GetTest(List, cList);
    List.Prepend(0);
    List.Append(4);
    cList.Prepend('a');
    cList.Append('e');
    ListPrependTest(List, cList);
    ListAppendTest(List, cList);
    List.InsertAt(4,2);
    cList.InsertAt('f',2);
    ListInsertAtTest(List, cList);
    ListSubListTest(List, cList);
}

void StartTesting(){
    cout << "ArraySequenceTesting:\n\n";
    ArraySequenceTests();
    cout << "\nListSequenceTesting:\n\n";
    ListSequenceTests();
    cout << "\n";
}
