#include "startup.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

TEST(CTStartupTest, SimpleTest) { ASSERT_NO_THROW(run_startup()); }
