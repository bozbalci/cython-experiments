import loader

cdef public void trigger(char *evt, char *name):
    loader.events[evt.decode("UTF-8")].fire(name.decode("UTF-8"))
