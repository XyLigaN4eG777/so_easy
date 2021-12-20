#include "easy_list.h"

int itc_sl_list(const vector <int> &mass){
    int c = mass.size();
    int a = 0;
    if(c != 0){
        for(int i = 0; i < c - 1; i = i + 1){
            if(mass[i + 1] > mass[i]){
                a = a + 1;
            }
        }
    }
    return a;
}
