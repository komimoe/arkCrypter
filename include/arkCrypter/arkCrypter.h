#pragma once

/*____________________________________________________________________________________________________________

Original Author: skadro
Github: https://github.com/KomiMoe/arkCrypter
License: See end of file

arkCrypter
		Compile-time + Lifetime, Usermode + Kernelmode, safe and lightweight string crypter library for C++11+, based on skCrypter

							*Not removing this part is appreciated*
____________________________________________________________________________________________________________*/

#include "oxorany_include.h"

#ifdef _KERNEL_MODE
namespace std
{
	template <class _Ty>
	using remove_reference_t = typename remove_reference<_Ty>::type;

    template <class _Ty>
    constexpr remove_reference_t<_Ty>&& move(_Ty&& _Arg) noexcept {
		return static_cast<remove_reference_t<_Ty>&&>(_Arg);
	}

}
#endif

#define lifeCrypter(__sth) oxorany(__sth)

/*________________________________________________________________________________

MIT License

Copyright (c) 2020 skadro

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

________________________________________________________________________________*/
