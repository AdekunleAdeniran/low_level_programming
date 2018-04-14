#!/usr/bin/python3
def palidrome(num):
  n = str(num)
  return (n == n[::-1])

def highp(low, high):
  total = []
  for i in range(high, low, -1):
    for j in range(high, low, -1):
      prod = i * j
      if palidrome(prod):
        total.append(prod)
  print (max(total))

highp(99, 999)
