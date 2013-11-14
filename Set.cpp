#include "Set.h"

void Container::add(int d)
{
    addImpl(d);
}
void Container::del(Node *node)
{
    delImpl(node);
}
void Container::generate(int n)
{
    generateImpl(n);
}

int Container::count()
{
    return countImpl();
}
Node* Container::find(int d)
{
    return findImpl(d);
}
void Container::clear()
{
    clearImpl();
}
//////////////Iterator/////////////
//------- TreeIterator -------//

ContainerIterator::ContainerIterator():
    owner(0),
    current(0)
{}

ContainerIterator::~ContainerIterator()
{
    owner = 0;
    current = 0;
}

int &ContainerIterator::operator*() const
{
    if(owner)
        return owner->asterisc(current);
}

ContainerIterator ContainerIterator::operator++()
{
    if(owner)
        owner->next(current);

    return *this;
}

ContainerIterator ContainerIterator::operator++(int)
{
    ContainerIterator result(*this);
    ++(*this);
    return result;
}

ContainerIterator ContainerIterator::operator--()
{
    if(owner)
        owner->previous(current);

    return *this;
}

ContainerIterator ContainerIterator::operator--(int)
{
    ContainerIterator result(*this);
    --(*this);
    return result;
}

bool ContainerIterator::operator==(const ContainerIterator &other) const
{
    return owner == other.owner && current == other.current;
}

ContainerIterator::ContainerIterator(const Container *owner, void *current):
    owner(owner),
    current(current)
{}
int &Container::asterisc(void *pointer) const
{
    return asteriscImpl(pointer);
}

void Container::next(void *&pointer) const
{
    nextImpl(pointer);
}

void Container::previous(void *&pointer) const
{
    previousImpl(pointer);
}



