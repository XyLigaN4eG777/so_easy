#include "easy_list.h"

void itc_super_shift_list(vector <int> &mass, int a){
    int c = mass.size();
    if(c != 0){
        if(a >= 0){
            a = (a + c) % c;
            for(int i = 0; i< a; i = i + 1){
                itc_rshift_list(mass);
            }
        }
        else{
            a = a * -1;
            a = (a + c) % c;
            for(int i = 0; i < a; i = i + 1){
                itc_lshift(mass);
            }
        }
    }
}
