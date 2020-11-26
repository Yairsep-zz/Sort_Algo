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

    Sort_Algo();

    vector<int> list;
    virtual vector<int> sort();

};

class Merge_Sort : public Sort_Algo  {

public:

    Merge_Sort(vector<int> list);
    vector<int> list;
    virtual vector<int> sort();

};

class Quick_Sort : public Sort_Algo {

public:

    Quick_Sort(vector<int> list);
    vector<int> list;
    virtual vector<int> sort();

};

class Bubble_Sort : public Sort_Algo {

public:

    Bubble_Sort(vector<int> list);
    vector<int> list;
    virtual vector<int> sort();

};


#endif //SORTING_SORT_ALGO_H
