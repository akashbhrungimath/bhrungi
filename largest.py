def my_input():
    a=float(input("Enter the first no.="))
    b=float(input("Enter the second no.="))
    c=float(input("Enter the third no.="))
    return a,b,c
    
def my_largest(x,y,z):
    l=x if x>y and x>z else y if y>z else z
    return l
    
def my_output(l,x,y,z):
    print("%f is tha largest of (%f,%f,%f)"%(l,x,y,z))
    
def main():
    x,y,z=my_input()
    l=my_largest(x,y,z)
    my_output(l,x,y,z)
    
main()