class calculator:
    """
    This is a class that make to be  able to do calculations , addition, multiplication, subtraction and division
    between vector and scalar
    """
    def __init__(self,vec) -> None:
        """
         This is a constructor of a class had one args .
        """
        self.vec = vec
    def __add__(self, object):
        """
        The role of this method is to overload the functionality of operator '+' between an object and a scalar.
        it print the object after the operation.
        """
        self.vec = [x + object for x in self.vec]
        print(self.vec)
        
    def __mul__(self, object) -> None:
        """
         The role of this method is to overload the functionality of operator '*' between an object and a scalar.
         it print the object after the operation.
        """
        self.vec = [x * object for x in self.vec]
        print(self.vec)
    def __sub__(self, object) -> None:
        """ The role of this method is to overload the functionality of operator '-' between an object and a scalar.
        it print the object after the operation.
        """
        self.vec = [x - object for x in self.vec]
        print(self.vec)
    def __truediv__(self, object) -> None:
        """
         The role of this method is to overload the functionality of operator '+' between an object and a scalar.
         it print the object after the operation if the sacalar is not a 0 else it trow an exeption.
        """
        try:
            if object != 0:
                self.vec = [x / object for x in self.vec]
                print(self.vec)
            else:
                raise ZeroDivisionError("You cannot divide by 0")
        except ZeroDivisionError as error:
            print(ZeroDivisionError.__name__, error)
 