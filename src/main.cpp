#include <iostream>

#include "../include/Sort_Algo.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <chrono>

using namespace std;
using namespace std::chrono;



void Sort_Call(int input_arr[] , int size , int flag){

    //Merge Sort
    if (flag == 0){
        auto start = high_resolution_clock::now();
        Merge_Sort *merg = new Merge_Sort(input_arr);
        merg->sort( 0 , size-1);
        auto stop = high_resolution_clock::now();
        auto merge_duration = duration_cast<milliseconds>(stop - start);
        cout << "Time taken by Merge Sort function: " << merge_duration.count() << " milliseconds" << endl;

        string output_file_name = "merge_output.txt";
        merg->make_output_file(output_file_name , input_arr , size);
    }
    //Quick Sort
    else if (flag ==1){
        auto start = high_resolution_clock::now();
        Quick_Sort *quick = new Quick_Sort(input_arr);
        quick->sort( 0 , size-1);
        auto stop = high_resolution_clock::now();
        auto quick_duration = duration_cast<milliseconds>(stop - start);
        cout << "Time taken by Quick Sort function: " << quick_duration.count() << " milliseconds" << endl;
        string output_file_name = "quick_output.txt";
        quick->make_output_file(output_file_name , input_arr , size);
    }
    //Buuble Sort
    else if (flag ==2){
        auto start = high_resolution_clock::now();
        Bubble_Sort *bubble = new Bubble_Sort(input_arr);
        bubble->sort(size -1);
        auto stop = high_resolution_clock::now();
        auto bubble_duration = duration_cast<milliseconds>(stop - start);
        cout << "Time taken by Bubble Sort function: " << bubble_duration.count() << " milliseconds" << endl;
        string output_file_name = "bubble_output.txt";
        bubble->make_output_file(output_file_name , input_arr , size);
    }


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
    Sort_Call(merge_arr , input.size() , 0);
    Sort_Call(quick_arr , input.size() , 1);
    Sort_Call(bubble_arr , input.size() , 2);

    File_Input.close();

    return 0;
}

