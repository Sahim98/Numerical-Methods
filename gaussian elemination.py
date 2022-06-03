import numpy as np
from scipy.linalg import lu
from  numpy import zeros

def elemenation(A,b,n):
    for k in range(n-1):
        for i in range(k+1,n):
            if A[i,k] == 0 :
                continue
            f = A[k,k] / A[i,k]
            for j in range(k,n):
                A[i,j] = A[k,j] - A[i,j]*f

            b[i] = b[k] - b[i]*f

    return A





A = np.array([[-3,-2,5,0],
              [4,5,8,1],
              [1,1,2,1],
              [2,7,6,5]],float)

b = np.array([2,4,5,7],float)
n = len(b)
x = zeros(n,float)
elemenation(A,b,n)
print(A)



#Back substitution

x[n-1] = b[n-1] / A[n-1,n-1]
for i in range(n-2,-1,-1):
    sx = 0
    for j in range(i+1,n):
        sx += x[j]*A[i,j]
    x[i] = (b[i] - sx)/A[i,i]


print(x)



