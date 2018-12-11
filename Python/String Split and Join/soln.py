def split_and_join(line):
    return "-".join(line.split())   # write your code here

if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
