library(clusterSim)

# Example 3
#install.packages("ade4", repos="http://cran.rstudio.com/", dependencies=TRUE)
                                         
library(clusterSim)
md <- res.dist_tquest
# nc - number_of_clusters
min_nc=2
max_nc=10
res <- array(0, c(max_nc-min_nc+1, 2))
res[,1] <- min_nc:max_nc
clusters <- NULL
for (nc in min_nc:max_nc)
{
  hc <- hclust(md, method="average")
  cl2 <- cutree(hc, k=nc)
  res[nc-min_nc+1, 2] <- DB <- index.DB(md, cl2, centrotypes="centroids")$DB
  clusters <- rbind(clusters, cl2)
}

plot(res, type="b", pch=0, xlab="Number of clusters", ylab="DB", xaxt="n")
axis(1, c(min_nc:max_nc))
#########
fviz_nbclust(dd, hcut, method = "silhouette")+
  labs(subtitle = "Silhouette method")
##########