#include "easy_list.h"

void itc_rev_list(vector <int> &mass){
    int c = mass.size();
    int b; 
    int a = c - 1;
    if(c != 0){
        for(int i = 0; i < c / 2; i = i + 1){
            b = mass[i];
            mass[i] = mass[a - i];
            mass[a - i] = b;
        }
    }
}
