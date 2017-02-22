count = 0

def increment():
    global count

    count += 1

def get():
    global count

    return count

def say(times):
    global count

    return str(count) * times
