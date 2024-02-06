
arr = [0 for i in range(26)]

def searchVale(x):
    global arr
    for j in range(26):
        
        if(arr[j] == x):
            arr[j]+=1
            return j+97
        
 
for _ in range(int(input())):
    
    n = int(input())
    a = list(map(int,input().split()))
    ans = ""
    for j in range(n):
        
        ans += chr(searchVale(a[j]))
        
    print(ans)
    
    arr = [0 for i in range(26)]