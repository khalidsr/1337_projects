import numpy as np
from PIL import Image
import matplotlib.pyplot as plt
import matplotlib.image as mpimg


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
        else:
            raise AssertionError("file not jpg or jpeg format")
    except FileNotFoundError:
        raise FileNotFoundError(f"File not found: {path}")
    except AssertionError as error:
        print(AssertionError.__name__,error)

    return np.array(img)


def add_third_axe(arr):
    """
    this is a function that had as arg a Pil image, it converting a grayscale image to an RGB-like format,
    this is used to transform a 2D array into a 3D array with a single channel and retrun an np array .
  
    """
    arr = np.array(arr)

    rgb_arr = arr[:, :, np.newaxis]

    return rgb_arr


def zoom(path:str):
    """
    this a program that had a path of img as arg,the role of this program is call the ft_load function ,
    modify the image such as grayscale and make a zoom to this image.
    
    varibles:
        img : is a mpimg
        img_obj : a pil image 
        width (int): width of pil image
        height (int): height of pil image
        zoomed_img : is a new image after croped and affect a resize it became zoomed image 
        img_size : is the shape of the zoomed image (grayscale) that had channel 1
    """
    try:
        if type(path) is str:
            ft_load(path)
            img_obj = Image.open(path)
            width, height = img_obj.size
            zoomed_img = img_obj.convert('L')
            width, height = zoomed_img.size
            
            size = int ((width+height)/6)
            left = int ((width - size) / 2)
            top = int((height - size) / 2)
            right = left + size
            bottom = top + size
            zoomed_img = zoomed_img.crop((left, top, right, bottom))
            
            img_size = np.array(zoomed_img).shape  
            print("The shape of image is :", img_size)
            print(add_third_axe(zoomed_img))
        else : 
            raise AssertionError("Arg should be string")
    except AssertionError as error:
        print(AssertionError.__name__, error)
    return zoomed_img

