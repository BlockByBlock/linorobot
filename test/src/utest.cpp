// Test Lino Base
#include <lino_base.h>
// Using gtest
#include <gtest/gtest.h>

/**
 * Test LinoBase object initialization
 */
TEST(TESTLinoBase, initializatizeLino)
{
    EXPECT_NO_FATAL_FAILURE(LinoBase lino);
}

// Run all the tests that were declared with TEST()
int main(int argc, char **argv){
  testing::InitGoogleTest(&argc, argv);
  ros::init(argc, argv, "tester");
  ros::NodeHandle nh;
  return RUN_ALL_TESTS();
}
