def dancer_status(n, x, y):
    if n == 0:
        return 1
    half_size = 2**(n - 1)
    if x < half_size and y < half_size:
        return 0  
    return dancer_status(n - 1, x % half_size, y % half_size)

n = eval(input(""))
size = 2**n

for i in range(size):
    for j in range(size):
        status = dancer_status(n, i, j)
        print(status, end=" ")
    print()
