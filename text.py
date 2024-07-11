def solve_speed_equation(test_cases):
    results = []
    for A in test_cases:
        B = A + 1
        C = B + 1
        results.append((B, C))
    return results

# Read input
t = int(input())
test_cases = [int(input()) for _ in range(t)]

# Solve for each test case
results = solve_speed_equation(test_cases)

# Print the results
for B, C in results:
    print(B, C)
