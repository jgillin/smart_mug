#include <stdio.h>
#include <mug.h>

char frames[] = {0,16,1,0,1,0,0,1,17,17,17,17,17,17,0,1,0,16,1,0,1,0,17,1,0,0,0,1,0,0,17,17,0,17,17,17,17,0,1,1,0,1,16,1,16,0,0,17,0,1,16,1,16,0,17,17,17,17,17,17,17,17,1,1,0,0,16,1,0,0,0,1,0,16,1,16,1,0,0,1,16,17,0,0,17,17,0,1,16,0,0,0,0,0,0,1,16,1,0,1,0,0,1,0,17,17,17,17,17,0,1,0,16,1,0,1,0,17,1,16,0,0,1,0,0,17,17,0,17,17,17,17,0,1,1,17,1,16,1,16,0,0,17,0,1,16,1,16,0,17,17,17,17,17,17,17,17,1,1,16,0,16,1,0,0,0,1,16,16,1,16,1,0,0,1,0,17,0,0,17,17,0,1,0,0,0,0,0,0,0,1,0,1,0,1,0,0,1,0,16,17,17,17,17,0,1,0,16,1,0,1,0,17,1,16,17,0,1,0,0,17,17,0,16,17,17,17,0,1,1,17,17,16,1,16,0,0,17,0,0,16,1,16,0,17,17,17,17,17,17,17,17,1,1,16,0,16,1,0,0,0,1,16,1,1,16,1,0,0,1,0,0,0,0,17,17,0,1,0,16,0,0,0,0,0,1,0,0,0,1,0,0,1,0,16,0,17,17,17,0,1,0,16,0,0,1,0,17,1,16,17,17,1,0,0,17,17,0,16,0,17,17,0,1,1,17,17,17,1,16,0,0,17,0,0,16,1,16,0,17,17,17,17,17,17,17,17,1,1,16,0,16,1,0,0,0,1,16,1,16,16,1,0,0,1,0,0,16,0,17,17,0,1,0,16,17,0,0,0,0,1,0,0,0,1,0,0,1,0,16,0,0,17,17,0,1,0,16,0,0,1,0,17,1,16,17,17,1,0,0,17,17,0,16,0,0,17,0,1,1,17,17,17,17,16,0,0,17,0,0,16,0,16,0,17,17,17,17,17,17,17,17,1,1,16,0,16,0,0,0,0,1,16,1,16,0,1,0,0,1,0,0,16,0,17,17,0,1,0,16,17,0,0,0,0,1,0,0,0,0,0,0,1,0,16,0,0,0,17,0,1,0,16,0,0,0,0,17,1,16,17,17,1,0,0,17,17,0,16,0,0,16,0,1,1,17,17,17,17,17,0,0,17,0,0,16,0,0,0,17,17,17,17,17,17,0,17,1,1,16,0,16,0,0,0,0,1,16,1,16,0,16,0,0,1,0,0,16,0,16,17,0,1,0,16,17,0,0,0,0,1,0,0,0,0,0,0,1,0,16,0,0,0,16,0,1,0,16,0,0,0,16,17,1,16,17,17,1,0,17,17,17,0,16,0,0,16,1,1,1,17,17,17,17,17,0,0,17,0,0,16,0,0,16,17,17,17,17,17,17,0,17,1,1,16,0,16,0,0,1,0,1,16,1,16,0,16,0,0,1,0,0,16,0,16,0,0,1,0,16,17,0,0,16,0,1,0,0,0,0,0,0,1,0,16,0,0,0,16,0,1,0,16,0,0,0,16,0,1,16,17,17,1,0,17,17,17,0,16,0,0,16,1,0,1,17,17,17,17,17,0,0,17,0,0,16,0,0,16,0,17,17,17,17,17,0,17,0,1,16,0,16,0,0,1,0,1,16,1,16,0,16,0,0,1,0,0,16,0,16,0,0,1,0,16,17,0,0,16,17,1,0,0,0,0,0,0,0,0,16,0,0,0,16,0,0,0,16,0,0,0,16,0,0,16,17,17,1,0,17,17,17,0,16,0,0,16,1,0,1,17,17,17,17,17,0,0,1,0,0,16,0,0,16,0,1,17,17,17,17,0,17,0,1,16,0,16,0,0,1,0,1,16,1,16,0,16,0,0,1,0,0,16,0,16,0,0,1,0,16,17,0,0,16,17,0,0,0,0,0,0,0,0,0,16,0,0,0,16,0,0,0,16,0,0,0,16,0,0,0,17,17,1,0,17,17,17,17,16,0,0,16,1,0,1,0,17,17,17,17,0,0,1,0,0,16,0,0,16,0,1,1,17,17,17,0,17,0,1,16,0,16,0,0,1,0,1,16,1,16,0,16,0,0,1,0,0,16,0,16,0,0,1,0,16,17,0,0,16,17,0,0,0,0,0,0,0,0,0,0,0,0,0,16,0,0,0,0,0,0,0,16,0,0,0,0,17,1,0,17,17,17,17,17,0,0,16,1,0,1,0,1,17,17,17,0,0,1,0,0,16,0,0,16,0,1,1,0,17,17,0,17,0,1,16,0,16,0,0,1,0,1,16,1,16,0,16,0,0,1,0,1,16,0,16,0,0,1,0,0,17,0,0,16,17,0,0,0,0,0,0,0,0,0,0,0,0,0,16,0,0,0,0,17,0,0,16,0,0,0,0,16,1,0,17,17,17,17,17,16,0,16,1,0,1,0,1,16,17,17,0,0,1,0,0,16,0,0,16,0,1,1,0,16,17,0,17,0,1,16,0,16,0,0,1,0,1,16,1,16,0,16,0,0,1,0,1,16,0,16,0,0,1,0,0,17,0,0,16,17,0,0,0,0,0,0,0,0,0,0,0,0,0,16,0,0,0,0,17,1,0,16,0,0,0,0,16,0,0,17,17,17,17,17,16,0,16,1,0,1,0,1,16,0,17,0,0,1,0,0,16,0,0,16,0,1,1,0,16,0,0,17,0,1,16,0,16,0,0,1,0,1,16,1,16,0,16,0,0,1,0,1,16,0,16,0,0,1,0,0,17,1,0,16,17,0,0,0,0,0,0,0,0,0,0,0,0,0,16,0,0,0,0,17,1,16,16,0,0,0,0,16,0,16,17,17,17,17,17,16,0,16,1,0,1,0,1,16,0,16,0,0,1,0,0,16,0,16,16,0,1,1,0,16,0,16,17,0,1,16,0,16,0,16,1,0,1,16,1,16,0,16,0,0,1,0,1,16,0,16,0,0,1,0,0,17,1,16,16,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,1,16,0,0,0,0,0,16,0,16,0,17,17,17,17,16,0,16,0,0,1,0,1,16,0,16,0,0,1,0,0,16,0,16,0,0,1,1,0,16,0,16,0,0,1,16,0,16,0,16,0,0,1,16,1,16,0,16,0,0,1,0,1,16,0,16,1,0,1,0,0,17,1,16,17,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,1,16,0,0,0,0,0,16,0,16,0,0,17,17,17,16,0,16,0,0,1,0,1,16,0,16,0,0,1,0,0,16,0,16,0,0,1,1,0,16,0,16,0,0,1,16,0,16,0,16,0,0,1,16,1,16,0,16,0,0,1,0,1,16,0,16,1,0,1,0,0,17,1,16,17,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,1,16,0,0,0,0,0,16,0,16,0,0,0,17,17,16,0,16,0,0,16,0,1,16,0,16,0,0,16,0,0,16,0,16,0,0,16,1,0,16,0,16,0,0,16,16,0,16,0,16,0,0,16,16,1,16,0,16,0,0,16,0,1,16,0,16,1,0,0,0,0,17,1,16,17,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,1,16,0,0,0,16,0,16,0,16,0,0,0,17,17,16,0,16,0,0,16,1,1,16,0,16,0,0,16,0,0,16,0,16,0,0,16,0,0,16,0,16,0,0,16,0,0,16,0,16,0,0,16,0,1,16,0,16,0,0,16,1,1,16,0,16,1,0,0,17,0,17,1,16,17,17,0,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,1,16,0,0,0,16,17,16,0,16,0,0,0,17,0,16,0,16,0,0,16,1,0,16,0,16,0,0,16,0,0,16,0,16,0,0,16,0,0,16,0,16,0,0,16,0,0,16,0,16,0,0,16,0,0,16,0,16,0,0,16,1,0,16,0,16,1,0,0,17,0,17,1,16,17,17,0,16,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,16,0,0,0,16,17,1,0,16,0,0,0,17,0,0,0,16,0,0,16,1,0,0,0,16,0,0,16,0,0,0,0,16,0,0,16,0,0,0,0,16,0,0,16,0,0,0,0,16,0,0,16,0,0,0,0,16,0,0,16,1,0,0,0,16,1,0,0,17,0,0,1,16,17,17,0,16,17,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,0,0,0,16,17,1,0,16,0,0,0,17,0,0,17,16,0,0,16,1,0,0,0,16,0,0,16,0,0,0,0,16,0,0,16,0,0,0,0,16,0,0,16,0,0,0,0,16,0,0,16,0,0,0,0,16,0,0,16,1,0,0,17,16,1,0,0,17,0,0,0,16,17,17,0,16,17,1,0,0,0,0,0,0,0,0,16,0,0,0,0,0,0,0,16,0,0,0,16,17,1,0,16,0,0,0,17,0,0,17,17,0,0,16,1,0,0,0,16,0,0,16,0,0,0,0,0,0,0,16,0,0,0,0,17,0,0,16,0,0,0,0,1,0,0,16,0,0,0,0,1,0,0,16,1,0,0,17,17,1,0,0,17,0,0,0,0,17,17,0,16,17,1,0,16,0,0,0,0,0,0,16,17,0,0,0,0,0,0,16,0,0,0,16,17,1,0,16,1,0,0,17,0,0,17,17,17,0,16,1,0,0,0,16,1,0,16,0,0,0,0,0,0,0,16,0,0,0,0,17,17,0,16,0,0,0,0,1,16,0,16,0,0,0,0,1,16,0,16,1,0,0,17,17,17,0,0,17,0,0,0,0,16,17,0,16,17,1,0,16,1,0,0,0,0,0,16,17,0,0,0,0,0,0,16,0,0,0,16,17,1,0,16,1,0,0,17,0,0,17,17,17,17,16,1,0,0,0,16,1,0,16,0,0,0,0,0,0,1,16,0,0,0,0,17,17,17,16,0,0,0,0,1,16,1,16,0,0,0,0,1,16,1,16,1,0,0,17,17,17,17,0,17,0,0,0,0,16,1,0,16,17,1,0,16,1,16,0,0,0,0,16,17,0,0,0,0,0,0,16,0,0,0,16,17,1,0,16,1,0,1,17,0,0,17,17,17,17,17,1,0,0,0,16,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,17,17,17,17,0,0,0,0,1,16,1,16,0,0,0,0,1,16,1,16,1,0,0,17,17,17,17,17,17,0,0,0,0,16,1,0,16,17,1,0,16,1,16,1,0,0,0,16,17,0,0,17,0,0,0,16,0,0,0,0,17,1,0,16,1,0,1,0,0,0,17,17,17,17,17,17,0,0,0,16,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,17,17,17,17,0,0,0,0,1,16,1,16,0,0,0,0,1,16,1,16,0,0,0,17,17,17,17,17,17,0,0,0,0,16,1,0,0,17,1,0,16,1,16,1,0,0,0,16,17,0,0,17,17,0,0,16,0,0,0,0,0,1,0,16,1,0,1,0,0,0,17,17,17,17,17,17,0,0,0,16,1,0,1,0,17,0,0,0,0,1,0,0,17,0,0,17,17,17,17,0,1,0,0,1,16,1,16,0,0,0,0,1,16,1,16,0,17,0,17,17,17,17,17,17,1,0,0,0,16,1,0,0,0,1,0,16,1,16,1,0,0,0,16,17,0,0,17,17,0,0,16,0,0,0,0,0,0};

int main()
{
  handle_t handle = mug_disp_init();

  while(1) {
    mug_disp_raw_N(handle, frames, sizeof(frames)/COMPRESSED_SIZE, 200);
  }

  mug_close(handle); 

  return 0;
}