from load_image import ft_load
from load_image import zoom
import numpy as np
from PIL import Image

def rotate(image):
    """
    the role of this funcion is to transform a an array of pixel to a 2d list
    """
    rows, cols = len(image), len(image[0])
    rot_image = [[0 for i in range(cols)] for j in range(rows)]
    for i in range(rows):
        for j in range(cols):
            rot_image[j][rows - i - 1] = image[i][j]
    return rot_image

def main(path):
    """
    The role of this programe is rotate an image 
    variables:
        img (pil image): is a grayscale image
        rot_image (2dlist): is a 2d list that hold the pixel of the img
        rot_image_flat (1d list): is a 1d list used to use for the creation a new image using putdata
    """
    img = zoom(path)
    width, height = img.size
    img.show()
    
    rot_image = rotate(np.array(img))
    rot_image_flat = [pixel for row in rot_image for pixel in row]

    rot_img = Image.new("L", (height, width), 0)
    rot_img.putdata(rot_image_flat)
    rot_img.show()
    
    print("New shape after Transpose: ",np.array(rot_img).shape)
    print(np.array(rot_img))

if __name__ == "__main__":
    try:
        main("animale.jpeg")
    except FileNotFoundError as error:
        print(error)


