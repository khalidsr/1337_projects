import sys
def isalnumspace(str):
    """
    booleen function return true if was the string had only alphanumeric and space character
    Args:
        str (string): string that will be checked
    """
    for i in str:
        if not i.isalnum() and i != ' ':
            return False
    return True

def main(args):
    """
        This a program that takes a string as an argument and encodes it into a Morse Code.

    varibles:
        dict_maorse (dictionary): dictionary of string the keys is alphanum and space the value its values in morse code
        l (int) : is the lent of the string

    Raises:
        AssertionError: if the number of argument different than 3
    """
    
    dict_morse = { " ": "/ ", "A": ".- ","B":"-...","C":"-.-.","D":"-..",
                  "E":".","F":"..-.","G":"--.","H":"....","I":"..",
                  "J":".---","K":"-.-","L":".-..","M":"--","N":"-.",
                  "O":"---","P":".--.","Q":"--.-","R":".-.",
                  "S":"...","T":"-","U":"..-","V":"...-","W":".--",
                  "X":"-..-","Y":"-.--","Z":"--..","0":"-----",
                  "1":".----","2":"..---","3":"...--","4":"....-",
                  "5":".....","6":"-....","7":"--...","8":"---..","9":"----."
                  }
    try:
        if len(args) == 2 and isalnumspace(args[1]):
            l=0
            for i in args[1]:
                print(dict_morse[i.capitalize()], end=" " if l < len(args[1]) - 1 else "\n")
                l+=1
        else:
            raise AssertionError("the arguments are bad")
    except AssertionError as error:
        print(AssertionError.__name__, error)

if __name__== "__main__":
    main(sys.argv)