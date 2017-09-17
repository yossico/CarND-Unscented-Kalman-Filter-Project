#ifndef meas_packageAGE_H_
#define meas_packageAGE_H_

#include "Eigen/Dense"

class MeasurementPackage {
public:
  long timestamp_;

  enum SensorType{
    LASER,
    RADAR
  } sensor_type_;

  Eigen::VectorXd raw_measurements_;

};

#endif /* meas_packageAGE_H_ */
