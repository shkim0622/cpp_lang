#include <iostream>

using namespace std;


#include "common.h"
#include "myapp.h"



int main() {

    int param;

    // 1. Initialize mylist, randomization
    do_init();

    // 2. The loop
    for (;;) {

        //printf("Append[1] or Search[2]? :");
        cout << "Append[1] or Search[2]? :";
        
        //scanf("%d", &param);
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
