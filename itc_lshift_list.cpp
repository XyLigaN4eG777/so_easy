#include "easy_list.h"

void itc_lshift_list(vector <int> &myvector){
    int a;
    a = myvector[0];
    for (int i = 1; i < myvector.size(); i = i + 1){
        myvector[i - 1] = myvector[i];
    }
    myvector[myvector.size() - 1] = a;
}
