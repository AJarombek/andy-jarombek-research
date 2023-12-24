from python import Python

fn main():
    let np = Python.import_module("numpy")
    let array1 = np.array([1, 2, 3])
    let array2 = np.array([4, 5, 6])
    let array3 = array1 + array2
    print(array3)