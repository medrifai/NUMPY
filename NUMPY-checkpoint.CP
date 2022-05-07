{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": 1,
   "id": "ebe60e5a",
   "metadata": {},
   "outputs": [],
   "source": [
    "import numpy as np\n"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 2,
   "id": "177bb4ef",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[[0 8 7]\n",
      " [6 2 3]\n",
      " [1 7 6]\n",
      " [1 5 0]]\n",
      "[[0, 8, 7], [6, 2, 3], [1, 7, 6], [1, 5, 0]]\n"
     ]
    }
   ],
   "source": [
    "A = np.random.randint(0,9,size = (4,3))\n",
    "print(A)\n",
    "L = A.tolist()\n",
    "print(L)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 3,
   "id": "dca5ec9e",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "8\n"
     ]
    }
   ],
   "source": [
    "s = 0\n",
    "for i in range (min(A.shape)) :\n",
    "    s = s + A[i,i]\n",
    "print(s)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 4,
   "id": "8ffc5e45",
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/plain": [
       "8"
      ]
     },
     "execution_count": 4,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "A.trace()"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 5,
   "id": "2b43f3d9",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "what is the number do you want to compare ? :4\n"
     ]
    },
    {
     "data": {
      "text/plain": [
       "array([8, 7, 6, 7, 6, 5])"
      ]
     },
     "execution_count": 5,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "X = int(input('what is the number do you want to compare ? :'))\n",
    "A [A > X]"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 6,
   "id": "5b101e71",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "A = [[0 8 7]\n",
      " [6 2 3]\n",
      " [1 7 6]\n",
      " [1 5 0]]\n",
      "B = [[2 6 7]\n",
      " [1 1 5]\n",
      " [7 0 7]\n",
      " [3 7 5]]\n",
      "C = [[ 2. 14. 14.]\n",
      " [ 7.  3.  8.]\n",
      " [ 8.  7. 13.]\n",
      " [ 4. 12.  5.]]\n"
     ]
    }
   ],
   "source": [
    "print('A =',A)\n",
    "B = np.random.randint(0,9,size = (4,3))\n",
    "print('B =',B)\n",
    "l , c = A.shape\n",
    "C = np.zeros(A.shape)\n",
    "for i in range (l) :\n",
    "    for j in range (c):\n",
    "        C[i,j] = A[i,j] + B[i,j]\n",
    "print('C =',C)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 7,
   "id": "fd5873e8",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[[0. 3. 1.]\n",
      " [3. 5. 0.]\n",
      " [7. 6. 1.]\n",
      " [8. 5. 3.]\n",
      " [3. 4. 0.]\n",
      " [3. 6. 1.]]\n",
      "[1.33333333 2.66666667 4.66666667 5.33333333 2.33333333 3.33333333]\n"
     ]
    },
    {
     "data": {
      "text/plain": [
       "array([[-1.33333333,  1.66666667, -0.33333333],\n",
       "       [ 0.33333333,  2.33333333, -2.66666667],\n",
       "       [ 2.33333333,  1.33333333, -3.66666667],\n",
       "       [ 2.66666667, -0.33333333, -2.33333333],\n",
       "       [ 0.66666667,  1.66666667, -2.33333333],\n",
       "       [-0.33333333,  2.66666667, -2.33333333]])"
      ]
     },
     "execution_count": 7,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "A = np.random.randint(0,9,size = (6,3)).astype(np.float64)\n",
    "\n",
    "print(A)\n",
    "M = A.mean(axis = 1)\n",
    "print(M)\n",
    "for c in range(A.shape[1]):\n",
    "    A[:, c] -= M \n",
    "    \n",
    "    \n",
    "A"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "f0ca1825",
   "metadata": {},
   "outputs": [],
   "source": []
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python 3 (ipykernel)",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.9.7"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 5
}
