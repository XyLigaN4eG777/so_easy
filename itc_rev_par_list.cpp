#include "easy_list.h"

void itc_rev_par_list(vector <int> &mass){
    int c = mass.size();
    int b;
    if(c != 0){
        for(int i = 0; i < c; i = i + 2){
            if(i < count - 1){
                b = mass[i];
                mass[i] = mass[i + 1];
                mass[i + 1] = b;
            }
        }
    }
}
