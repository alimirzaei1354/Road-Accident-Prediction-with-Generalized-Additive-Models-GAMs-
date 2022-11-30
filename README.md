# Generalized additive models for Prediction non-linear trends in Road-Accidents data using R:Different than what has been done so far.
## This repository contains all the code a used in my activity ,  In this paper we explore the use of generalized additive models (GAMs) in road  accidents research.
### This work was created using R. Therefore, you need to install the latest version of R. Additionally, it is recommended that and IDE such as RStudio is installed as well. Directions to install R and RStudio can be found here.
The most important library used in this research is "mgcv", which you can find in the mgcv.pdf.
In order to better understand the difference between the Linear models and the GAM  models, I first reviewed the linear models in.LM-research.Rmd and finally the GAM model came in the GAM-research.Rmd.
The data set has been constructed as daily with 33 variable :  
traffic parameters of cars and police enforcments on the road level(Independent variables) and Fatal and injured accidents as dependent variable(Y) .The Independent variables are as follows:
-TOTAL_VEHICLES :sum of  vehicles on the road 
- Speed violation" :The volume of speed violations of vehicles
- Distance violation:The volume of speed violations of distance
Volum of all kinds of classes of vehicles included:
- Class one: light cars
- Class 2: Semi-heavy vehicles
- Class 3: heavy vehicles
- Class 4: Bus
- Class five: super_heavy vehicles
- The Volum of police enforment on the road
