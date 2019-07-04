d = {}
i=0
a=[]
with open("inputFile") as f:
    for line in f:
       line.strip('\n')
       (one,two,three) = line.split(" ")
       a[i]=three
       i+=1
       print three
