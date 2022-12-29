# LeetCode_BaseBallGame (Problem 682)
![image](https://user-images.githubusercontent.com/87345979/210020193-0b77bf41-9998-4b9d-9c94-788e8257c737.png)
![image](https://user-images.githubusercontent.com/87345979/210020208-ba2e3cb1-af50-4295-b1c0-af8a1a4ec95b.png)
![image](https://user-images.githubusercontent.com/87345979/210020221-e4ca8a68-e311-4ae8-a9a6-a6abac10e82b.png)

# My Solution
    class Solution:
    def calPoints(self, operations: List[str]) -> int:
        index = 0
        record: List[int] = [0]

        while index < len(operations):
            if operations[index] == "+" :
                add = record[len(record)-2] + record[len(record)-1]
                record.append(add)
            elif operations[index] == "D":
                record.append(record[len(record)-1]*2)
            elif operations[index] == 'C':
                record.pop()
            else:
                record.append(int(operations[index]))
            index += 1
        return sum(record)


# Runtime
![image](https://user-images.githubusercontent.com/87345979/210020134-46f1b409-f3f6-4fc6-a45b-23038fcbc449.png)

# Memory
![image](https://user-images.githubusercontent.com/87345979/210020166-65675ed6-bd54-4341-b413-7d23c70fcbdb.png)
