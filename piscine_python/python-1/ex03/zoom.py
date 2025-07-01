
import numpy as np
from load_image import ft_load
from PIL import Image
import matplotlib.pyplot as plt
import matplotlib.image as mpimg


def add_third_axe(arr):
    """
    this is a function that had as arg a Pil image, it converting a grayscale image to an RGB-like format,
    this is used to transform a 2D array into a 3D array with a single channel and retrun an np array .
  
    """
    arr = np.array(arr)

    rgb_arr = arr[:, :, np.newaxis]

    return rgb_arr


def main(path:str):
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
            print(ft_load(path))
            
            img = mpimg.imread(path)
            plt.imshow(img)
            plt.show()
            
            img_obj = Image.open(path)
            width, height = img_obj.size
            img_obj = img_obj.crop((width/100, height/4 , width/2, 3*height/4))
            
            width, height = img_obj.size
            new_width = int(width * 2)
            new_height = int(height * 2)
            img_obj = img_obj.convert('L')
            zoomed_img = img_obj.resize((new_width, new_height))
            img_size = np.array(zoomed_img).shape  
            print("New shape after slicing :", img_size)
            print(add_third_axe(zoomed_img))
            zoomed_img.show()
        else : 
            raise AssertionError("Arg should be string")
    except AssertionError as error:
        print(AssertionError.__name__, error)



if __name__ == "__main__":
  from load_image import ft_load
try:
    main("animale.jpeg")
   
except FileNotFoundError as error:
    print(error)



