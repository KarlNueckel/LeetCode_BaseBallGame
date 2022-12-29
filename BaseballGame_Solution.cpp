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
