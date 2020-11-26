//
// Created by yairs on 25/11/2020.
//

#include "../include/Sort_Algo.h"
#include <iostream>
#include <fstream>
using namespace std;

Sort_Algo::Sort_Algo(vector<int> list) : list(list){}

vector<int> Sort_Algo::sort() {

    vector<int> output;
    string line;

    for (int i = 0; i < list.size(); i++) {
        std::cout << list.at(i) << ' ';
    }
    return output;
}