#pragma once
class Sort

{

    int* array; // vector
    int nr_elemente;

public:

    Sort(int count, int minim, int maxim);
    Sort(int *vector, int count);
    Sort(int count, ...);
    Sort(const char* C);
    Sort();
    void InsertSort(bool ascendent);
    void QuickSort(bool ascendent );
    void BubbleSort(bool ascendent );
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);

};

