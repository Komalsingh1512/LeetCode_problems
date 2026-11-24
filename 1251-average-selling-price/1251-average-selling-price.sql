# Write your MySQL query statement below
SELECT
    p.product_id,
    ROUND(COALESCE(SUM(p.price * u.units) / SUM(u.units),0),2) AS average_price
    -- coalesce is used to return first notnull value, as question is asked it return 0 when no units were sold
FROM Prices p
LEFT JOIN UnitsSold u
    ON p.product_id = u.product_id
    AND u.purchase_date BETWEEN p.start_date AND p.end_date
-- First condition: Is it the same product?
-- Second condition: Was that price valid on the purchase date?
GROUP BY p.product_id;