import time
start = time.process_time()
a = 0
for i in range(10000):
  for j in range(10000):
    a = a + 1
print(time.process_time() - start)