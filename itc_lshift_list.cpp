#include "easy_list.h"

void itc_lshift(vector <int> &mass){
    int c = mass.size();
    vector<int> mass2 = mass;
    if(c != 0){
        for(int i = c - 2; i >= 0; i = i - 2){
            mass[i] = mass2[i + 1];
            mass[i - 1] = mass2[i];
        }
        mass[c - 1] = mass2[0];
    }
}
