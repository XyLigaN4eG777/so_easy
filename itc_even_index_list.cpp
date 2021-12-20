#include "easy_list.h"

void itc_even_index_list(const vector <int> &mass, vector <int> &mass_2){
    int count = mass.size();
    if(count != 0){
        for(int i = 0; i < count; i = i + 2){
            mass_2.push_back(mass[i]);
        }
    }
}
