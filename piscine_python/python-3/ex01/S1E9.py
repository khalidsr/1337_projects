from abc import ABC, abstractmethod


class Character(ABC):
    """
    This is an abstract class 
    """
    @abstractmethod
    def __init__(self, first_name, is_alive=True) -> None:
        """
        This is a constructor of this abstract class had two args

        Args:
            first_name (str): the name of this character
            is_alive (bool): describe the health state of this character
        """
        self.first_name = first_name
        self.is_alive = is_alive
    def __str__(self):
        """
        this is a method that retrun a string.
        """
        return f"Vector: ({self.family_name}, {self.eyes}, {self.hairs})"

    def __repr__(self):
        """
        this is a method that retrun a string.
        """
        return self.__str__()

    def die(self):
        """
        This is a method of the base class that changes the health state of the character.
        It makes is_alive from True to False
        """
        self.is_alive = False
    
class Stark(Character):
    """
    this is a child class that inhrete from an abstract class
    """
    def __init__(self,first_name,is_alive=True):
        """  This is a constructor of this child class (Stark)that inherete from an abstruct class and had  two args

        Args:
            first_name (str): the name of this charcter
            is_alive (bool): discribe the health state of this character
        """
        self.first_name = first_name
        self.is_alive = is_alive
        
    def die(self):
        """
         This is a method from child class(Stark) thatchange the  health state of the character it make  is_alive from True to False
        """
        self.is_alive = False