# Basic-Python-Calculator
import re

print("***************************")
print("*Basic  Python  Calculator*")                           #Heading
print("***************************")                       
print("Type 'quit' to exit.")                                  #Exit option
previous=0
run=True
def perform_Math():
    global run
    global previous
    equation=""
    if previous == 0:
       equation=input("Enter equation:")
    else:
        equation=input(str(previous))


    if equation == 'quit':
        print("GOODBYE, HUMAN...")
        run=False
    else:
        equation=re.sub('[a-zA-Z,:()" "]','',equation)          #removing unnecessary letters,comma,blah,blah,blah..not used for mathematical operation

        if previous==0:
            previous=eval(equation)
        else:
            previous=eval(str(previous)+equation)               

while run:

    perform_Math()                                         
