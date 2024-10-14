#include <iostream>
#include <list>

#include <stdlib.h>
#include <time.h>

using namespace std;

#include "common.h"
#include "myapp.h"

list<int> ml;

/**
 * 리스트를 초기화하고, 랜도마이즈
 * @param none
 * @returns none
*/
void do_init() {
    srand(time(NULL));
    //pml = new MyList();
}

/**
 * mylist에 append를 수행한다.
 * @param none
 * @returns none
*/
void do_append() {
    int number;

    for(;;) {
        cout << "Input a positive decimal number:";
        cin >> number;

        if (number > 0) {
            ml.push_back(number);
            /*
            if (pml->append(number) == FAIL) {
                printf("Append Fail!!\n");
            }
            */
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
    list<int>::iterator it;

    cout << "Input a number you've wanted:";
    cin >> number;

    count = 0;
    for (it = ml.begin(); it != ml.end(); it++) {
        count++;
        if (*it == number) {
            cout << "The number you've wanted is " << count << "th!!" << endl;
            return;
        }
    }
    /*
    count = pml->search(number);

    if (count > 0) { // meaning the number had been found in mylist
        cout << "The number you've wanted is " << count << "th!!" << endl;
        return;
    }
    */
    cout << "The number you input is not found!!" << endl;
}

/**
 * 프로그램을 종료하기 위해 mylist를 삭제하고 cleanup을 수행
 * @param none
 * @returns none
*/
void do_cleanup() {
    //pml->~MyList();
}


/**
 * mylist를 출력
 * @param none
 * @returns none
*/
void do_print() {
    list<int>::iterator it;
    //pml->print();

    for (it = ml.begin(); it != ml.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}


