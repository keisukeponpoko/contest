# frozen_string_literal: true

S = gets.chomp

odd = %w[R U D]
even = %w[L U D]

easy = 1
S.each_char.with_index do |string, index|
  if (index % 2).zero?
    if odd.index(string).nil?
      easy = 0
      break
    end
  elsif even.index(string).nil?
    easy = 0
    break
  end
end

puts easy.zero? ? 'No' : 'Yes'
