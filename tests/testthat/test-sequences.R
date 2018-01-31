context("Sequences")

test_that('Catalan sequence returns correct numbers', {
  expect_equal(catalan(5), c(1,  2,  5, 14, 42))
})

test_that('Supercatalan sequence returns correct numbers', {
  expect_equal(supercatalan(5), c(1, 1, 3, 11, 45))
})

test_that('Cullen sequence returns correct numbers', {
  expect_equal(cullen(5), c(3, 9, 25, 65, 161))
})

test_that('Fibonacci sequence returns correct numbers', {
  expect_equal(fibonacci(5), c(1,1,2,3,5))
})

test_that('Three-n-one sequence returns consistent numbers', {
  expect_equal(three_n_one(5), c(16, 8, 4, 2, 1))
})