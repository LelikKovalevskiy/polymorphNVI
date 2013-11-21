#include "Set.h"
#include "list.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
void List::addImpl(int d)
{

    Node *temp=new Node;
    temp->data=d;
    if(Head!=0)
    {
        temp->Next=Head;
        Head->Previous=temp;
        Head=temp;
    }
    else
    {
        Head=Tail=temp;
    }
}
void List::delImpl(Node* deleted)
{
    if(deleted==Head&&deleted==Tail)
    {
        delete deleted;
        Head=Tail=0;
    }
    else if(deleted==Head)
    {
        Head->Next->Previous=0;
        Head=Head->Next;
        delete deleted;
    }
    else if(deleted==Tail)
    {
        Tail->Previous->Next=0;
        Tail=Tail->Previous;
        delete deleted;
    }
    else
    {
        deleted->Next->Previous=deleted->Previous;
        deleted->Previous->Next=deleted->Next;
        deleted=0;
        delete deleted;
    }
}
void List::generateImpl(int power)
{
    srand(time(NULL));
    for(int i=0; i<power; ++i)
    {
        add(rand()%100);
    }
}
int List::countImpl()
{
    int counter=0;
    Node* tmp=Head;
    while(tmp!=0)
    {
        ++counter;
        tmp=tmp->Next;
    }
    return counter;
}
Node* List::findImpl(int data)
{
    Node*temp=Head;
    while(temp)
    {
        if (temp->data=data)
            return temp;
    }
    return 0;
}
void List:: clearImpl()
{
    ;
}
void List::printImpl()
{
    Node* tmp=Head;
    while(tmp)
    {
        cout<<tmp->data <<' ';
        tmp=tmp->Next;
    }
}
int &List:: asteriscImpl(void *pointer)
{
    if(pointer)
        return ((Node *)pointer)->data;
}
void List:: nextImpl(void *&pointer)
{
    Node *current = (Node *)pointer;
    if(current)
        current=current->Next;
    pointer=current;
}
void List:: previousImpl(void *&pointer)
{
    Node *current = (Node *)pointer;
    if(current)
        current=current->Previous;
        pointer=current;
}
void* List::beginImpl()
{
    Node *current=Head;
    return current;
}
