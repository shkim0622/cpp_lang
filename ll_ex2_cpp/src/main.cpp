#include <iostream>
using namespace std;

#include "common.h"
#include "myapp.h"
#include "mylist.h"


int main() {

    int param;

    // 1. Initialize mylist, randomization
    do_init();

    // 2. The loop
    for (;;) {
        fflush(NULL);
        cout << "Append[1] or Search[2]? :"<<endl;
        cin >> param;
        

        switch(param) {
            //case APPEND_L:
            case APPEND:
                do_append();
                break;
            //case SEARCH_L:
            case SEARCH:
                do_search();
                break;
            default:
                break;
        }  // end switch

        do_print();
    } // end for

    do_cleanup();

    return 0;

} // end func
