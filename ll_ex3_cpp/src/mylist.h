#ifndef _MYLIST_H
#define _MYLIST_H

/*
int mylist_init();
int mylist_append(int);
int mylist_search(int);
void mylist_print();
void mylist_cleanup();
*/
class Node {
    public:
    Node(int d) {
        this->data = d;
        this->pnode = NULL;
    }
    ~Node(){

    }
    int data;
    Node *pnode;
};

class MyList {
    public:
    MyList();
    ~MyList();
    int append(int);
    int search(int);
    void print();
    
    private:
    class Node *proot;
    class Node *make_new_node(int);

};

#endif // _MYLIST_H
