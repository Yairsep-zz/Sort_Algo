#include <iostream>

#include "../include/Sort_Algo.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <chrono>

using namespace std;
using namespace std::chrono;



void Merge_Call(int merge_arr[] , int size){

    // Get starting timepoint
    auto start = high_resolution_clock::now();

    //Merge Sort
    Merge_Sort *merg = new Merge_Sort(merge_arr);
    merg->sort( 0 , size-1);
    auto stop = high_resolution_clock::now();
    auto merge_duration = duration_cast<milliseconds>(stop - start);
    cout << "Time taken by Merge Sort function: " << merge_duration.count() << " milliseconds" << endl;

    string output_file_name = "merge_output.txt";
    merg->make_output_file(output_file_name , merge_arr , size);
//    cout << "Merge Sort:" << endl;
//    merg->printArray(merge_arr , size);

}

void Quick_Call(int quick_arr[] , int size){

    auto start = high_resolution_clock::now();
    Quick_Sort *quick = new Quick_Sort(quick_arr);
    quick->sort( 0 , size-1);
    auto stop = high_resolution_clock::now();
    auto quick_duration = duration_cast<milliseconds>(stop - start);
    cout << "Time taken by Quick Sort function: " << quick_duration.count() << " milliseconds" << endl;
    string output_file_name = "quick_output.txt";
    quick->make_output_file(output_file_name , quick_arr , size);
//    cout << "Quick Sort:" << endl;
//    quick->printArray(merge_arr , input.size());

}

void Bubble_Call(int bubble_arr[] , int size){

    auto start = high_resolution_clock::now();
    Bubble_Sort *bubble = new Bubble_Sort(bubble_arr);
    bubble->sort(size -1);
    auto stop = high_resolution_clock::now();
    auto bubble_duration = duration_cast<milliseconds>(stop - start);
    cout << "Time taken by Bubble Sort function: " << bubble_duration.count() << " milliseconds" << endl;
    string output_file_name = "bubble_output.txt";
    bubble->make_output_file(output_file_name , bubble_arr , size);
//    cout << "Bubble Sort:" << endl;
//    bubble->printArray(merge_arr , input.size());
}

int main() {

    string line;
    fstream File_Input("../data/input.txt");
    vector<int> input;

//    loading input vector
    while (getline(File_Input, line)) {
        stringstream geek(line);
        int x = 0;
        geek >> x;
        input.push_back(x);
    }

    //Initiating arrays
    int merge_arr[input.size()];
    copy(input.begin(), input.end(), merge_arr);
    int quick_arr[input.size()];
    copy(input.begin(), input.end(), quick_arr);
    int bubble_arr[input.size()];
    copy(input.begin(), input.end(), bubble_arr);

    //call sort functions
    Merge_Call(merge_arr , input.size());
    Quick_Call(quick_arr , input.size());
//    Bubble_Call(bubble_arr ,input.size());

    File_Input.close();

    return 0;
}

