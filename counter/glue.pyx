import counter

cdef public void increment():
    counter.increment()

cdef public int get():
    return counter.get()

cdef public char* say(int times):
    return bytes(counter.say(times), "utf-8")
