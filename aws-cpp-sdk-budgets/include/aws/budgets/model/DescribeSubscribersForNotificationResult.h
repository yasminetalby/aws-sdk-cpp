﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/Subscriber.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Budgets
{
namespace Model
{
  /**
   * <p> Response of DescribeSubscribersForNotification </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/DescribeSubscribersForNotificationResponse">AWS
   * API Reference</a></p>
   */
  class AWS_BUDGETS_API DescribeSubscribersForNotificationResult
  {
  public:
    DescribeSubscribersForNotificationResult();
    DescribeSubscribersForNotificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeSubscribersForNotificationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of subscribers associated with a notification.</p>
     */
    inline const Aws::Vector<Subscriber>& GetSubscribers() const{ return m_subscribers; }

    /**
     * <p>A list of subscribers associated with a notification.</p>
     */
    inline void SetSubscribers(const Aws::Vector<Subscriber>& value) { m_subscribers = value; }

    /**
     * <p>A list of subscribers associated with a notification.</p>
     */
    inline void SetSubscribers(Aws::Vector<Subscriber>&& value) { m_subscribers = std::move(value); }

    /**
     * <p>A list of subscribers associated with a notification.</p>
     */
    inline DescribeSubscribersForNotificationResult& WithSubscribers(const Aws::Vector<Subscriber>& value) { SetSubscribers(value); return *this;}

    /**
     * <p>A list of subscribers associated with a notification.</p>
     */
    inline DescribeSubscribersForNotificationResult& WithSubscribers(Aws::Vector<Subscriber>&& value) { SetSubscribers(std::move(value)); return *this;}

    /**
     * <p>A list of subscribers associated with a notification.</p>
     */
    inline DescribeSubscribersForNotificationResult& AddSubscribers(const Subscriber& value) { m_subscribers.push_back(value); return *this; }

    /**
     * <p>A list of subscribers associated with a notification.</p>
     */
    inline DescribeSubscribersForNotificationResult& AddSubscribers(Subscriber&& value) { m_subscribers.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that indicates the next set of results that you can
     * retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results that you can
     * retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results that you can
     * retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results that you can
     * retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results that you can
     * retrieve.</p>
     */
    inline DescribeSubscribersForNotificationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results that you can
     * retrieve.</p>
     */
    inline DescribeSubscribersForNotificationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results that you can
     * retrieve.</p>
     */
    inline DescribeSubscribersForNotificationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Subscriber> m_subscribers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
