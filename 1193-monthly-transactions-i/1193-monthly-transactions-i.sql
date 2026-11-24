SELECT 
    LEFT(trans_date, 7) AS month,
    country, 
    COUNT(id) AS trans_count,
    SUM(state = 'approved') AS approved_count,
    SUM(amount) AS trans_total_amount,
    SUM((state = 'approved') * amount) AS approved_total_amount
FROM 
    Transactions
GROUP BY 
    month, country;

-- LEFT() is a string function that extracts a specified number of characters from the left side of a string.
-- Syntax:
-- LEFT(string, number_of_characters)
-- Example:
-- SELECT LEFT('2026-11-25', 7);