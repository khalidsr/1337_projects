
def give_bmi(height: list[int | float], weight: list[int | float]) -> list[int | float]:
    """
    the role of this function that  take 2 lists of integers or floats in input and returns a list
    of BMI values.
    varibles:_
        bmi (list[int  |  float]) : is list of the result of :  weight / (height ** 2)
    Returns:
        list[int | float]: list that hold the bmi 
    """
    bmi = []
    try:
        if type(height) == list and type(weight) == list and len(height) == len(weight):
            for i ,j in zip(height,weight):
                if isinstance(i,(int,float)) and isinstance(j, (int, float)):
                    if i > 0:
                        bmi.append(j/i**2)
                    else:
                        raise AssertionError("division by zero")
                else:
                    raise AssertionError("element is not  either int or float")
        else:
            raise AssertionError("number of height disproportionate with the weight")
    except AssertionError as error:
        print(AssertionError,error)
    return bmi

def apply_limit(bmi: list[int | float], limit: int) -> list[bool]:
    """
    the role of this function is return a list of booleen if an element in bmi list higher than limit

    Returns:
      hold (list[bool]):is a list of booleen 
    """
    hold = []
    try:
        if type(bmi) == list and type(limit)==int and len(bmi) > 0:
            for i in bmi:
                if isinstance(i,(int, float)):
                    if i > limit:
                        hold.append(True)
                    else:
                        hold.append(False)
                else:
                    raise AssertionError("element is not  either int or float")
        else:
            raise AssertionError("number of height disproportionate with the weight")
    except AssertionError as error:
        print(AssertionError,error)
    return hold