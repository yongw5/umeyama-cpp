#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>

#include "umeyama.h"
int main() {
  std::vector<float> dst_data = {30.2946, 65.5318, 48.0252, 33.5493, 62.7299,
                                 51.6963, 51.5014, 71.7366, 92.3655, 92.2041};
  std::vector<float> src_data = {35.916126, 86.2129,  55.2765,   32.937046,
                                 72.59505,  43.42934, 49.016266, 71.023384,
                                 87.26657,  91.47491};
  cv::Mat src(2, 5, CV_32FC1, src_data.data());
  cv::Mat dst(2, 5, CV_32FC1, dst_data.data());
  auto ans = utils::Umeyama(src, dst, true);
  std::cout << ans << std::endl;
  return 0;
}