/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: zezeon
 *
 * Created on 2016년 6월 24일 (금), 오전 8:11
 */

#include <cstdlib>
#include<iostream>
#include<vector>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    vector<int> v {1,2,3,4,5,6,7};
    for(auto& a : v) cout << a << ' ';
    cout << endl;
    return 0;
}

