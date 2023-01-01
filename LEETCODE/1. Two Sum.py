def singleNumber(nums):
    val_with_zero: dict = {}
    val_with_non_zero: dict = {}
    for ind, val in enumerate(nums):
        if val in val_with_zero:
            val_with_non_zero[val] = val_with_zero[val] + 1
            del val_with_zero[val]
        elif val in val_with_non_zero:
            val_with_non_zero[val] += 1
        else:
            val_with_zero[val] = 0
    return list(val_with_zero.keys())


print(singleNumber([-1, 0]))
