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

/**
 *Sort algo is the base class
*/
class Sort_Algo {

public:
    Sort_Algo();
    void make_output_file(string output_file , int arr[], int size);

};
/**
 *Merge_Sort inherits from Sort_algo and implements Merge Sort
*/
class Merge_Sort : public Sort_Algo  {

public:

    Merge_Sort(int arr[]);
    void sort(int l , int r);
    void merge(int l , int m , int r);
    int *arr;

};

/**
 *Quick_Sort inherits from Sort_algo and implements Quick Sort
*/
class Quick_Sort : public Sort_Algo {

public:

    Quick_Sort(int arr[]);
    void sort(int low, int high);
    void swap(int* a, int* b);
    int partition (int low, int high);
    int *arr;
};

/**
 *Bubble_Sort inherits from Sort_algo and implements Bubble Sort
*/
class Bubble_Sort : public Sort_Algo {

public:

    Bubble_Sort(int arr[]);
    void swap(int* a, int* b);
    void sort(int n);
    int *arr;
};


#endif //SORTING_SORT_ALGO_H
