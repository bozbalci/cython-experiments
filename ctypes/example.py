# example.py: example usages of the integrate extension

from integrate import Trapezoid #, Simpson
import math

def identity(x):
    return x

# Using predefined function
print("(Trapezoid) Integral of x from 0 to 2 =",
    Trapezoid(
        identity,
        intervals=100,
        start=0.0,
        end=1.0
    )
)

Using lambda function
print("(Simpson) Integral of x^2 from 0 to 1 =",
    Trapezoid(
        lambda x: x ** 2,
        intervals=100,
        start=0.0,
        end=1.0
    )
)

# Using function from the math module
print("(Simpson) Integral of sin(x) from 0 to pi =",
    Simpson(
        math.sin,
        intervals=100,
        start=0.0,
        end=math.pi
    )
)
