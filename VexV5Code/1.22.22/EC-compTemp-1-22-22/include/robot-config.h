using namespace vex;

extern brain Brain;

// VEXcode devices
extern smartdrive Drivetrain;
extern controller Controller1;
extern motor arm;
extern motor liftfront;
extern motor liftback;
extern motor lift_clamp;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );