context("GCD")

test_that('gcd division function computes correctly', {
  expect_equal(gcd_division(1928, 48), 8)
  expect_equal(gcd_division(2947290, 23232), 6)
})

test_that('gcd recursive function computes correctly', {
  expect_equal(gcd_recursive(1928, 48), 8)
  expect_equal(gcd_recursive(2947290, 23232), 6)
})

test_that('gcd subtraction function computes correctly', {
  expect_equal(gcd_subtraction(1928, 48), 8)
  expect_equal(gcd_subtraction(2947290, 23232), 6)
})

test_that('gcd extended function computes correctly', {
  expect_equal(gcd_extended(99, 78), c(3, -11, 14))
})
