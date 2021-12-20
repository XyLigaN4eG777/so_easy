#include "easy_list.h"

void itc_rshift_list(vector <int> &mass){
    int c = mass.size();
    vector<int> mass2 = mass;
    if(c != 0){
        for(int i = 1; i < c; i = i + 2){
            mass[i] = mass2[i - 1];
            mass[i + 1] = mass2[i];
        }
        mass[0] = mass2[count - 1];
    }
}
