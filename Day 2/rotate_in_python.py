def rightRotation(arr, rotateRight):
    final = []
    final.extend(arr[rotateRight:])
    final.extend(arr[:rotateRight])
    print(*final)

def leftRotation(arr, rotateLeft):
    final = []
    final.extend(arr[rotateLeft:])
    final.extend(arr[:rotateLeft])
    print(*final)

if __name__ == '__main__':
    arr = input("Enter the terms separated by space:\t").split(" ")
    rotateLeft = int(input("Enter How Many Times to Rotate Left:\t"))
    rotateRight = int(input("Enter How Many Times to Rotate Right:\t"))
    arr = [int(x) for x in arr]
    
    leftRotation(arr, rotateLeft)
    rightRotation(arr, rotateRight)