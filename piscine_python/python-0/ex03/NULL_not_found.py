def NULL_not_found(object: any) -> int:
    if object is None:
        print("Nothing: ",object,type(object))
    elif object != object:
        print("Cheese:", object, type(object))
    elif object == 0 and type(object) is int :
        print("Zero:", object, type(object))
    elif object == "":
        print("Empty:", object, type(object))
    elif object is False:
        print("Fake:", object, type(object))
    else:
        print("Type not Found")
        return 1
    return 0

Nothing = None
Garlic = float("NaN")
Zero = 0
Empty = ''
Fake = False
NULL_not_found(Nothing)
NULL_not_found(Garlic)
NULL_not_found(Zero)
NULL_not_found(Empty)
NULL_not_found(Fake)
print(NULL_not_found("Brian"))