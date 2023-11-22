"""
Basic example of a coroutine.
Author: Andrew Jarombek
Date: 9/9/2022
"""


def double():
    """
    A coroutine that takes a number and multiples it by two.
    The result is yielded back to the caller.
    """
    while True:
        value = yield
        result_value = value * 2
        yield result_value


if __name__ == '__main__':
    double_coroutine = double()

    next(double_coroutine)
    result = double_coroutine.send(2)
    print(f"2 * 2 = {result}")
    assert result == 4

    next(double_coroutine)
    result = double_coroutine.send(5)
    print(f"5 * 2 = {result}")
    assert result == 10
