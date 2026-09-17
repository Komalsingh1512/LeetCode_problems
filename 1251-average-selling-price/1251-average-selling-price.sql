# Write your MySQL query statement below
-- We need to compute the average selling price for each product.
-- Prices are valid only within a specific date range, so for each sale, we must pick the correct price based on the date.
-- If a product has no sales, its average price should be 0.

##hard one i didn't understand it 

SELECT p.product_id,
       IFNULL(ROUND(SUM(p.price * u.units) / SUM(u.units), 2), 0) AS average_price
FROM Prices p
LEFT JOIN UnitsSold u
  ON p.product_id = u.product_id
 AND u.purchase_date BETWEEN p.start_date AND p.end_date
GROUP BY p.product_id;
