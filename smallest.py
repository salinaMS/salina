def getinput(a,b,c):
    a=int(input('enter a:'))
    b=int(input('enter b:'))
    c=int(input('enter c:'))
    return a,b,c

def smallest(a,b,c):
    d= a if a>(b if b>c else b) else b if b>c else c
    return d

def getOutput(d):
    print("greater values",d)

def main():
    a=0;b=0;c=0;d=0;
    a,b,c=getinput(a,b,c)
    d=smallest(a,b,c)
    getOutput(d)
main()
   
