#pragma once
#include "base/Qv2rayBase.hpp"

namespace Qv2ray::core::config
{
    void SaveGlobalSettings();
    void SaveGlobalSettings(const Qv2rayConfigObject &conf);
    void SetConfigDirPath(const QString &path);
} // namespace Qv2ray::core::config

namespace Qv2ray
{
    // Extra header for QvConfigUpgrade.cpp
    QJsonObject UpgradeSettingsVersion(int fromVersion, int toVersion, const QJsonObject &root);
} // namespace Qv2ray

using namespace Qv2ray::core;
using namespace Qv2ray::core::config;
