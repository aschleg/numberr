context("BinomialCoefficient")

test_that('binomial coefficient function computes correctly with given algorithm options', {
  expect_equal(binomial_coefficient(10, 2), 45)
  expect_equal(binomial_coefficient(20, 5), 15504)
  expect_equal(binomial_coefficient(10, 2, 'factorial'), 45)
  expect_equal(binomial_coefficient(20, 5, 'factorial'), 15504)
  expect_equal(binomial_coefficient(10, 2, 'recursive'), 45)
  expect_equal(binomial_coefficient(4, 2, 'recursive'), 6)
})

test_that('binomial coefficient multiplicative method computes correctly', {
  expect_equal(binomial_multiplicative(10, 2), 45)
  expect_equal(binomial_multiplicative(20, 5), 15504)
})

test_that('binomial coefficient factorial method computes correctly', {
  expect_equal(binomial_factorial(10, 2), 45)
  expect_equal(binomial_factorial(20, 5), 15504)
})

test_that('binomial coefficient recursive method computes correctly', {
  expect_equal(binomial_recursive(10, 2), 45)
  expect_equal(binomial_recursive(4, 2), 6)
})
