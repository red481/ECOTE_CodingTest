in_str = input()

columns = ['a','b','c','d','e','f','g','h']

ColnRow = (in_str[0], in_str[1])

#말이 이동할 수 있는 경우의 수 8가지
series_col = [2, 2, 1, -1, -2, -2, -1, 1]
series_row = [1, -1, 2, 2, 1, -1, -2, -2]

result = 0

for i in range(8):
  dx = columns.index(ColnRow[0]) + series_col[i]
  dy = int(ColnRow[1]) + series_row[i]

  if (dx >= 0) and (dx < 8) and (dy > 0) and (dy <= 8):
    result +=1

print(result)
  