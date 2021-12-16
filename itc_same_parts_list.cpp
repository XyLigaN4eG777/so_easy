#include "easy_list.h"

bool itc_same_parts_list(const vector <int> &myvector){
    for (int i = 1; i < myvector.size(); i = i + 1){
        if (((myvector[i] < 0) && (myvector[i - 1] < 0)) || ((myvector[i] >= 0) && (myvector[i - 1] >= 0)))
             return true;
    }
    return false;
}

