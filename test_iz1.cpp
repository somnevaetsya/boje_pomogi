extern "C" {
#include "struct.h"
}
#include <gtest/gtest.h>

TEST(FIB_TEST, Assert_1) { EXPECT_TRUE(duration(5, 3, 5, 6)); }

TEST(FIB_TEST, Assert_2) { EXPECT_TRUE(bpm(4, 3)); }

TEST(FIB_TEST, Assert_3) { EXPECT_TRUE(bpm(1, 3)); }

TEST(FIB_TEST, Assert_4) { EXPECT_FALSE(duration(2, 3, 5, 6)); }

TEST(FIB_TEST, Assert_5) { EXPECT_TRUE(bpm(49, 50) && duration(0, 8, 0, 8)); }

TEST(FIB_TEST, Assert_6) { EXPECT_TRUE(duration(0, 8, 0, 8)); }

TEST(FIB_TEST, Assert_7) { EXPECT_TRUE(bpm(43, 43) && duration(0, 12, 0, 12)); }

TEST(FIB_TEST, Assert_8) { EXPECT_TRUE(bpm(48, 50) && duration(5, 7, 5, 7)); }
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}