class calculator:
    """
    This is a class that make to be  able to do calculations ,dot product, addition and  subtraction
    between two vectors
    """
    def __init__(self, v1, v2)->None:
        """
         This is a constructor of a class had two args .
        """
        self.v1 = v1
        self.v2 = v2
    @staticmethod    
    def dotproduct(V1: list[float], V2: list[float]) -> None:
        """
        The role of this method is to calculate the product scalar between two vectors and print the result.
        """
        rslt = []
        for x,y in zip(V1,V2):
            rslt.append(x*y)
        print(f"Dot product is: {sum(rslt)}")
    @staticmethod
    def add_vec(V1: list[float], V2: list[float]) -> None:
        """
        The role of this method is to calculate the sum of the element between two vectors and print the result.
        """
        rslt = []
        for x,y in zip(V1,V2):
            rslt.append(float(x+y))
        print(f"Add Vector is : {rslt}")
    @staticmethod
    def sous_vec(V1: list[float], V2: list[float]) -> None:
        """
         The role of this method is to calculate the substraction of the element between two vectors and print the result.
        """
        rslt = []
        for x,y in zip(V1,V2):
            rslt.append(float(x-y))
        print(f"Sous Vector is: {rslt}")
                 