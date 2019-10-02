N,Y=gets.chomp.split(" ").map(&:to_i);

loop_times = N + 1
catch(:break) do
  loop_times.times do |i|
    (loop_times - i).times do |j|
      k = (N - i - j)
      if 10000 * i + 5000 * j + 1000 * k == Y
        puts "#{i} #{j} #{k}"
        throw :break
      end
    end
  end

  puts "-1 -1 -1"
end
