# frozen_string_literal: true

N = gets.to_i
strings = N.times.map { gets.chomp }

exists = {}
cnt = 0
strings.each do |string|
  sort_s = string.chars.sort.join
  exists[sort_s] = 0 if exists[sort_s].nil?
  exists[sort_s] += 1
  cnt += exists[sort_s] - 1
end

puts cnt
