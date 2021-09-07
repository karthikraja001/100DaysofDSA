#Create Array
def array():
    arr = [2, 5, 3, 7, 1, 6, 8]
    print()
    return arr

#Method-1: Use insert(index, element)
def method1(arr, insertAt, insertMe):
    arr.insert(insertAt - 1, insertMe)
    print(*arr)

#Method-2: Use append() and sort them
def method2(arr, insertAt, insertMe):
    arr.append(insertMe)
    for i in range(len(arr)-1, insertAt-1, -1):
        arr[i] += arr[i-1]
        arr[i-1] = arr[i] - arr[i-1]
        arr[i] -= arr[i-1]

    print(*arr)
    
if __name__ == '__main__':
    arr = array()
    #Position to insert element
    insertAt = 3
    method1(arr, insertAt, 50)
    method2(arr, insertAt, 50)