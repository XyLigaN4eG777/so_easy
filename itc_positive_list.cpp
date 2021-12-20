#include "easy_list.h"

int itc_positive_list(const vector <int> &mass){
    int a;
    a = mass.size();
    int b = 0;
    if(a != 0){
        for(int i = 0; i < a; i++){
            if(mass[i] >= 0){
                b = b + 1;
            }
        }
    }
    return b;
}
