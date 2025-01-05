from dynamic_dispatch import A, B, C


def test_class_a():
    a = A()
    assert a.x() == "A.x,A.y"
    assert a.y() == "A.y"


def test_class_b():
    b = B()
    assert b.x() == "A.x,B.y"
    assert b.y() == "B.y"


def test_class_c():
    c = C()
    assert c.x() == "A.x,B.y"
    assert c.y() == "B.y"
    assert c.z() == "C.z,A.x,A.y"


def test_mro():
    assert A.__mro__ == (A, object)
    assert B.__mro__ == (B, A, object)
    assert C.__mro__ == (C, B, A, object)
