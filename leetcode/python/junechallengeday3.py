class Solution:
    def twoCitySchedCost(self, costs: List[List[int]]) -> int:
        half = len(costs)//2
        costs.sort(key=lambda x: x[0] - x[1])
        return sum(list(zip(*costs[:half]))[0]) + sum(list(zip(*costs[half:]))[1])
