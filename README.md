
<!-- README.md is generated from README.Rmd. Please edit that file -->

# toyrcpp2

<!-- badges: start -->

<!-- badges: end -->

The goal of `toyrcpp2` is to demonstrate how to create an R package that
uses `Rcpp`. The functions in this package are not particularly useful
in and of themselves. See the package vignettes for documentation that
walks through how to create a package with Rcpp.

## Installation

You can install the development version of `toyrcpp2` from
[GitHub](https://github.com/) with:

``` r
# install.packages("devtools")
devtools::install_github("GrindeLab/toyrcpp2", build_vignettes = TRUE)
```

## Example

This is a basic example which shows you how to use the R and C++
functions contained within this package:

``` r
library(toyrcpp2)
timesTwoR(455)
#> [1] 910
timesTwoCpp(455)
#> [1] 910
```

The two functions should give you the exact same R, since they implement
the same task; one is just written using R code (`timesTwoR`) and the
other uses C++ code (`timesTwoCpp`) which is called within R thanks to
the `Rcpp` package.

As mentioned above, the most useful aspect of this package is the
vignette. Take a look at the `creating-rcpp-package` vignette for a
description of the steps you need to take to create an R package using
Rcpp.

``` r
browseVignettes("toyrcpp2")
```
