# frozen_string_literal: true

N, M = gets.chomp.split(' ').map(&:to_i)
prices = gets.chomp.split(' ').map(&:to_i)

# シンプルにこの実装だと計算量が N * M でOVER
# M.times do
#   max = prices.max
#   index = prices.index(max)

#   prices[index] = prices[index] / 2
# end

# puts prices.inject(:+)

# 優先度付きQueue　挿入、削除共に logN 時間で可能！！そのため、logN * M 時間で解ける。
class MaxHeap
  attr_reader :targets

  def initialize(array)
    @targets = {}
    @length = array.length
    @length.times { |i| @targets[i + 1] = array[i] }
  end

  def max_heap(i)
    l = 2 * i
    r = 2 * i + 1

    largest = if l <= @length && @targets[l] > @targets[i]
                l
              else
                i
              end
    largest = r if r <= @length && @targets[r] > @targets[largest]

    return if largest == i

    @targets[i], @targets[largest] = @targets[largest], @targets[i]
    max_heap(largest)
  end

  def build_max_heap
    (@targets.length / 2).downto(1) do |i|
      max_heap(i)
    end
  end

  # 下からつけてどんどん上に
  def insert(val)
    @length += 1
    @targets[@length] = val

    h = @length
    while h > 1 && @targets[h / 2] < @targets[h]
      @targets[h / 2], @targets[h] = @targets[h], @targets[h / 2]
      h /= 2
    end
  end

  def extra_max
    max = @targets[1]
    @targets[1] = @targets[@length]
    @targets.delete(@length)
    @length -= 1
    max_heap(1)

    max
  end
end

heap = MaxHeap.new(prices)
heap.build_max_heap

M.times do
  price = heap.extra_max
  heap.insert(price / 2)
end

p heap.targets.values.inject(:+)
