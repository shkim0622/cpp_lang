#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
using namespace std;
#include "common.h"
#include "myapp.h"
#include "mylist.h"

Mylist *ll;
/**
 * 리스트를 초기화하고, 랜도마이즈
 * @param none
 * @returns none
*/
void do_init() {
    srand(time(NULL));
    Mylist *ll = new Mylist();
}

/**
 * mylist에 append를 수행한다.
 * @param none
 * @returns none
*/
void do_append() {
    int number;

    for(;;) {
        cout << "Input a positive decimal number:"<< endl;
        cin >> number;

        if (number > 0) {
            if (ll->append(number) == FAIL) {
                cout << "Append Fail!!" <<endl;
            }
            break;
        }
        cout << "The number you input is not valid. Try again!!" << endl;
    }
    
}

/**
 * mylist 내에서 search를 수행한다.
 * 아이템을 찾으면 몇번째 아이템인지 표시
 * 그렇지 않으면 "Not found" 표시
 * @param none
 * @returns none
*/
void do_search() {
    int number, count;

    cout << "Input a number you've wanted:"<< endl;
    cin >> number;

    count = ll->search(number);

    if (count > 0) { // meaning the number had been found in mylist
        cout << "The number you've wanted is %dth!!" << endl;
        return;
    }

    cout << "The number you input is not found!!" << endl;
}

/**
 * 프로그램을 종료하기 위해 mylist를 삭제하고 cleanup을 수행
 * @param none
 * @returns none
*/
void do_cleanup() {
    ll->~Mylist();
}

void do_print(){
    ll->print();
}