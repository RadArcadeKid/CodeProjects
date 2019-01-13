#This function is desined to fund the the product of the coefficients in the expansion of (ax+by)n
#Its three arguments are the corrospinding terms in the binomial product 

#Jake Henson, 2018


import math

def binom_product(a,b,n):
    
    #(ax + by)^n

    firstterm = math.pow(a, n)  #first term is literally just a^n, always 
    
    previousTerm = firstterm #used for the loop to determine what the previous term was  
    productTerms = previousTerm #used for intiliazing the first product to multiplying by the first term (cheap way)
    
    for k in range( 1,  n+1 ): #find the rest of the terms, using n+1 because we're funding it up to the nth power   
    
        currentTerm = (previousTerm * b * (n - k + 1)) / (k * a) #a quick way of finding each of the terms in the expansion only using the previous term we found
        #essentially, the nextTerm is found by using the previous term, multiplied by coeffientof Y (b) and ( n - k ) and all that is divided by ( k + 1 ) #this is a shorthand version for finding coeffiecients, slightly faster than using factorials, which I had trouble getting working 
        previousTerm = currentTerm #set the previousTerm now the current term so we can get the new term to loop thru 
        
        productTerms = currentTerm * productTerms #finds the product of the two terms (the current term multiplied by all the previous ones' we've found )
 
        
    return productTerms     

def main():

    print(round(binom_product(2,-1,3)))

   # a=2, b=−1, and n=3, so (2x−y)3=8x3−12x2y+6xy2−y3
   # The product of the expansion coefficients is 8×−12×6×−1 = 576
