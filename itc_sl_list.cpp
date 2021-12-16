#include "easy_list.h"

int itc_sl_list(const vector <int> &myvector){
    int a = 0;
    for (int i = 1; i < myvector.size(); i = i + 1){
        if (myvector[i] > myvector[i - 1])
             a ++;
    }
    return a;
}

