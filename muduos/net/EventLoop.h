#ifndef EventLoop_h__
#define EventLoop_h__

#include <thread>
#include <atomic>

class EventLoop
{
public:
	EventLoop();
	~EventLoop();
	void loop();
	bool is_in_loop_thread() const { return thread_id_ == std::this_thread::get_id(); }
private:

	std::atomic<bool>		looping_;
	const std::thread::id	thread_id_;
};
#endif // EventLoop_h__