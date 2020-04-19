import sys
from PIL import Image
import numpy as np

img = Image.open(sys.argv[1])
img = np.asarray(img)

lines = []
for line in img:
	line = map(str, list(line))
	line = ", ".join(line)
	lines.append(f"{{{line}}}")
res = ",\n".join(lines)
res = f"{{{res}}};"
print(res)
