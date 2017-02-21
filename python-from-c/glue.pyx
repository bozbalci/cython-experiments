import counter

cdef public void increment():
    counter.increment()

cdef public int get():
    return counter.get()

cdef public void say(int times):
    counter.say(times)
