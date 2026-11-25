# Write your MySQL query statement below
select e.name, b.bonus from Employee e
LEFT join Bonus b on e.empId = b.empId
Where bonus < 1000 or bonus is NULL