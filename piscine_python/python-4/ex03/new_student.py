import random
import string
from dataclasses import dataclass, field

def generate_id() -> str:
    """
    This is a function that return string generated randomly with 15 character.  
    """
    return "".join(random.choices(string.ascii_lowercase, k = 15))
def generate_login(name,surname):
    """
    This is a function take to strings as argument and return a new string that composed by joned the first character from the first arg with the second arg.
    """
    log = name[0] + surname
    return log

@dataclass
class Student:
    """
    This is a dataclass that takes as arguments name and nickname, active inisialized by default True,
    student login and an id .
    """
    name : str
    surname : str
    active :bool =  field(default=True)
    login : str = field(init=False,default="")
    id : str = field(init=False,default=generate_id())
    def __post_init__(self):
        """
            the purpose of this function is to assign to the object its login by the return of generate_login's function .
        """
        self.login = (generate_login(self.name, self.surname))