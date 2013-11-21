#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
class List:public Container
{
private:
    /////////////Iterator/////////////////
    int& asteriscImpl(void *pointer) ;
    void nextImpl(void *&pointer) ;
    void previousImpl(void *&pointer) ;
    ////////////////////////////////////////
    Node* Head;
    Node* Tail;
    void addImpl(int);//+
    void delImpl(Node*);//+
    void generateImpl(int);//+
    int countImpl();//+
    void findImpl(int &value, void *&pointer)
    void clearImpl();//
    void printImpl();//+
    void *beginImpl();

public:
    List():Head(0),Tail(0) {}
    ~List();
};


#endif // LIST_H_INCLUDED
