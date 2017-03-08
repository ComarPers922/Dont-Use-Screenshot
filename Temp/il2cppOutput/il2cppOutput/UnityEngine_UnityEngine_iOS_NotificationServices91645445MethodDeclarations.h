#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.iOS.LocalNotification
struct LocalNotification_t317971878;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_iOS_LocalNotification317971878.h"
#include "UnityEngine_UnityEngine_iOS_NotificationType3745088907.h"

// System.Void UnityEngine.iOS.NotificationServices::ScheduleLocalNotification(UnityEngine.iOS.LocalNotification)
extern "C"  void NotificationServices_ScheduleLocalNotification_m3645595256 (Il2CppObject * __this /* static, unused */, LocalNotification_t317971878 * ___notification0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::CancelAllLocalNotifications()
extern "C"  void NotificationServices_CancelAllLocalNotifications_m2716499817 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::ClearLocalNotifications()
extern "C"  void NotificationServices_ClearLocalNotifications_m586734259 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::RegisterForNotifications(UnityEngine.iOS.NotificationType)
extern "C"  void NotificationServices_RegisterForNotifications_m2431930612 (Il2CppObject * __this /* static, unused */, int32_t ___notificationTypes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::RegisterForNotifications(UnityEngine.iOS.NotificationType,System.Boolean)
extern "C"  void NotificationServices_RegisterForNotifications_m3997229679 (Il2CppObject * __this /* static, unused */, int32_t ___notificationTypes0, bool ___registerForRemote1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
