-- SELECT Title, Price, Pages
-- FROM Book
-- WHERE Published < '1995-01-01'
-- ORDER BY Title;

-- CREATE TABLE Student (
-- 	studentid INTEGER NOT NULL PRIMARY KEY,
-- 	forename VARCHAR(32) NOT NULL,
-- 	surname VARCHAR(60) NOT NULL,
-- 	address VARCHAR(100),
-- 	phonenum VARCHAR(15)
-- );

-- CREATE TABLE COURSE (
-- 	courseid INTEGER NOT NULL PRIMARY KEY,
-- 	name CHARACTER VARYING(32) NOT NULL,
-- 	starts DATE
-- );

-- CREATE TABLE Grade (
-- 	StudentID INTEGER NOT NULL,
-- 	CourseID INTEGER NOT NULL,
-- 	Grade INTEGER NOT NULL,
-- 	PRIMARY KEY (StudentID, CourseID),
-- 	FOREIGN KEY (StudentID) REFERENCES Student (studentid),
-- 	FOREIGN KEY (CourseID) REFERENCES Course (courseid)
-- );

-- ALTER TABLE Course ADD COLUMN Lecturer character varying(32);

-- DROP TABLE Grade;

-- INSERT INTO Student (StudentID, Forename, Surname, Address, PhoneNum)
-- VALUES (1, 'Jennifer', 'Brown', '12 Forest Road, AC53010, Littleville', NULL);

-- INSERT INTO Course (CourseID, Name, Starts, Lecturer)
-- VALUES (1021, 'Introduction to databases', '2009-01-15', NULL); 

-- UPDATE Course SET Starts = '2009-01-16', Lecturer = 'Burroughs Anthony' WHERE CourseID = 1021;

-- DELETE FROM Course 
-- WHERE CourseID = 1010 
--   AND Name = 'Introduction to databases' 
--   AND Starts = '2006-09-02'
--   AND Lecturer IS NULL;

-- CREATE TABLE student (
-- 	studentnro SERIAL PRIMARY KEY,
-- 	firstName VARCHAR(32) NOT NULL,
-- 	lastName VARCHAR(60),
-- 	address VARCHAR(100),
-- 	phone VARCHAR(15)
-- );

-- INSERT INTO student (firstName, lastName, address, phone)
-- VALUES ('Mary', 'Smith', 'Helsinki', '050 123456');

-- INSERT INTO student (firstName, lastName, address, phone)
-- VALUES ('Math', 'Smith', 'Helsinki', '050 123456');

-- INSERT INTO student (firstName, lastName, address, phone)
-- VALUES ('Kate', 'Smith', 'Helsinki', '050 123456');

-- SELECT * FROM Student

-- SELECT * FROM book

-- SELECT title, price
-- FROM book;

-- SELECT title, price
-- FROM book
-- WHERE price < 20;

-- SELECT title, price
-- FROM book
-- WHERE price - 5 < 20;

-- SELECT * FROM author WHERE forename = 'Theodore'

-- SELECT title, pages, price, published
-- FROM book
-- WHERE pages < 500 AND price > 20;

-- SELECT * FROM publisher WHERE city IN ('Little Town', 'Creek-on-Trent');

-- SELECT title
-- FROM book
-- WHERE (authorid = 204 AND pages > 1000)
-- OR (authorid = 202 AND price > 20.0) 

-- SELECT * FROM publisher
-- ORDER BY name;

-- SELECT price, title FROM book ORDER BY price DESC;

-- SELECT price, title FROM book WHERE price >= 30
-- ORDER BY price DESC

-- SELECT DISTINCT authorid FROM book;

-- SELECT authorid, title FROM book
-- ORDER BY authorID ASC, title ASC;

-- SELECT COUNT(*) AS count FROM author;

-- SELECT COUNT(*) FROM book WHERE authorid = 204 AND pages > 300;

-- SELECT SUM(instock) AS sum FROM stock;

-- SELECT MIN(price) FROM book;

-- SELECT AVG(pages) FROM book WHERE pages > 200;

-- SELECT AVG(price), MAX(price), MIN(price)
-- FROM book
-- WHERE price > 20 AND price < 30;


-- SELECT authorid, SUM(pages) as sum
-- FROM book
-- GROUP BY authorID
-- ORDER BY authorid ASC;

-- SELECT authorid, AVG(price), AVG(pages)
-- FROM book
-- GROUP BY authorid
-- ORDER BY authorid DESC;

-- SELECT authorid FROM book
-- GROUP BY authorid
-- HAVING SUM(pages) > 200
-- ORDER BY authorid ASC;

-- SELECT authorid, SUM(pages) AS "Pages in total"
-- FROM book
-- GROUP BY authorid
-- ORDER BY authorid ASC;

-- SELECT authorid, SUM(pages) AS "Pages in total", AVG(price) AS "Book price average"
-- FROM book
-- GROUP BY authorid
-- HAVING SUM(pages) > 200
-- ORDER BY authorid;

-- SELECT author.authorid, 'has written' AS "Exp1", COUNT(*) AS "count", 'book(s)' AS "Exp2"
-- FROM author, book
-- WHERE author.authorid = book.authorid
-- GROUP BY author.authorid
-- ORDER BY author.authorid;

-- SELECT 'There are' AS "Exp1", COUNT(*) AS count, 'books that cost more than 20' AS "Exp2" FROM book WHERE price > 20;

-- SELECT 
-- 	'The new price for book' AS "Exp1",
--     bookid AS "Book ID",
--     'is' AS "Exp2",
--     price - 5 AS "Discount price"
-- FROM 
--     book
-- ORDER BY 
--     bookid;

-- SELECT book.title AS "Book", publisher.name AS "Publisher"
-- FROM book
-- JOIN publisher ON book.publisherid = publisher.publisherid
-- ORDER BY book.title ASC;

-- SELECT * FROM author
-- WHERE surname BETWEEN 'N' AND 'T';

-- SELECT * FROM book
-- WHERE bookid IN (101, 104, 105, 108) AND pages > 300;

-- SELECT title FROM book
-- WHERE title LIKE 'Th%'
-- ORDER BY title ASC;

-- SELECT title FROM book WHERE title LIKE '% and %'
-- ORDER BY title ASC

-- DROP VIEW IF EXISTS bpa;