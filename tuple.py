def getinput(lst):
    s=0
    s=int(input('Enter the total size:'))
    for n in range(s):
        numbers=(input('Enter the elements:'))
        lst.append(numbers)
    print(lst)
    return lst

def slicing(lst,lst1,lst2):
    t=[]
    for i in lst:
         t=i.split('=')
         lst1.append(t[0])
         lst2.append(t[1])
    return lst1,lst2
       
def getoutput(lst1,lst2):
    print(lst1,lst2)
  
    
def main():
    lst=[]
    lst1=[]
    lst2=[]
    lst=getinput(lst)
    lst1,lst2=slicing(lst,lst1,lst2)
    getoutput(lst1,lst2)
main()
