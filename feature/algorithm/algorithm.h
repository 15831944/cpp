#pragma once

namespace eterfree
{
	/*
		C++14�е�std::moveʵ������
		��������ֵ�����Ƶ�
		��׼��ı���ģ��std:remove_reference_t
	*/
	template <typename T>
	decltype(auto) move(T&& param)
	{
		using ReturnType = std::remove_reference_t<T>&&;
		return static_cast<ReturnType>(param);
	}
	
	//template <typename T>
	//inline void swap(T &x, T &y)
	//{
	//	x ^= y;
	//	y ^= x;
	//	x ^= y;
	//}

	// STLԴ����ʽ

	template <typename T>
	inline void swap(T &left, T &right)
	{
		int temp = left;
		left = right;
		right = temp;
	}

	template <typename T>
	inline const T& max(const T& left, const T& right)
	{
		return left < right ? right : left;
	}

	template <typename T>
	inline const T& min(const T& left, const T& right)
	{
		return right < left ? right : left;
	}
}