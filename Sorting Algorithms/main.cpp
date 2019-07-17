#include <iostream>
#include "SortingAlgorithms.cpp"

using namespace std;

int main()
{
    int myArray1[] = {9,8,7,25,69,78,-11,22};

    SortingAlgorithms Sorter;

    for(int i = 0; i < 8; i++){
        cout << myArray1[i] << " ";
    }

    cout << endl;

    Sorter.BubbleSort(myArray1,8);

    for(int i = 0; i < 8; i++){
        cout << myArray1[i] << " ";
    }

    cout << endl;
    cout << endl;

    int myArray2[] = {3,38,5,44,15,36,26,27,2,46,4,19,47,48,50};

    for(int i = 0; i < 15; i++){
        cout << myArray2[i] << " ";
    }

    cout << endl;

    Sorter.SelectionSort(myArray2,15);

    for(int i = 0; i < 15; i++){
        cout << myArray2[i] << " ";
    }

    cout << endl;
    cout << endl;

    int myArray3[] = {25,22,36,-7,38,5};

    for(int i = 0; i < 6; i++){
        cout << myArray3[i] << " ";
    }

    cout << endl;

    Sorter.InsertionSort(myArray3,6);

    for(int i = 0; i < 6; i++){
        cout << myArray3[i] << " ";
    }

    cout << endl;
    cout << endl;

    int myArray4[] = {-13,115,38,5,44,15,36,26,27,2,46,4,19,47,49,55};

    for(int i = 0; i < 16; i++){
        cout << myArray4[i] << " ";
    }

    cout << endl;

    Sorter.MergeSort(myArray4,0,15);

    for(int i = 0; i < 16; i++){
        cout << myArray4[i] << " ";
    }

    cout << endl;

    return 0;
}
