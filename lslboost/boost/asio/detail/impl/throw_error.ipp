//
// detail/impl/throw_error.ipp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2018 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef BOOST_ASIO_DETAIL_IMPL_THROW_ERROR_IPP
#define BOOST_ASIO_DETAIL_IMPL_THROW_ERROR_IPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)

#include <boost/asio/detail/config.hpp>
#include <boost/asio/detail/throw_error.hpp>
#include <boost/asio/detail/throw_exception.hpp>
#include <boost/system/system_error.hpp>

#include <boost/asio/detail/push_options.hpp>

namespace lslboost {
namespace asio {
namespace detail {

void do_throw_error(const lslboost::system::error_code& err)
{
  lslboost::system::system_error e(err);
  lslboost::asio::detail::throw_exception(e);
}

void do_throw_error(const lslboost::system::error_code& err, const char* location)
{
  lslboost::system::system_error e(err, location);
  lslboost::asio::detail::throw_exception(e);
}

} // namespace detail
} // namespace asio
} // namespace lslboost

#include <boost/asio/detail/pop_options.hpp>

#endif // BOOST_ASIO_DETAIL_IMPL_THROW_ERROR_IPP
