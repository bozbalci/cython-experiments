# event.py: contains an Event class that allows the addition,
# removal and execution of event handlers that are bound to
# the event.

class Event(object):
    def __init__(self):
        self.handlers = []

    def add(self, handler):
        self.handlers.append(handler)

        return self

    def remove(self, handler):
        self.handlers.remove(handler)
        
        return self

    def fire(self, source, **kwargs):
        for handler in self.handlers:
            handler(source, **kwargs)

    __iadd__ = add
    __isub__ = remove
    __call__ = fire
