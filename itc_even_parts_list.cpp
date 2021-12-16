#include "easy_list.h"

void itc_even_parts_list(const vector <int> &myvector, vector <int> &myvector2){
    for (int i = 0; i < myvector.size(); i = i + 1){
        if (myvector[i] % 2 == 0)
             myvector2.push_back(myvector[i]);
    }
}
