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

    Merge_Sort *merg = new Merge_Sort(input);
    merg->sort();

//    int before_time = 0;
//    Merge_Sort merg(File_Input);
//    vector<int> merge_output = merg.Sort();
//    int current_time = 2;
//    int mergetime =  current_time - before_time;

    Quick_Sort *quick = new Quick_Sort(input);
//    vector<int> quick_output = merg.Sort();
//    current_time = 2;
//    int quick_time =  current_time - mergetime;
//    quick->sort();
//
    Bubble_Sort *bubble = new Bubble_Sort(input);
//    vector<int> bubble_output = merg.Sort();
//    current_time = 3;
//    int bubble_time =  current_time - quick_time;
//bubble->sort();

    File_Input.close();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
