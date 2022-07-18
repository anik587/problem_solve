def singleNumber(nums):
    val_with_zero: dict = {}
    val_with_non_zero: dict = {}
    for ind, val in enumerate(nums):
        if val in val_with_zero:
            del val_with_zero[val]
        elif val in val_with_non_zero:
            val_with_non_zero[val] += 1
        else:
            val_with_zero[val] = 0
    return list(val_with_zero.keys())


def singleNumber2(nums):
    val_with_zero: dict = {}
    for ind, val in enumerate(nums):
        if val in val_with_zero:
            del val_with_zero[val]
        else:
            val_with_zero[val] = 0
    return list(val_with_zero.keys())


def singleNumber3(nums):
    seen = set()

    for num in nums:
        if num in seen:
            seen.remove(num)
        else:
            seen.add(num)

    return list(seen)


def singleNumber4(nums):
    res = 0
    for x in nums:
        res = res ^ x
    res = res & (~(res - 1))
    ev = 0
    od = 0
    for x in nums:
        if x & res:
            ev = ev ^ x
        else:
            od = od ^ x
    return [ev, od]


print(singleNumber([1, 2, 1, 3, 2, 5, 1]))
print(singleNumber2([1, 2, 1, 3, 2, 5, 1]))
print(singleNumber3([1, 2, 1, 3, 2, 5, 1]))
print(singleNumber4([-1, 0]))