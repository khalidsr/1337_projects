#!/usr/bin/env python3
import sys

hold = []
for arg in sys.argv:
    hold.append(arg)
if len(hold) == 2:
    try:
       value  = int (hold[1])
       if value %2 == 0:
           print("I'm Even.")
       else:
           print("I'm Odd.")
    except:
        print("AssertionError: argument is not an integer")
elif len(hold) > 2:
    print("AssertionError: more than one argument is provided")        