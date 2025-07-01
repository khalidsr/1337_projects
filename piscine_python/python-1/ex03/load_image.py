from PIL import Image
import numpy as np
def ft_load(path: str) -> np.array:
    """
    This is a function that loads an image , prints its shape  and its pixels
    content in RGB format

    Returns:
        np.array:array that content the RGB of the image
    """
    try:
        if path.lower().endswith('.jpg') or path.lower().endswith('.jpeg'):
            img = Image.open(path)
            print(f"The shape of image is: {np.array(img).shape}")
        else:
            raise AssertionError("file not jpg or jpeg format")
    except FileNotFoundError:
        raise FileNotFoundError(f"File not found: {path}")
    except AssertionError as error:
        print(AssertionError.__name__,error)

    return np.array(img)
