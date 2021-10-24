target = 24
elements = [6, 20, 21, 24, 30, 32, 80, 85, 90, 101]

def BinarySearch(min_index,max_index):
    guess_index=(max_index+min_index)//2

    if elements[guess_index]==target:
        print(target,guess_index)
        exit()
    
    if elements[guess_index]<target:
        min_index=guess_index
        BinarySearch(guess_index,max_index)
    
    elif elements[guess_index]>target:
        max_index=guess_index
        BinarySearch(min_index,guess_index)

BinarySearch(0,len(elements)-1)
