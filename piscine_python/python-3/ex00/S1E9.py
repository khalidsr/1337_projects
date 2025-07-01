from abc import ABC,abstractclassmethod

class Character(ABC):
    """
    This is an abstract class 
    """
    @abstractclassmethod
    def __init__(self, first_name, is_alive=True) -> None:
        """
        This is a constructor of this abstractclass had two args

        Args:
            first_name (str): the name of this charcter
            is_alive (bool): discribe the health state of this character
        """
        self.first_name = first_name
        self.is_alive = is_alive
    def die(self):
        """
        This is a methode of base class that change the  health state of the character it make  is_alive from True to False
        """
        pass
        
    
class Stark(Character):
    """
    this is a child class that inhrete from an abstract class
    """
    def __init__(self,first_name,is_alive=True):
        """  This is a constructor of this child class that inherete from an abstruct class and had  two args

        Args:
            first_name (str): the name of this charcter
            is_alive (bool): discribe the health state of this character
        """
        self.first_name = first_name
        self.is_alive = is_alive
        
    def die(self):
        """
         This is a method from child class thatchange the  health state of the character it make  is_alive from True to False
        """
        self.is_alive = False