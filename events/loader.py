# loader.py: the script loader for the Python scripting environment

from importlib import import_module

modules = {}
module_names = [
    "defaults",
    "message",
]

for mdl in module_names:
    modules[mdl] = import_module(mdl)

events = modules["defaults"].events
