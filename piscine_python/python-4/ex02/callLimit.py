
def callLimit(limit: int):
    """
    This is a decorator function, which takes an integer limit as an argument  .
    The decorator is intended to limit the number of times a decorated function can be called.
    """
    count = 0
    def callLimiter(function):
        """
        This function takes a function as an argument. and return an inner function.
        """
        def limit_function(*args: any, **kwds: any):
            """This is a function that takes *args and **kwds. uses the nonlocal keyword to access and modify the count variable from the outer function.
                it Checks if the count is less than or equal to the specified limit. if the count is less than the limit, it return function (function).
                else it throw an error.
            """
            nonlocal count
            try:
                count+=1
                if count <= limit:
                    return function(*args,**kwds)       
                else:
                    raise AssertionError("call too many times")         
            except AssertionError as error:
                print(f"Error: {function}",error)
        return limit_function
    return callLimiter