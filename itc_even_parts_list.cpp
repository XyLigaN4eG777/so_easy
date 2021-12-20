#include "easy_list.h"
void itc_even_parts_list(const vector <int> &mass, vector <int> &mass2){
    int a;
    a = mass.size();
    if(a != 0){
        for(int i = 0; i < a; i = i + 1){
            if(mass[i] % 2 == 0){
                mass2.push_back(mass[i]);
            }
        }
    }
}
