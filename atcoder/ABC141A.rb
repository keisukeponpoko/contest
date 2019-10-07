# frozen_string_literal: true

S = gets.chomp

weathers = %w[Sunny Cloudy Rainy]

index = weathers.index(S)
puts weathers[(index + 1) % weathers.size]
