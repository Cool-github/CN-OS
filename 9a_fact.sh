echo enter num
read num
fact=1
while [ $num -gt 1 ]
do 
fact=$((fact*1))
num=$((num-1))
done
echo $fact