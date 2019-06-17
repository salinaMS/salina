def getinput(a,b):
    a=int(input('enter a:'))
    b=int(input('enter b:'))
    return a,b
    
def add(a,b):
    c=a+b
    return c
def getoutput(c):
    print("sum=",c)
def main():
    a=0;b=0;c=0;
    a,b=getinput(a,b)
    c=add(a,b)
    getoutput(c)
main()
    
