#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Set.h"
#include "List.h"
using namespace std;

int main()
{
    Container* test=new List;
    test->generate(5);
    for(ContainerIterator it = test->begin(),end=test->end();it!=end;++it)
        *it=0;
    test->print();
    return 0;

}
