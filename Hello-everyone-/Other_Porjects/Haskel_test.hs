sphere r = r^3 * pi * 4/3
quadratic_equation a b c  = ((-b - sqrt(b^2 - 4*a*c))/(2*a),(-b + sqrt(b^2 - 4*a*c))/(2*a))

triplets (x1:x2:x3:xs) = ([x1,x2,x3]:(triplets xs))
triplets xs = [xs]

replicates  n (x:xs)   = [replicate n x | x<-(x:xs)]

number_of_zeros []      = 0
number_of_zeros(x:xs)   = if x==0 then 1 + (number_of_zeros xs) else number_of_zeros xs


remove_dups [x1:x2:xs]   = if x1 then ([x1]) else ([x2])

split_list n (x:xs) =([x]++take (n-1) xs,drop (n-1) xs)



