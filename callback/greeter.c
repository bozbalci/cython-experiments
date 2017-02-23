#include "greeter.h"

static char *people[] = {
    "Maureen",
    "Bubba",
    "Teddy",
    "Michael",
    "Bill",
    0
};

void greet_people(greetfunc func, void *data)
{
    char **p = people;
    
    while (*p)
    {
        func(*p, data);
        ++p;
    }
}
