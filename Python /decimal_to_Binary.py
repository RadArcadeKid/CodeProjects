#This function converts any decimal value into a binary value
#Jake Henson, 2018

def  DecimalToBinary(d):
    binarylist = []              ##empty list
    
    if d == 0:                   ##Original condition if we're just importing 0 into the function
        binarylist.insert(0, 0)  ##literally just puts a 0 at the beginning of the list
        
    while d > 0:                 ##A while loop to make sure integer we took in/are using is not zero...
       new_bit = d % 2           ##find out if the new bit is a 0 or a 1
       binarylist.insert(0, new_bit) ##inserts the new bit at the front of the list 
       d = d // 2                ##change the d value to the next one (n/2)
                                 ##It needs two // to get rid of the floating point at the end of a normal modulo we used earlier
         
    return binarylist    #returns the binary list 

def main():
 print(DecToBin(0.8))
 print(DecToBin(2.7))