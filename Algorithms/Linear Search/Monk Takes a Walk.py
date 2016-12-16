lst=['A', 'E', 'I', 'O', 'U' ,'a','e','i','o','u']
d=int(input())
for i in range(0,d):
	x=input()
	ct=0
	for j in range(0,len(x)):
		if (x[j] in lst):
			ct+=1
	print(ct)