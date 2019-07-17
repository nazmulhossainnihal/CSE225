#include "SortingAlgorithms.h"
void SortingAlgorithms::BubbleSort(int* numbers, int length)
{
    bool swapped;
    int IndexOfLastUnsortedElement = length - 1;
    do {
        swapped = false;
        for(int i = 0; i <= IndexOfLastUnsortedElement; i++){
            if(numbers[i]>numbers[i+1]){
               int temp = numbers[i];
               numbers[i] = numbers[i+1];
               numbers[i+1] = temp;
               swapped = true;
            }
        }
    } while (swapped);
}

void SortingAlgorithms::SelectionSort(int* numbers, int length)
{
    for(int i = 0; i <= length - 2; i++){
        int minimum = i;
        for(int j = (i + 1); j <= length - 1; j++){
            if(numbers[minimum] > numbers[j]){
                minimum = j;
            }
        }
        int temp = numbers[i];
        numbers[i] = numbers[minimum];
        numbers[minimum] = temp;
    }
}

void SortingAlgorithms::InsertionSort(int* numbers, int length)
{
    for(int j = 1; j <= length -1; j++){
        int key = numbers[j];
        int i = j - 1;

        while(i >= 0 && numbers[i] > key){
            numbers[i + 1] = numbers[i];
            i = i - 1;
        }

        numbers[i + 1] = key;
    }
}

void SortingAlgorithms::MergeSort(int* numbers, int leftIndex, int rightIndex)
{
    if(leftIndex < rightIndex){
        int mid = (leftIndex + rightIndex) / 2;

        MergeSort(numbers,leftIndex,mid);
        MergeSort(numbers,mid+1,rightIndex);

        MergeArrays(numbers,leftIndex,mid,mid+1,rightIndex);
    }
}

void SortingAlgorithms::MergeArrays(int* numbers,int beginIndex1,int endIndex1,int beginIndex2,int endIndex2)
{
    int TempArray[(endIndex2 - beginIndex1) + 1];
    int sizeOfTemp = (endIndex2 - beginIndex1) + 1;
    int first = beginIndex1;
    int i = 0;

    while((beginIndex1 <= endIndex1) && (beginIndex2 <= endIndex2)){
        if(numbers[beginIndex1] <= numbers[beginIndex2]){
            TempArray[i] = numbers[beginIndex1];
            i++;
            beginIndex1++;
        } else {
            TempArray[i] = numbers[beginIndex2];
            beginIndex2++;
            i++;
        }
    }

    while((beginIndex1 <= endIndex1)){
        TempArray[i] = numbers[beginIndex1];
        beginIndex1++;
        i++;
    }

    while((beginIndex2 <= endIndex2)){
        TempArray[i] = numbers[beginIndex2];
        beginIndex2++;
        i++;
    }

    for(int x = 0, j = first; x <= sizeOfTemp - 1, j <= endIndex2; x++,j++){
        numbers[j] = TempArray[x];
    }

}
