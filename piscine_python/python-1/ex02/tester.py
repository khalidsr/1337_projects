from load_image import ft_load
try:
    print(ft_load("landscape.jpeg"))
   
except FileNotFoundError as error:
    print(error)
