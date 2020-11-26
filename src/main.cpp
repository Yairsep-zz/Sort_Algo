#include <iostream>

#include "../include/Sort_Algo.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {

    string line;
    fstream File_Input("../data/input2.txt");
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

    //Merge Sort

    int before_time = 0;
    Merge_Sort *merg = new Merge_Sort(merge_arr);
    merg->sort( 0 , input.size()-1);
    int current_time = 2;
    int mergetime =  current_time - before_time;
    cout << "Merge Sort:" << endl;
    merg->printArray(merge_arr , input.size());


    Quick_Sort *quick = new Quick_Sort(quick_arr);
    quick->sort( 0 , input.size()-1);
    current_time = 2;
    int quick_time =  current_time - mergetime;
    cout << "Quick Sort:" << endl;
    quick->printArray(merge_arr , input.size());
//
    Bubble_Sort *bubble = new Bubble_Sort(bubble_arr);
    bubble->sort(input.size()-1);
    current_time = 3;
    int bubble_time =  current_time - quick_time;
    cout << "Bubble Sort:" << endl;
    bubble->printArray(merge_arr , input.size());

    File_Input.close();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
