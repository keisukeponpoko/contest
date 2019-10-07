# frozen_string_literal: true

N, height = gets.chomp.split(' ').map(&:to_i)
hlist = gets.chomp.split(' ').map(&:to_i)

cnt = 0
hlist.sort.reverse.each do |h|
  break if h < height

  cnt += 1
end

puts cnt
