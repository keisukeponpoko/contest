# frozen_string_literal: true

N = gets.to_i
routes = N.times.map { gets.chomp.split(' ').map(&:to_i) }

start_t = 0
start_x = 0
start_y = 0
can = true
routes.each do |route|
  t, x, y = route

  time = t - start_t
  move_x = (x - start_x).abs
  move_y = (y - start_y).abs

  if time < move_x + move_y || time % 2 != (move_x + move_y) % 2
    can = false
    break
  end

  start_t = t
  start_x = x
  start_y = y
end

puts can ? 'Yes' : 'No'
