# frozen_string_literal: true

def merge_sort(list, left, right)
  return unless left + 1 < right

  mid = (left + right) / 2
  merge_sort(list, left, mid)
  merge_sort(list, mid, right)
  merge(list, left, mid, right)
end

def merge(list, left, mid, right)
  big_num = 100_000
  n1 = mid - left
  n2 = right - mid

  lefts = []
  rights = []
  n1.times { |i| lefts.push(list[left + i]) }
  n2.times { |i| rights.push(list[mid + i]) }
  lefts.push(big_num)
  rights.push(big_num)

  i = j = 0
  (right - left).times do |k|
    if lefts[i] < rights[j]
      list[left + k] = lefts[i]
      i += 1
    else
      list[left + k] = rights[j]
      j += 1
    end
  end
end

list = [2, 5, 6, 9, 10, 54, 23, 1, 3, 4]
merge_sort(list, 0, list.size)
p list
