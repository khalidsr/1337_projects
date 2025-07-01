
def ft_filter(func,sequence):
    """
    filter(function or None, iterable) --> filter object

    Return an iterator yielding those items of iterable for which function(item)
    is true. If function is None, return the items that are true.
    """
    if func:
        return (hold for hold in sequence if func(hold))
def is_even(num):
    return num % 2 == 0
def fun(variable):
    letters = ['a', 'e', 'i', 'o', 'u']
    if (variable in letters):
        return True
    else:
        return False

# def main():
#     numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
#     sequence = ['g', 'e', 'e', 'j', 'k', 's', 'p', 'r']

#     str = filter(is_even, numbers)
#     ft_str = ft_filter(is_even,numbers)
#     strr = filter(fun, sequence)
#     ft_strr = ft_filter(fun,sequence)
#     for i in ft_str:
#         print(i)

# if __name__ == "__main__":
#     main()