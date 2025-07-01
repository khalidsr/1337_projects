from S1E9 import Character

class Baratheon(Character):
    """
    Representing the Baratheon family class.
    """
    def __init__(self, first_name, is_alive=True):
        """
        This is a constructor of a class had two args and inherte from character class and had some attribute like family_name,eyes and hairs that all are string.
        """
        super().__init__(first_name, is_alive)
        self.family_name = "Baratheon"
        self.eyes = "brown"
        self.hairs = "dark"

    def die(self):
        """
        This is a method from the child class (Baratheon) that changes the health state of the character.
        It makes is_alive from True to False
        """
        super().die()

    
class Lannister(Character):
    """
     Representing the Lannister family class.
    """
    def __init__(self, first_name, is_alive=True):
        """
        This is a constructor of a class had two args and inherte from character class and had some attribute like family_name,eyes and hairs that all are string.

        Args:
            first_name (str): the name of this character
            is_alive (bool): describe the health state of this character
        """
        super().__init__(first_name, is_alive)
        self.family_name = "Lannister"
        self.eyes = "blue"
        self.hairs = "light"
    def die(self):
        """
        This is a method from the child class (Baratheon) that changes the health state of the character.
        It makes is_alive from True to False
        """
        super().die()
    @classmethod
    def create_lannister(cls, first_name, is_alive):
        """
        class method return  an instance of this class .
        """
        return cls(first_name, is_alive)