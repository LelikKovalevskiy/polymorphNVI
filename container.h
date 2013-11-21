#ifndef SET_H_INCLUDED
#define SET_H_INCLUDED
struct Node
{
    Node* Next;
    Node* Previous;
    int data;
    Node():Next(0),Previous(0) {}
};
class ContainerIterator;
class Container
{
public:
    Container() {}
    ~Container();
    friend ContainerIterator;
    void add(int);
    void del(Node*);
    void generate(int);
    int count();
    ContainerIterator find(int value);
    void clear();
    void print();
    ContainerIterator begin();
    ContainerIterator end();
private:
    //Interface for Iterator
    int &asterisc(void *pointer);
    void next(void *&pointer);
    void previous(void *&pointer);
    //Implementation
    virtual int &asteriscImpl(void *pointer) = 0;
    virtual void nextImpl(void *&pointer)  = 0;
    virtual void previousImpl(void *&pointer) = 0;
    //////////////////////////////////////////
    virtual void addImpl(int)=0 ;
    virtual void delImpl(Node*)=0;
    virtual void generateImpl(int)=0;
    virtual int countImpl()=0;
    virtual void findImpl(int value, void *&pointer) = 0;
    virtual void clearImpl()=0;
    virtual void printImpl()=0;
    ///////////////////////////////////////////
    virtual void *beginImpl()= 0;

};
class ContainerIterator
{
public:
    friend Container;
    ContainerIterator();
    ~ContainerIterator();

    int &operator*() const;
    ContainerIterator operator++();
    ContainerIterator operator++(int);
    ContainerIterator operator--();
    ContainerIterator operator--(int);
    bool operator==(const ContainerIterator &other) const;
    bool operator!=(const ContainerIterator &other) const
    {
        return !(*this == other);
    }
private:
    Container *owner;
    void *current;
    ContainerIterator( Container *owner, void *current);
};

#endif // SET_H_INCLUDED
