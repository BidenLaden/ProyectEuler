"""
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved 
yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million."""

import time

start = time.time()

def CollatzProblem(n):
    chain = 1
    while n > 1:
        if n%2 == 0: 
            n = n/2
            chain += 1
        else:
            n = 3*n +1
            chain += 1
        if n == 1:
            return chain

largest_sequence = 0
largest_number = 0

for i in range(1000000,1, -1):
    n = CollatzProblem(i)
    if n > largest_sequence:
        largest_number = i
        largest_sequence = n

print(largest_number)
print(largest_sequence)
end = time.time()
print(end-start)

""""
import time

#time at the start of program execution
start = time.time()

#dictionary with all the values initialized to 0
dic = {n: 0 for n in range(1,1000000)}

#Entering the values of 1 and 2
dic[1] = 1
dic[2] = 2

#for loop find find the size of collatz sequences
for n in range(3,1000000,1):
	
	#counter to count the size for each iteration
	counter = 0
	
	#original number
	original_number = n

	#while loop to do collatz iterations
	while n > 1:

		#check if the number is a previous sequence
		if n < original_number:

			#Size of collatz sequence for the iteration
			dic[original_number] = dic[n] + counter
			break

		#collatz sequence conditions
		if n%2 == 0:
			n = n/2
			counter += 1
		else:
			n = 3*n+1
			counter += 1

#dic.values() will give the values of the dictionary
#list.index(some_number) will output the index
#of the number. As the index starts from 0
#we are adding one to the index.
print (dic.keys((max(dic.values))))

#time at the end of execution
end = time.time()

#printing the total time of execution
print(end-start)"""
    