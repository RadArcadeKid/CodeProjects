#First X digit Fibbonacci number program 
#Jake Henson, 2018

#When given an input, this function will find the first integer in the fibonacci sequence that has X digits 
#(e.g., if the function takes in 2, it will retrun 13, because 13 is the first 2-digit number in the Fibbonacci sequence)

def firstX_digit_Fib(n):

    if (n <=1): #just in case the number we enter is a 0 or 1 
        return 1
    

    a = 0 #defining variables to iterate thru fib sequence
    b = 1
    c = 1 
    
    for i in range(0, 400): #up to 50 iterations of the fib sequence (400 is arbitrary, makes sure it'll run enough times)
        c = a + b #set new nums
        a = b 
        b = c 
        
        if (int(len(str(a))) == n): #if the int of length of a (the number we're using) is equal to our number we're passing in...
             return a #return dat number

   


def main():
    print(firstX_digit_Fib(2))
    print(firstX_digit_Fib(3))
    print(firstX_digit_Fib(3))
    
    #add code for user input later....