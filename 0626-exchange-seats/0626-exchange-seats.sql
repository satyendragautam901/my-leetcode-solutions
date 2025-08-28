# Write your MySQL query statement below
SELECT 
    CASE 
        WHEN mod(id,2) = 0 THEN id - 1   -- even id → previous position
        WHEN mod(id,2) = 1 AND id + 1 <= (SELECT COUNT(*) FROM Seat) 
            THEN id + 1              -- odd id → next position (agar exist kare)
        ELSE id                      -- last odd id as it is
    END AS id,
    student
FROM Seat
ORDER BY id;
