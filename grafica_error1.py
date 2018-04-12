import numpy as np
import matplotlib.pyplot as plt

datos = np.loadtxt("datos1.txt")
x = datos[:,0]
y = datos[:,1]
y1 = np.exp(-x)
error = abs(y1-y)/y1

plt.plot(x,error)
plt.xlabel("x")
plt.ylabel("error")
plt.title("Error para primer orden")

plt.savefig("grafica_error1.pdf")
