# frozen_string_literal: true

N, K = gets.chomp.split(' ').map(&:to_i)
S = gets.chomp

cnt = 0
pre_string = nil
S.each_char do |string|
  cnt += 1 if string == pre_string

  pre_string = string
end

puts [cnt + (K * 2), N - 1].min
