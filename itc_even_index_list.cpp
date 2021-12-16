#include "easy_list.h"

void itc_even_index_list(const vector <int> &myvector, vector <int> &myvector2){
    for (int i = 0; i < myvector.size(); i = i + 2){
        myvector2.push_back(myvector[i]);
    }
}
