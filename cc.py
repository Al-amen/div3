def process_test_case():
    n = int(input())
    s = input()
    freq = [0] * 26

    for c in s:
        freq[ord(c) - ord('a')] += 1

    maxFreq = max(freq)
    result = 2 * maxFreq - n if maxFreq > n // 2 else 1 if n % 2 == 1 else 0
    print(result)

def main():
    t = int(input())

    for _ in range(t):
        
        process_test_case()

# Execute the main function
if __name__ == "__main__":
    main()
