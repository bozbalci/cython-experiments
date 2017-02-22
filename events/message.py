# message.py: an example Python script that defines handler
# functions for built-in events

from defaults import events

# Greet the user after the program starts.
def greet(name, **kwargs):
    print(f"Hello, {name}.")
events["on_start"] += greet

# Say goodbye to the user before the program exits.
def goodbye(name, **kwargs):
    print(f"Goodbye, {name}.")
events["on_exit"] += goodbye
