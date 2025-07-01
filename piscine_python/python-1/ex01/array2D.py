import numpy as np

def slice_me(family: list, start: int, end: int) -> list:
    """
    this is  a function that takes as parameters a 2D arrayand  prints its shape and returns a
    truncated version of the array based on the provided start and end arguments

    varible:
    arr (numpy.ndarray) : array that transform list to an 2array
    Returns:
        hold (list):truncated version of the array based on the provided start and end arguments
    """
    arr = np.array(family)

    try:
        if type(family) == list and type(start) == int and type(end) == int:
            print(f"My shape is : ({len(arr)}, {arr.ndim})")
            hold = arr[start:end]
            print(f"My new shape is : ({len(hold)}, {hold.ndim})")
            
        else:
            raise AssertionError("number of height disproportionate with the weight")
    except AssertionError as error:
        print(AssertionError.__name__,error)
    return hold.tolist()