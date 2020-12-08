#ifndef MY_STUDY_FORWARD_LIST_H
#define MY_STUDY_FORWARD_LIST_H

#include <iterator>
#include <memory>

// For documets refer https://en.cppreference.com/w/cpp/container/forward_list
namespace welcome
{
	template <typename T>
	class forward_list
	{
	public:
		forward_list() = default;
		forward_list(size_type count)
		{

		}
		forward_list(const forward_list& other);
		forward_list(forward_list&& other);
		~forward_list();
		forward_list& operator=(const forward_list& other);
		forward_list& operator=(forward_list&& other);

		reference front();
		const_reference front() const;

		iterator before_begin() noexcept;
		const_iterator before_begin() const noexcept;
		const_iterator cbefore_begin() const noexcept;

		iterator begin() noexcept;
		const_iterator begin() const noexcept;
		const_iterator cbegin() const noexcept;

		iterator end() noexcept;
		const_iterator end() const noexcept;
		const_iterator cend() const noexcept;
	private:
		template<typename T>
		struct Node
		{
			T data;
			std::unique_ptr<Node> next{ nullptr };
		};

		Node _node;
	};
}

#endif // MY_STUDY_FORWARD_LIST_H