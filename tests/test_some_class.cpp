#include <gtest/gtest.h>

#include "core/some_class.h"


TEST(test_some_class, get_number) {
	my_project::some_class s(5);

	ASSERT_EQ(5, s.get_number());
}