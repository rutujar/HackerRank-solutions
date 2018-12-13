from collections import OrderedDict


ordered_dictionary = OrderedDict()
for _ in range(int(input())):
    item, price = input().rsplit(' ', 1)
    ordered_dictionary[item] = ordered_dictionary.get(item, 0) + int(price)
[print(item, ordered_dictionary[item]) for item in ordered_dictionary]
