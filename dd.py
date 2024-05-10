def ii():
    return list(map(int, input().strip().split()))

mxn = 200010
SS = [0]*(mxn)


def dp(n):
    ans = 0
    for i in str(n):
        ans += int(i)
    return ans

for i in range(mxn-1):
    SS[i+1] = dp(i+1) + SS[i]


for _ in range(ii()[0]):
    M = []  
    n = ii()[0]

    A = ii()

    C = {}

    val = 2147483647
    ans = 0
    for i in A:
        if i not in C:
            C[i] = 0
        if val - i not in C:
            C[val - i] = 0 


        if C[val - i] > 0:
            C[val - i] -= 1
        else:
            C[i] += 1
            ans += 1

    print(ans)