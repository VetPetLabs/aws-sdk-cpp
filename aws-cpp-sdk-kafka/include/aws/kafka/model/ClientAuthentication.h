﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/Tls.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Includes all client authentication information.</p>
        
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ClientAuthentication">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKA_API ClientAuthentication
  {
  public:
    ClientAuthentication();
    ClientAuthentication(Aws::Utils::Json::JsonView jsonValue);
    ClientAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Details for ClientAuthentication using TLS.</p>
         
     */
    inline const Tls& GetTls() const{ return m_tls; }

    /**
     * 
            <p>Details for ClientAuthentication using TLS.</p>
         
     */
    inline bool TlsHasBeenSet() const { return m_tlsHasBeenSet; }

    /**
     * 
            <p>Details for ClientAuthentication using TLS.</p>
         
     */
    inline void SetTls(const Tls& value) { m_tlsHasBeenSet = true; m_tls = value; }

    /**
     * 
            <p>Details for ClientAuthentication using TLS.</p>
         
     */
    inline void SetTls(Tls&& value) { m_tlsHasBeenSet = true; m_tls = std::move(value); }

    /**
     * 
            <p>Details for ClientAuthentication using TLS.</p>
         
     */
    inline ClientAuthentication& WithTls(const Tls& value) { SetTls(value); return *this;}

    /**
     * 
            <p>Details for ClientAuthentication using TLS.</p>
         
     */
    inline ClientAuthentication& WithTls(Tls&& value) { SetTls(std::move(value)); return *this;}

  private:

    Tls m_tls;
    bool m_tlsHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
