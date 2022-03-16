#include <iostream>
#include<ostream>

namespace Solid
{
    namespace OpenClose
    {
        template<typename T, typename U>
        class MPair
        {
        public:
            MPair(const T& first, const U& second) :m_first(first), m_second(second), m_secrect_member(1001) {}
            T& get_first() { return m_first; }
            U& get_second() { return m_second; }

            const T& get_first() const { return m_first; }
            const U& get_second() const { return m_second; }
            template<typename Z, typename Y>
            friend std::ostream& operator<<(std::ostream& stream, const MPair<Z, Y>& mp);

        private:
            T m_first;
            U m_second;
            int m_secrect_member;
        };

        template<typename Z, typename Y>
        std::ostream& operator<<(std::ostream& stream, const MPair<Z, Y>& mp)
        {
            stream << mp.get_first() << std::string(" , ");
            stream << mp.get_second() << std::string(" , ");
            stream << mp.m_secrect_member;
            return stream;
        }
    }
}