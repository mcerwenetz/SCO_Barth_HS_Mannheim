#include <gtest/gtest.h>

extern "C" {
#include "queue.h"
}

TEST(misc, len){
		struct Queue queue;
		int NUM  = 1;
		enter(&NUM, &queue);
		ASSERT_EQ(queue.size, 1);
}


TEST(misc, len2){
		struct Queue queue;
		int NUM  = 1;
		int NUM2  = 2;
		enter(&NUM, &queue);
		enter(&NUM2, &queue);
		ASSERT_EQ(queue.size, 2);
}
