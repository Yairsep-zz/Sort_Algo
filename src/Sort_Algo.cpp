//
// Created by yairs on 25/11/2020.
//

#include "../include/Sort_Algo.h"
#include <iostream>
#include <fstream>

using namespace std;


Sort_Algo::Sort_Algo() {}

Sort_Algo::Sort_Algo(vector<int> list) : list(list){}

vector<int> Sort_Algo::sort() {

    vector<int> output;
    string line;

    for (int i = 0; i < list.size(); i++) {
        std::cout << list.at(i) << ' ';
    }
    return output;
}

void Sort_Algo::printArray(int *arr, int size) {

    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void Sort_Algo::make_output_file(string output_file , int *arr, int size) {

    string path = "../data/" + output_file;
    ofstream output_f (path);

    if (output_f.is_open())
    {
        for(int count = 0; count < size; count ++){
            output_f << arr[count] << endl;
        }
        output_f.close();
    }
    else cout << "Unable to open file";

}


//============================Merge Sort=====================================
Merge_Sort::Merge_Sort(int arr[]) : arr(arr){

}

void Merge_Sort::sort(int l , int r) {

    if(l>=r){
        return;//returns recursively
    }
    int m = (l+r-1)/2;
    sort(l,m);
    sort(m+1,r);
    merge(l,m,r);
}

void Merge_Sort::merge(int l, int m, int r) {

    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temp arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]

    // Initial index of first subarray
    int i = 0;

    // Initial index of second subarray
    int j = 0;

    // Initial index of merged subarray
    int k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


//============================Quick_Sort=====================================
Quick_Sort::Quick_Sort(int arr[]) : arr(arr){

}


void Quick_Sort::swap(int *a, int *b) {

    int t = *a;
    *a = *b;
    *b = t;
}

int Quick_Sort::partition(int low, int high) {

    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void Quick_Sort::sort(int low, int high) {

    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(low, high);

        // Separately sort elements before
        // partition and after partition
        sort(low, pi - 1);
        sort(pi + 1, high);
    }
}

//============================Bubble_Sort=====================================
Bubble_Sort::Bubble_Sort(int arr[]) : arr(arr){

}

void Bubble_Sort::sort(int n) {

    int i, j;
    for (i = 0; i < n-1; i++)

        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

void Bubble_Sort::swap(int *xp, int *yp) {

    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

