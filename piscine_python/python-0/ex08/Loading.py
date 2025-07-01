
def ft_tqdm(lst: range) -> None:
    """
    This is a function behave like tqdm with the yield operator
    varibles:
        total (int): is the stop from range 
        width (int): the width where the function will print
        step (int) : is the step for printing
        percentage (int): is the percentage of progress compared to the width
        bar (string): is the string that will be print the format
        
    Raises:
        AssertionError: if the argument is not a range
    Yields (generator): generator objects where i store the value betwen the start and the stop from range
    """
    try:
        if type(lst) == range:
            total = len(lst)
            width = 70
            if width > total:
                width  = total
            step = int (total / width) 
            progress = 1

            for j, i in enumerate(lst, start=1):

                if j % step == 0 or j == total:
                    percentage = int(progress *100/ width)
                    if width - progress >= 0:
                        bar = "=" * progress + ">" + "." * (width - progress)
                        if width - progress > 0:
                            progress += 1
                    print(f"\r{percentage}%| [{bar}] |{j}/{total}", end="")
                yield i
                print()
        else:
            raise AssertionError("the argument is not a range")
    except AssertionError as error:
        print(AssertionError, error)
