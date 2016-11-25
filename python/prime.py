min=raw_input("Enter min :")
max=raw_input("Enter max :")

print"Entered range is ",min,max

for i in range(min,max) :
 for j in range(2,max) :
  if i%j==0:
    break
  if j==max:
   print"",i 
