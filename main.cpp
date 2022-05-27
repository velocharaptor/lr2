#include <iostream>
#include <cstring>
#include "ArraySequence.h"
#include "ListSequence.h"
#include "tests.h"
#include "Stek.h"

using namespace std;

int main()
{
    int number = 0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag5 = 0;
    size_t size = 1;
    int k;
    ListSequence<int> list1;
    ArraySequence<int> arr(size);
    Stek<ListSequence<int>, int> stek(size);
    Stek<ListSequence<int>, int> stek2(size);
    Stek<ListSequence<int>, int> stek3(size);
    Stek<ListSequence<int>, int> sub_stek(size);
    while(flag1 != 1){
        cout << "Select the desired item:\n1)Dynamic Array\n2)Linked List\n3)Stek\n4)Tests\n5)Exit\n->";
        cin >> number;
        switch(number){
            case 1:
                flag2 = 0;
                cout << "Input size:";
                cin >> size;
                arr.Resize(size);
                cout << "Input array:\n";
                for(int i = 0; i < size; i++){
                    cout << "[" << i <<"]:";
                    cin >> k;
                    arr.Set(i, k);
                }
                while(flag2 != 1){
                    int index = 0, value = 0;
                    size_t sindex, lindex;
                    cout << "Select the desired item:\n1)Get elem index\n2)Get size\n3)Set elem\n4)Print\n5)Pop Back\n6)SubList\n7)Exit\n->";
                    cin >> number;
                    switch(number){
                        case 1:
                            cout << "Enter index:";
                            cin >> index;
                            cout << "elem(index): " << arr.Get(index) << endl;
                            break;
                        case 2:
                            cout << "Size array: " << arr.GetLength() << endl;
                            break;
                        case 3:
                            cout << "Enter index:";
                            cin >> index;
                            cout << "Enter value:";
                            cin >> value;
                            arr.Set(value, index);
                            cout << "New Array:";
                            arr.Print();
                            break;
                        case 4:
                            arr.Print();
                            break;
                        case 5:
                            arr.PopBack();
                            arr.Print();
                            break;
                        case 6:
                            cout << "Enter start index:";
                            cin >> sindex;
                            cout << "Enter last index:";
                            cin >> lindex;
                            cout << "SubList:\n";
                            arr.GetSubListSequence(sindex, lindex).Print();
                            break;
                            break;
                        case 7:
                            cout << "Exit\n";
                            flag2 = 1;
                            number = 0;
                            break;
                        default:
                            cout << "Input Error\n";
                            break;
                    }
                }
                break;
            case 2:
                flag3 = 0;
                while(flag3 != 1){
                    int index = 0, count;
                    int key, sindex, lindex;
                    cout << "Select the desired item:\n1)Get elem index\n2)Get length\n3)Append\n4)Prepend\n5)Get first\n6)Get last\n7)Get Sub list\n8)Insert at\n9)Print\n10)Exit\n->";
                    cin >> number;
                    switch(number){
                        case 1:
                            cout << "Enter index:";
                            cin >> index;
                            cout << "elem(index):" << list1.Get(index) << endl;
                            break;
                        case 2:
                            cout << "Length:" << list1.GetLength() << endl;
                            break;
                        case 3:
                            cout << "Enter value:";
                            cin >> key;
                            list1.Append(key);
                            list1.Print();
                            break;
                        case 4:
                            cout << "Enter value:";
                            cin >> key;
                            list1.Prepend(key);
                            list1.Print();
                            break;
                        case 5:
                            cout << "First elem:" << list1.GetFirst() << endl;
                            break;
                        case 6:
                            cout << "Last elem:" << list1.GetLast() << endl;
                            break;
                        case 7:
                            cout << "Enter start index:";
                            cin >> sindex;
                            cout << "Enter last index:";
                            cin >> lindex;
                            cout << "SubList:\n";
                            list1.GetSubListSequence(sindex, lindex).Print();
                            break;
                        case 8:
                            cout << "Enter index:";
                            cin >> index;
                            cout << "Enter value:";
                            cin >> key;
                            list1.InsertAt(key, index);
                            break;
                        case 9:
                            list1.Print();
                            break;
                        case 10:
                            cout << "Exit\n";
                            flag3 = 1;
                            number = 0;
                            break;
                        default:
                            cout << "Input Error\n";
                            break;
                    }
                }
                break;
            case 3:
                flag4 = 0;
                size_t sindex, lindex;
                int h, i;
                int x;
                while(flag4 != 1){
                    cout << "Select the desired item:\n1)Get length\n2)Append\n3)Get last\n4)Pop Back\n5)Concat\n6)Sublist\n7)Print\n8)Exit\n->";
                    cin >> number;
                    switch(number){
                        case 1:
                            cout << "Length:" << stek.GetLength() << endl;
                            break;
                        case 2:
                            cout << "Enter value:";
                            cin >> x;
                            stek.AddLast(x);
                            stek3.AddLast(x);
                            stek.Print();
                            break;
                        case 3:
                            cout << "Last elem:" << stek.GetLast() << endl;
                            break;
                        case 4:
                            stek.PopBack();
                            stek3.PopBack();
                            stek.Print();
                            break;
                        case 5:
                            cout << "Enter sdize stek2:";
                            cin >> h;
                            i = 0;
                            while(i!=h){
                                cout << "Enter value:";
                                cin >> x;
                                stek2.AddLast(x);
                                stek3.AddLast(x);
                                i++;
                            }
                            stek3.Print();
                            while(i!=0){
                                stek3.PopBack();
                                i--;
                            }
                            break;
                        case 6:
                            cout << "Enter start index:";
                            cin >> sindex;
                            cout << "Enter last index:";
                            cin >> lindex;
                            cout << "SubList:\n";
                            stek.SubStek(sindex, lindex).Print();
                            break;
                        case 7:
                            stek.Print();
                            break;
                        case 8:
                            cout << "Exit\n";
                            flag4 = 1;
                            number = 0;
                            break;
                        default:
                            cout << "Input Error\n";
                            break;
                    }
                }
                break;
            case 4:
                flag5 = 0;
                while(flag5 != 1){
                    cout << "Select the desired item:\n1)TestArray\n2)TestList\n3)TestStek\n)Exit\n->";
                    cin >> number;
                    switch(number){
                        case 1:
                            ArrayTesting();
                            break;
                        case 2:
                            ListTesting();
                            break;
                        case 3:
                            StekTesting();
                            break;
                        case 4:
                            cout << "Exit\n";
                            flag5 = 1;
                            number = 0;
                        default:
                            cout << "Input Error\n";
                            break;

                    }
                }
                //StartTesting();
                break;
            case 5:
                cout << "Exit\n";
                flag1 = 1;
                number = 0;
                break;
            default:
                cout << "Input Error\n";
                break;
        }
    }
    return 0;
}
