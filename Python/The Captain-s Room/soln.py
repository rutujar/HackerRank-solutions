k = int(input())
room_number_list = list(map(int, input().split()))
captain_room_number = (sum(set(room_number_list)) * k - sum(room_number_list)) // (k - 1)
print(captain_room_number)
