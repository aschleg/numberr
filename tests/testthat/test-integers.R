context("Integers")

test_that('iscomposite identifies non-primes and prime numbers correctly', {
  expect_equal(iscomposite(10), TRUE)
  expect_equal(iscomposite(11), FALSE)
})

test_that('iseven function identifies even integers', {
  expect_equal(iseven(4), TRUE)
  expect_equal(iseven(11), FALSE)
  expect_equal(iseven(4.25), FALSE)
})

test_that('isodd function identifies odd integers', {
  expect_equal(isodd(3), TRUE)
  expect_equal(isodd(12), FALSE)
  expect_equal(isodd(5.4), FALSE)
})

test_that('issquare function correctly identifies square numbers', {
  expect_equal(issquare(25), TRUE)
  expect_equal(issquare(3), FALSE)
})
