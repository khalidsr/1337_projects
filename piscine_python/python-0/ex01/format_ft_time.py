import time
import datetime

t = time.time()
d = datetime.datetime.now()
dd = d.strftime("%b %d %Y")
print("Seconds since January 1, 1970:",str(t), "or","{:e}".format(t),"in scientific notation")
print(dd)