N = int(input())
container = list(map(int,input().split()))

def ndbSolution(N, container):
  dp = [0]*N

  dp[0] = container[0]
  dp[1] = container[1]
  for i in range(2, N):
    dp[i] = max(dp[i-1], dp[i-2] + container[i])

  return dp[N-1]

def mySolution(N, container):

  dp = [0]*N

  dp[0] = container[0]
  dp[1] = container[1]
  dp[2] = container[0] + container[2]

  for i in range(3, N):
    dp[i] = container[i] + max(dp[i-2], dp[i-3])

  return dp[N-1]

print(ndbSolution(N, container), mySolution(N, container))