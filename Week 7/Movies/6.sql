--the average rating of all movies released in 2012
SELECT AVG(rating) FROM movies
JOIN ratings ON movies.id = ratings.movie_id
WHERE year = 2012