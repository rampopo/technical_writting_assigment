n = int(input("Enter the number of elements: "))
print("Enter the elements of the first vector:")
a = list(map(int, input().split()))
print("Enter the elements of the second vector:")
b = list(map(int, input().split()))

if len(a) != n or len(b) != n:
    print("Error: vector sizes do not match the specified size.")
else:
    dot_product = sum(a[i] * b[i] for i in range(n))
    print("Dot product =", dot_product)
