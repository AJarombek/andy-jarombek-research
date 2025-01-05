"""
Dynamic dispatch is an object-oriented programming mechanism that allows the selection of a method
to be executed at runtime.
Author: Andrew Jarombek
Date: 1/3/2025
"""


class A:
    def x(self) -> str:
        print('A.x')
        y = self.y()
        return ','.join([f'A.x', y])

    def y(self) -> str:
        print('A.y')
        return 'A.y'


class B(A):
    def y(self) -> str:
        print('B.y')
        return 'B.y'


class C(B):
    @staticmethod
    def z() -> str:
        print('C.z')
        x = A().x()
        return ','.join([f'C.z', x])


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

