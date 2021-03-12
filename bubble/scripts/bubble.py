arr = [2, 4, 7, 10, 8, 1, 5, 3, 6, 9]
print("OG: ", arr)
len_arr = len(arr)

while (len_arr!=0):
	for i in range(len_arr-1):
		if (arr[i] > arr[i+1]):
			arr[i], arr[i+1] = arr[i+1], arr[i]
	len_arr-=1

print("SR: ", arr)
