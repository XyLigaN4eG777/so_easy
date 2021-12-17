#ifndef EASY_LIST_H_INCLUDED
#define EASY_LIST_H_INCLUDED
#include <iostream>
#include <vector>

using namespace std;
void itc_even_index_list (const vector <int> &myvector, vector <int> &myvector2);
void itc_even_parts_list(const vector <int> &myvector, vector <int> &myvector2);
int itc_positive_list(const vector <int> &myvector);
int itc_sl_list(const vector <int> &myvector);
bool itc_same_parts_list(const vector <int> &myvector);
void itc_rev_list(vector <int> &myvector);
void itc_rev_par_list(vector <int> &myvector);
void itc_rshift_list(vector <int> &myvector);
void itc_lshift_list(vector <int> &myvector);
void itc_super_shift_list(vector <int> &myvector, int a);

#endif
