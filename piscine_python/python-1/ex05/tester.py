from load_image import ft_load
from pimp_image import ft_invert
from pimp_image import ft_blue
from pimp_image import ft_green
from pimp_image import ft_grey
from pimp_image import ft_red


array = ft_load("landscape.jpeg")
print(array)
ft_invert(array)
ft_red(array)
ft_green(array)
ft_blue(array)
ft_grey(array)
print(ft_invert.__doc__)