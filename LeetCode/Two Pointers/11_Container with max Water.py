# https://chatgpt.com/c/68dd7425-67fc-832b-b4e4-4d6d61041827
def maxArea(height: list[int]) -> int:
    i = 0
    j = len(height) - 1
    area = 0
    while i <= j:
        w = j - i
        h = min(height[i], height[j])
        area = max(area, w * h)
        if height[i] < height[j]:
            i += 1
        else:
            j -= 1
    return area


print(maxArea([1, 8, 6, 2, 5, 4, 8, 3, 7]))
