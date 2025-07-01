from S1E7 import Baratheon, Lannister

class King(Baratheon, Lannister):
    """
     Representing the king class.
    """
    def __init__(self, first_name, is_alive=True):
        """
         This is a constructor of a class had two args and inherte from two classes Baratheon and Lannister.
        """
        super().__init__(first_name, is_alive)
    def set_eyes(self,color):
        """
        this method is a setter that accept args to modify the eyes attribute.
        """
        self.eyes = color
    def get_eyes(self):
        """
        this method is a getter that return  the eyes attribute
        """
        return self.eyes
    def set_hairs(self,color):
        """
        this method is a setter that accept args to modify the hairs attribute.
        """
        self.hairs = color
    def get_hairs(self):
        """
        this method is a getter that return  the hairs attribute .
        """
        return self.hairs