#ifndef _MYLIST_H
#define _MYLIST_H

int mylist_init();
int mylist_append(int);
int mylist_search(int);
void mylist_print();
void mylist_cleanup();

class Node {
    public: 
    int data;
     Node *pnode;
};

class Mylist{   
    private : 
    Node *proot;    
    Node *make_new_node(int);

    public:
    Mylist();
    ~Mylist();
    int append(int);
    int search(int);
    void print();


};
#endif // _MYLIST_H
