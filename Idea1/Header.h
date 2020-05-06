#include <iostream>
#include <fstream>
#include <algorithm>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;
using namespace this_thread;

//Used to check if strings are equal
int nonsens(string known, string input) {

    //Makes lowercase
    transform(known.begin(), known.end(), known.begin(), ::tolower);
    transform(input.begin(), input.end(), input.begin(), ::tolower);

    //Same
    if (known.compare(input) == 0)
        return 1;

    //If not
    return 0;
}
int in(int get) {
    cout << ":" << '\t';
    cin >> get;
    return get;
}
string in(string get) {
    cout << ":" << '\t';
    cin >> get;
    return get;
}
#pragma once
