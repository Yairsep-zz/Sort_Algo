//
// Created by yairs on 25/11/2020.
//

#ifndef SORTING_SORT_ALGO_H
#define SORTING_SORT_ALGO_H
#include <string>
#include <vector>

using namespace std;

class Sort_Algo {

public:

    Sort_Algo(vector<int> list);
    vector<int> list;
    vector<int> sort();

};

//class Merge_Sort : public Sort_Algo  {
//
//public:
//
////    Merge_Sort();
//    Merge_Sort(int arrinput[5]);
////    Merge_Sort(vector<int> input);
//    virtual vector<int> Sort();
////    vector<int> input_vector;
//    int [5] arrinput;
//
//};
//
//class Quick_Sort : public Sort_Algo {
//
//public:
//
//    virtual vector<int> Sort();
//
//};
//
//class Bubble_Sort : public Sort_Algo {
//
//public:
//
//    virtual vector<int> Sort();
//
//};


#endif //SORTING_SORT_ALGO_H
