#include "easy_list.h"

void itc_rev_par_list(vector <int> &myvector){
    int a;
    a = 0;
    for (int i = 1; i < myvector.size(); i = i + 2){
        a = myvector[i];
        myvector[i] = myvector[i - 1];
        myvector[i - 1] = a;
    }
}
