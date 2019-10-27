N = gets.to_i

is_yes = false
1.upto(9).each do |num|
  next unless (N % num).zero?

  if (N / num) < 10
    puts 'Yes'

    is_yes = true
    break
  end
end

puts 'No' unless is_yes
