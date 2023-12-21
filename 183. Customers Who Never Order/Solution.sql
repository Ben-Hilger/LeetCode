-- Write a solution to find all customers who never order anything.
-- Return the result table in any order.
-- The result format is in the following example.

-- Write your MySQL query statement below
SELECT c.name as Customers
FROM Customers c
LEFT JOIN Orders o ON c.id = o.customerId
GROUP BY c.id
HAVING COUNT(o.id) = 0