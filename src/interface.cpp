#include "khh.h"

void knn_interface(
    const double *train_inputs_ptr,//n_train_observations, n_features
    const double *train_label_ptr, //n_train_observations
    const double *test_input_ptr, //n_train_observations, n_features
    const int *n_observations_ptr, 
    const int *n_features_ptr, 
    const int *max_neighbors_ptr,
    double *test_predictions_ptr //n_test_observations, max_neighbors 
){
  int status = knn(train_inputs_ptr, train_label_ptr, test_input_ptr,
                   *n_observations_ptr, *n_features_ptr, *max_neighbors_ptr,
                   test_predictions_ptr);
}