#A list division function - checks to see if the element at index i in the list is divisible by n, an arbitrary number we passed in 
#Jake Henson, 2018


ArbitraryList = [4, 8, 15, 16, 23, 42] #I hard-coded this list, but any list will work here 

def DivisList(i,n):
    
    if (ArbitraryList[i] % n == 0): #if the list at index i is even...
        return True
        
    else:
        return False


def main():
	index = 2; #again, these two are hard-coded, but can be any number you want
	n = 4; 

	print(DivisList(index, n))