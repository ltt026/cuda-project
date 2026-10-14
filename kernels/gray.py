import numpy as np
img == (np.arange(4*3*3)*7).astype(np.uint8).reshape(3,4,3)
flat = image.rave()
y,x,c = 2,1,0
print(img[y,x,c], flat[(y*4 + x) * 3 + c])
print(np.uint8(200) + np.uint8(100))


