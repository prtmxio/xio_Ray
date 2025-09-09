#include "bits/stdc++.h"

int main(){
  // Image
  int img_w = 256;
  int img_h = 256;

  // Render
  std::cout << "P3\n" << img_w << " " << img_h << "\n255\n";

  for(int j = 0; j < img_h; ++j){
    std::clog << "\rScanlines remaining: " << (img_h - j) << ' ' << std::flush;
    for(int i = 0; i < img_w; i++){
      auto r = double(i) / (img_w - 1);
      auto g = double(j) / (img_h - 1);
      auto b = 0.0;

      int ir = int(255.99 * r);
      int ig = int(255.99 * g);
      int ib = int(255.99 * b);
      
      std::cout << ir << " " << ig << " " << ib << "\n"; 

    }
  }
 }

