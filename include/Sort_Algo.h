//
// Created by yairs on 25/11/2020.
//

#ifndef SORTING_SORT_ALGO_H
#define SORTING_SORT_ALGO_H
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class Sort_Algo {

public:

    Sort_Algo(vector<int> list);

    Sort_Algo();

    vector<int> list;
    virtual vector<int> sort();
    void printArray(int arr[], int size);
    void make_output_file(string output_file , int arr[], int size);

};

class Merge_Sort : public Sort_Algo  {

public:

    Merge_Sort(int arr[]);
    virtual void sort(int l , int r);
    void merge(int l , int m , int r);

    int *arr;

};

class Quick_Sort : public Sort_Algo {

public:

    Quick_Sort(int arr[]);
    virtual void sort(int low, int high);
    void swap(int* a, int* b);
    int partition (int low, int high);

    int *arr;
};

class Bubble_Sort : public Sort_Algo {

public:

    Bubble_Sort(int arr[]);
    void swap(int* a, int* b);
    virtual void sort(int n);

    int *arr;
};


#endif //SORTING_SORT_ALGO_H
