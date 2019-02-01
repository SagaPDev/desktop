#include "Config.h"

QString getDeviceTypeName()
{
    return QString("Computer");
}

QString getDeviceNameForOS()
{
#if defined(Q_OS_ANDROID)
    return QLatin1String("Android");
#elif defined(Q_OS_BLACKBERRY)
    return QLatin1String("Blackberry");
#elif defined(Q_OS_IOS)
    return QLatin1String("iOS");
#elif defined(Q_OS_MACOS)
    return QLatin1String("MacOS");
#elif defined(Q_OS_TVOS)
    return QLatin1String("TvOS");
#elif defined(Q_OS_WATCHOS)
    return QLatin1String("WatchOS");
#elif defined(Q_OS_WINCE)
    return QLatin1String("WinCE");
#elif defined(Q_OS_WIN)
    return QLatin1String("Windows");
#elif defined(Q_OS_LINUX)
    return QLatin1String("Linux");
#elif defined(Q_OS_UNIX)
    return QLatin1String("Unix");
#else
    return QLatin1String("unknown");
#endif
}
