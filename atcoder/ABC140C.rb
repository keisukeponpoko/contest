# frozen_string_literal: true

N = gets.to_i
lists = gets.chomp.split(' ').map(&:to_i)

sum = 0
N.times do |i|
  min = if i.zero?
    lists[i]
  elsif i == (N - 1)
    lists[i - 1]
  else
    [lists[i], lists[i-1]].min
  end

  sum += min
end

puts sum
