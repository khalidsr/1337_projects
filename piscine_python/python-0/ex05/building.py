import sys

def isponctuation(c):
    '''
    check if there is a ponctuation character and retrun a booleen
    
    c : arg
    str : string hold all ponctuation character
    '''
    str = "!\"#$%&'()*+,-./:;<=>?@[\]^_`{|}~"
    for i in str:
        if c == i:
            return True
    return False
def check_text(str):
    
    '''
    check the existance of the character
    and print the details:
    str : arg 
    A : sum of uppercase letter 
    B : sum of lowercase letter  
    C : sum of digit character  
    D : sum of whitespace character  
    E : sum of ponctuation character  
    '''
    
    A=0
    B=0
    C=0
    D=0
    E =0
    for i in str:
        if i.isupper():
            A+=1
        if i.islower():
            B+=1
        if i.isdigit():
            C+=1
        if i.isspace():
            D+=1
        if isponctuation(i):
            E+=1
    l=A+B+C+D+E
    print("The text contains ",l," characters:")
    print(A,"upper letters")
    print(B,"lower letters")
    print(E,"punctuation marks")
    print(D,"spaces")
    print(C,"digits")
    

def main(arg):
    '''
    main function checks the argument len if valid it calls check other function
    and throw exception if found it 
    '''
    try:
        if len (arg) < 2:
            try:
                s = input("What is the text to count?\n")
                s+='\n'
            except EOFError:
                print(EOFError.__name__)
            check_text(s)
        if len(arg) == 2:
            check_text(arg[1])
        elif len(arg)>2:
            raise AssertionError(": more than one argument is provided")        
    except AssertionError as error:
        print(AssertionError.__name__, error)

if __name__ == "__main__":
    main(sys.argv)
