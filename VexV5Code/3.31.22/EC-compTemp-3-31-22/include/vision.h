/*vex-vision-config:begin*/
#include "vex.h"
vex::vision::signature SIG_GREE = vex::vision::signature (1, -5603, -4959, -5281, -2901, -2253, -2577, 3, 0);
vex::vision::signature SIG_YELLO = vex::vision::signature (2, 765, 2537, 1651, -4117, -3663, -3890, 2.5, 0);
vex::vision::signature SIG_3 = vex::vision::signature (3, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_4 = vex::vision::signature (4, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_5 = vex::vision::signature (5, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_6 = vex::vision::signature (6, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_7 = vex::vision::signature (7, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision Vision1 = vex::vision (vex::PORT4, 50, SIG_GREE, SIG_YELLO, SIG_3, SIG_4, SIG_5, SIG_6, SIG_7);
/*vex-vision-config:end*/