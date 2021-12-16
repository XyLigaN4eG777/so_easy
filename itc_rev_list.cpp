#include "easy_list.h"

void itc_rev_list(vector <int> &myvector){
    int a;
    a = 0;
    for (int i = 0 ; i <= (myvector.size() / 2); i = i + 1){
        a = myvector[i];
        myvector[i] = myvector[(myvector.size() - 1) - i];
        myvector[(myvector.size() - 1) - i] = a;
    }
}
