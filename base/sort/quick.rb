# frozen_string_literal: true

def quick_sort(list, start, fin)
  return unless start < fin

  q = partition(list, start, fin)
  quick_sort(list, start, q - 1)
  quick_sort(list, q, fin)
end

def partition(list, start, fin)
  i = start - 1

  (fin - start).times do |k|
    j = start + k
    if list[j] < list[fin]
      i += 1
      list[i], list[j] = list[j], list[i]
    end
  end
  list[i + 1], list[fin] = list[fin], list[i + 1]

  i + 1
end

list = [2, 5, 6, 9, 10, 54, 23, 1, 3, 4]
quick_sort(list, 0, list.size - 1)
p list
