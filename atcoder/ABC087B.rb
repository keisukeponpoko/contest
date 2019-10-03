# frozen_string_literal: true

a = gets.to_i # 500円
b = gets.to_i # 100円
c = gets.to_i # 50円
ans = gets.to_i # 狙う合計

cnt = 0
(a + 1).times do |i|
  (b + 1).times do |j|
    (c + 1).times do |k|
      cnt += 1 if 500 * i + 100 * j + 50 * k == ans
    end
  end
end

puts cnt
