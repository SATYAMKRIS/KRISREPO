num = 5
for i in range(1, num+1):
    for j in range(1, i+1):
        print(j, end=" ")
    print("")




    # Give the number of rows as static input and store it in a variable.
numbrrows = 5
# Loop from 0 to the number of rows using For loop.
for m in range(0, numbrrows+1):
    # Loop from the number of rows - iterator value of the first parent For loop to 0
    # in decreasing order using another For loop(Nested For loop).
    for n in range(numbrrows - m, 0, -1):
        # Print the iterator value of the inner for loop.
        print(n, end=' ')
    # Print the Newline character after the end of the inner loop.
    print()