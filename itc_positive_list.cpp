#include "easy_list.h"

int itc_positive_list(const vector <int> &myvector){
    int a;
    a = 0;
    for (int i = 0; i < myvector.size(); i = i + 1){
        if (myvector[i] > 0)
             a = a + 1;
    }
    return a;
}
