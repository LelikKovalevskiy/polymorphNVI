#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
class List:public Container
{
private:
    int &asteriscImpl(void *pointer) ;
    void nextImpl(void *&pointer) ;
    void previousImpl(void *&pointer) ;

    Node* Head;
    Node* Tail;
    void addImpl(int);//+
    void delImpl(Node*);//+
    void generateImpl(int);//+
    int countImpl();//+
    Node* findImpl(int);//+
    void clearImpl();//
public:
    List():Head(0),Tail(0) {}
    ~List();
};


#endif // LIST_H_INCLUDED
