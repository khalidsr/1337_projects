import sys

def main(arg):
    """
    this a program that should output a list of words greater than a number.
    varibles:
        l (int)      : is the 2nd argument as integer
        rslt (list)  : is the list when i store the string greather than l
        s(list)      : list when i store the strings that are splited 
        item (string): the element inside s
    Raises:
        AssertionError: if the number of argument different than 3
    """
    try:
        if len(arg) == 3:
                if arg[2].isdigit():
                    l = int (arg[2])
                else:
                    raise AssertionError("the arguments are bad")
                s = arg[1].split(" ")
                rslt = [item for item in s if  len(item) > l]
                print(rslt)
        else:
            raise AssertionError("the arguments are bad")
        
    except AssertionError as error:
        print(AssertionError.__name__+":",error)
        
        
if __name__ == "__main__":
    main(sys.argv)