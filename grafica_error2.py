import numpy as np
import matplotlib.pyplot as plt

datos = np.loadtxt("datos2.txt")
x = datos[:,0]
y = datos[:,1]
y1 = np.cos(x)
error = abs(y1-y)

plt.plot(x,error)
plt.xlabel("x")
plt.ylabel("error")
plt.title("Error para segundo orden")

plt.savefig("grafica_error2.pdf")
