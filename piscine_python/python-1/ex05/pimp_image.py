import numpy as np
from PIL import Image

def ft_invert(array) -> np.array:
   """
      Inverts the color of the image received.
   """
   arr = 255 - np.copy(array)
   img = Image.fromarray(arr)
   img.show()
   
def ft_red(array) -> np.array:
   """
     Convert the color of the image to the red.
   """
   arr = np.copy(array)
   arr[:, :, 1] = 0
   arr[:, :, 2] = 0
   img = Image.fromarray(arr)
   img.show()
def ft_green(array) -> np.array:
   """
      Convert the color of the image to the green.
   """
   arr = np.copy(array)
   arr[:, :, 0] = 0
   arr[:, :, 2] = 0
   img = Image.fromarray(arr)
   img.show()
def ft_blue(array) -> np.array:
   """
      Convert the color of the image to the blue.
   """
   arr = np.copy(array)
   arr[:, :, 0] = 0
   arr[:, :, 1] = 0
   img = Image.fromarray(arr)
   img.show()
def ft_grey(array) -> np.array:
   """
      Convert the color of the image to the grey.
   """
   arr = array
   red   = arr[:, :, 0] /3
   green  = arr[:, :, 1] /3
   blue = arr[:, :, 2] /3
   grey =  (red + blue + green)
   grey_array = np.stack([grey] * 3, axis=-1)
   img = Image.fromarray(grey_array.astype(np.uint8))
   img.show()