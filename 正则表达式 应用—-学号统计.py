#  用正则表达式判断学号
n=int(input())
c=0
import re
for i in range(1,n+1):
    x = str(input())
    b = re.findall('^[2][5][0-9]{7}$',x)
    if(b!=[]):
      print(b)
      c+=1
print(c)
