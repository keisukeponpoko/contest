# frozen_string_literal: true

N = gets.to_i
heights = gets.chomp.split(' ').map(&:to_i)
heights[N] = Float::INFINITY

cnt = 0
max_cnt = 0
N.times do |i|
  if heights[i] >= heights[i + 1]
    cnt += 1
  else
    max_cnt = [max_cnt, cnt].max
    cnt = 0
  end
end

puts max_cnt
