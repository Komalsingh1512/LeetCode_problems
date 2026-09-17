# Write your MySQL query statement below
select max(num) as num from MyNumbers where num in (select num from MyNumbers 
group by num 
having count(*)=1);

#first select the unique numbers... having count(*)=1
# now select the max number from the unique numbers 
 