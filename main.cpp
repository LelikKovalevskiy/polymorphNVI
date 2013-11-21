#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Set.h"
#include "List.h"
using namespace std;

int main()
{
    Container* test=new List;
    test->generate(2);
    test->add(10);
    ContainerIterator it=test->find(10);
    cout<<*it;
    return 0;

}
