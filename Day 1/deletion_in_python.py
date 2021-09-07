#Method-1:  Use del() function
def method1(arr, removeAt):
    del(arr[removeAt-1])
    print(*arr)
    
#Method-2:  Use remove() function
def method2(arr, removeAt):
    arr.remove(arr[removeAt-1])
    print(*arr)

#Method-3:  Manual removing (Like c programming)
def method3(arr, removeAt):
    for i in range(removeAt-1, len(arr)-1):
        arr[i] += arr[i+1];
        arr[i+1] = arr[i] - arr[i+1];
        arr[i] -= arr[i+1];
    print(*arr[:-1])

if __name__ == '__main__':
    arr = [10,20,30,40,50,60,70,80,90,100]
    print(*arr)
    print("Removing 3rd Element")
    method1(arr, 3)
    print("Removing 2nd Element")
    method2(arr, 2)
    print("Removing 4th Element")
    method3(arr, 4)