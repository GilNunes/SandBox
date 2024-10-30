#include "startup.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(StartupTest, RunStartup) {
  // Redirect stdout or use a mock to verify output if necessary.
  ASSERT_NO_THROW(run_startup());
}
