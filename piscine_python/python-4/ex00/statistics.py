

def check_value(list)->bool:
    """
    This is a function that accept a list as argument and retrun a boolen
    """
    for i in list:
        if  not i == "mean" and not i == "median" and not i == "quartile" and not i == "std" and not i == "var":
            return False
    return True  
        

def ft_statistics(*args: any, **kwargs: any) -> None:
    """
    This is a function that take in args a quantity of unknown number and make the Mean, Median,
    Quartile (25% and 75%), Standard Deviation and Variance according to the kwargs values asked.
    varibles:
        n (int) : lenth of args
        sum_args(float): sum of all element in a args
        mean(float): it represent the mean 
        median(float): it represent the median
        min_quart (int): it represent the element exist in 25% in args
        max_quart (int): it represent the element exist in 75% in args
        quartil (list): it hold the min and max quart
        var (float): it represent the Variance.
        std (float) it represtent the Standard Deviation
    """
    if  kwargs and check_value(kwargs.values()):
        
        n = len(args)
        if n == 0:
            for value in kwargs.items():
                print("ERROR")
            return 
        sum_args = sum(args)
        mean = sum_args/n
        
        sorted_args = sorted(args)
        if n % 2 == 1:
            k = int ((n-1)/2)
            median = sorted_args[k]
        else:
            middle1 = sorted_args[(n / 2) - 1]
            middle2 = sorted_args[n / 2]
            median = (middle1 + middle2) / 2

        min_quart = int(1/4 * (n-1))
        max_quart = int(3/4 *(n-1))
        quartil = [float(sorted_args[min_quart]),float(sorted_args[max_quart])]
        deviation = [(x-mean)**2 for x in sorted_args] 
        var = sum(deviation)/n 
        std = var**0.5
        
        for i in kwargs.values():
            if i == "mean":
                print("mean :",mean)
            if i == "median":
                print("median :",median)
            if i == "quartile":
                print("quartile :", quartil)
            if i == "var":
                print("var :",var)
            if i == "std":
                print("std :",std)
    
    
    