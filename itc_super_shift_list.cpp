#include "easy_list.h"

void itc_super_shift_list(vector <int> &myvector, int a){
    if (myvector.size() > 0){
    if (a < 0){
        a = - 1 * a;
        for (int i = 0; i < (a % myvector.size()); i = i + 1)
            itc_lshift_list(myvector);
    }
    else{
        for (int i = 0; i < (a % myvector.size()); i = i + 1){
            itc_rshift_list(myvector);
        }
    }
    }
}
