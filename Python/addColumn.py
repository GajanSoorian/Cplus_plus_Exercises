a=[]
sum=0
with open("inputFile") as f:
    for line in f:
        a=line.split()
        sum=sum+int(a[2])
print sum
