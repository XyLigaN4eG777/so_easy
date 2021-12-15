#include "easy_list.h"


void itc_rshift_list(vector <int> &myvector){
    int g = myvector.size() - 1;
    int a = myvector[g];
    for (int i = myvector.size() - 2; i >= 0; i--){
        myvector[i + 1] = myvector[i];
    }
    myvector[0] = a;
}
