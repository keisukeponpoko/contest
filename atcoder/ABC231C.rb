N, Q = gets.chomp.split(' ').map(&:to_i)
a_lists = gets.chomp.split(' ').map(&:to_i).sort

def search(list, left, right, target)
    if right == left || right - left == 1
        if list[left] >= target 
            return left
        elsif list[right] >= target
            return right
        else
            return right + 1
        end
    end

    center = (left + right) / 2
    if list[center] >= target
        return search(list, left, center, target)
    else
        return search(list, center, right, target)
    end
end

Q.times do
    x = gets.chomp.to_i
    pos = search(a_lists, 0, N - 1, x)
    
    puts N - pos
end

