/***
 * 基于阻塞队列
 * 实现生产者消费者模型
 * 队列为空，消费者等待
 * 队列满了，生产者等待
 * 
 * 队列使用循环队列
 * **/
#include <thread>
// 首先实现一个循环队列

