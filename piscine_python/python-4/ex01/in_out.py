def square(x: int | float) -> int | float:
    """
    This is a function that accept an int or a float as argument and return the square of this number.
    """
    sq = x**2
    return sq
def pow(x: int | float) -> int | float:
    """
    This is a function that accept an int or a float as argument and return the power of this number.
    """
    p = x**x
    return p
def outer(x: int | float, function) -> object:
    """
      This is a function that accept an int or a float and a function  as arguments and return an object represent the return of a nested function.
    """
    count = 0
    
    def inner() -> float:
        """
        This is a nested function that hold the nonlocal varible of the outer function .
        Returns: the return is an float or int
        """
        nonlocal x
        rslt = function(x)
        x = rslt
        return rslt 
    return inner