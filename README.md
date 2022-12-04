# Generalized additive models for Prediction non-linear trends in Road-Accidents data using R:Different than what has been done so far.
## This repository contains all the code a used in my activity ,  In this paper we explore the use of generalized additive models (GAMs) in road  accidents research.
### This work was created using R. Therefore, you need to install the latest version of R. Additionally, it is recommended that and IDE such as RStudio is installed as well. Directions to install R and RStudio can be found here.
The most important library used in this research is "mgcv", which you can find in the mgcv.pdf.
In order to better understand the difference between the Linear models and the GAM  models, I first reviewed the linear models in.LM-research.Rmd and finally the GAM model came in the GAM-research.Rmd.
The data set has been constructed as daily with 33 variable :  
traffic parameters of cars and police enforcments on the road level(Independent variables) and Fatal and injured accidents as dependent variable(Y) .The Independent variables are as follows:

- TOTAL_VEHICLES :sum of vehicles on the road 
- Speed violation" :The volume of speed violations of vehicles
- Distance violation:The volume of speed violations of distance
Volum of all kinds of classes of vehicles included:
- Class one: light cars
- Class 2: Semi-heavy vehicles
- Class 3: heavy vehicles
- Class 4: Bus
- Class 5: super_heavy vehicles
- The Volum of police enforment on the road.
---
output: github_document
---

<!-- README.md is generated from README.Rmd. Please edit that file -->

```{r, include = FALSE}
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>",
  fig.path = "man/figures/README-",
  out.width = "100%"
)
```

# AccidentsPrediction

<!-- badges: start -->
[![Lifecycle: experimental](https://img.shields.io/badge/lifecycle-experimental-orange.svg)](https://lifecycle.r-lib.org/articles/stages.html#experimental)
<!-- badges: end -->

The goal of AccidentsPrediction is to ...

## Installation

You can install the development version of AccidentsPrediction like so:

``` r
# FILL THIS IN! HOW CAN PEOPLE INSTALL YOUR DEV PACKAGE?
```

## Example

This is a basic example which shows you how to solve a common problem:

```{r example}
library(AccidentsPrediction)
## basic example code
```

What is special about using `README.Rmd` instead of just `README.md`? You can include R chunks like so:

```{r cars}
summary(cars)
```

You'll still need to render `README.Rmd` regularly, to keep `README.md` up-to-date. `devtools::build_readme()` is handy for this. You could also use GitHub Actions to re-render `README.Rmd` every time you push. An example workflow can be found here: <https://github.com/r-lib/actions/tree/v1/examples>.

You can also embed plots, for example:

```{r pressure, echo = FALSE}
plot(pressure)
```

In that case, don't forget to commit and push the resulting figure files, so they display on GitHub and CRAN.
