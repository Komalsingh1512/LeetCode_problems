# Write your MySQL query statement below
select customer_number from Orders
group by customer_number
order by count(order_number) desc
limit 1
-- LIMIT 1 returns only the first row.
-- Since we sorted in descending order, the first row represents the customer with the highest number of orders.