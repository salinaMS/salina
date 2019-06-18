def getinput():

    lst = []
    num = int(input('How many numbers: '))
    for n in range(num):
        numbers = int(input('Enter numbers '))
        lst.append(numbers)
    return lst


def add(lst):
    total=sum(lst)
    return total

def output(total):
    print('sum of numbers in list:',total)

def main():
    total=0
    lst=getinput()
    total=add(lst)
    output(total)
main()
