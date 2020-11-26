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


//============================Merge Sort=====================================
Merge_Sort::Merge_Sort(vector<int> list) : list(list) {

}

vector<int> Merge_Sort::sort() {
    vector<int> output;
    string line;

    for (int i = 0; i < list.size(); i++) {
        std::cout << list.at(i) << ' ';
    }
    return output;
}

//============================Quick_Sort=====================================
Quick_Sort::Quick_Sort(vector<int> list) : list(list) {

}

vector<int> Quick_Sort::sort() {
    vector<int> output;
    string line;

    for (int i = 0; i < list.size(); i++) {
        std::cout << list.at(i) << ' ';
    }
    return output;
}

//============================Bubble_Sort=====================================
Bubble_Sort::Bubble_Sort(vector<int> list) : list(list) {

}

vector<int> Bubble_Sort::sort() {
    vector<int> output;
    string line;

    for (int i = 0; i < list.size(); i++) {
        std::cout << list.at(i) << ' ';
    }
    return output;
}
