context("Factorial")

test_that('naive factorial method computes correctly', {
  expect_equal(factorial(10), 3628800)
})

test_that('Stirling factorial approximation method computes correctly', {
  expect_equal(round(stirling(10)), 3628561)
})

test_that('Stirling logarithmic factorial approximation method computes correctly', {
  expect_equal(round(exp(stirlingln(10))), 3628798)
})

test_that('Ramanujan factorial approximation computes correctly', {
  expect_equal(round(ramanujan(10)), 3628800)
})

# test_that('Falling factorial function computes correctly', {
#   expect_equal(fallingfactorial(5, 3), 60)
#   # Falling factorial function representation
#   expect_match(fallingfactorial_function('x', 2), "x*(x - 1)*(x - 2)")
# })
# 
# test_that('Rising factorial function computes correctly', {
#   expect_equal(risingfactorial(5, 3), 210)
#   # Rising factorial function representation
#   expect_match(risingfactorial_function('x', 2), "x\*\(x \+ 1\)\*\(x \+ 2\)")
# })
