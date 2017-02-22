# defaults.py: contains the built-in variables, events and methods
# used for scripting the C program

import event

events = {}
_event_names = ["on_start", "on_exit"]
for evt in _event_names:
    events[evt] = event.Event()
