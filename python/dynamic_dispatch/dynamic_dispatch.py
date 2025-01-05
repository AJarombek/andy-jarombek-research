"""
Dynamic dispatch is an object-oriented programming mechanism that allows the selection of a method
to be executed at runtime.
Author: Andrew Jarombek
Date: 1/3/2025
"""


class A:
    def x(self):
        print('A.x')
        self.y()

    def y(self):
        print('A.y')


class B(A):
    def y(self):
        print('B.y')


class C(B):
    @staticmethod
    def z():
        print('C.z')
        A().x()


if __name__ == '__main__':
    # Invoking the x method on an instance of class B will call the y method from class B.
    b = B()
    b.x()

    print(B.__mro__)

    # Invoking the x method on an instance of class C will call the y method from class B.
    c = C()
    c.x()

    # Invoking the z method on class C will call the x method from class A.
    c.z()

    print(C.__mro__)

