context("PrimalityTests")

test_that('Naive prime test function accurately determines prime integers', {
  expect_equal(isprime(11), TRUE)
  expect_equal(isprime(9), FALSE)
})

test_that('Fermat primality test function accurately determines prime integers', {
  expect_equal(fermat_prime(21), FALSE)
  expect_equal(fermat_prime(23), TRUE)
})
