typedef void (*greetfunc)(char *name, void *data);
void greet_people(greetfunc func, void *data);
