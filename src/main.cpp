#include "bits/stdc++.h"
#include <vec3.h>
#include <color.h>

int main(){
  // Image
  int img_w = 256;
  int img_h = 256;

  // Render
  std::cout << "P3\n" << img_w << " " << img_h << "\n255\n";

  for(int j = 0; j < img_h; ++j){
    std::clog << "\rScanlines remaining: " << (img_h - j) << ' ' << std::flush;
    for(int i = 0; i < img_w; i++){
      auto pixel_color = color(double(i)/ (img_w-1), double(j)/(img_h-1), 0);
      write_Color(std::cout, pixel_color);

    }
  }
  std::clog << "\nDone.\n";
  return 0;
 }

