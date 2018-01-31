context('IntegerFactorization')

test_that('factorization with naive trial method computes correctly', {
  expect_equal(factor_trial(10), c(2, 5))
  expect_equal(factor_trial(28742), c(2, 7, 2053))
})

test_that('Fermat factorization method computes correctly', {
  n <- 28742
  f <- fermat_factor(n)
  
  expect_equal(n, f[1] * f[2])
})

test_that('Pollard rho factorization method computes correctly', {
  expect_equal(pollardrho(28742), c(2, 14371))
})
