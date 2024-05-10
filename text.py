import math

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return a * b // gcd(a, b)

def fireworks(t, test_cases):
    for case in test_cases:
        a, b, m = case
        lcm_ab = lcm(a, b)
        intervals = lcm_ab // a + lcm_ab // b - 1
        total_minutes = intervals * m
        print(total_minutes + 1)

# Example usage
t = 6
test_cases = [
    (6, 7, 4),
    (3, 4, 10),
    (7, 8, 56),
    (5, 6, 78123459896),
    (1, 1, 1),
    (1, 1, 1000000000000000000)
]
fireworks(t, test_cases)
