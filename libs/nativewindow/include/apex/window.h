/*
 * Copyright 2019 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <nativebase/nativebase.h>

// apex is a superset of the NDK
#include <android/native_window.h>

__BEGIN_DECLS

/**
 * Retrieves how long it took for the last time a buffer was dequeued.
 *
 * \return a negative value on error, otherwise returns the duration in
 * microseconds.
 */
int ANativeWindow_getLastDequeueDuration(ANativeWindow* window);

/**
 * Retrieves how long it took for the last time a buffer was queued.
 *
 * \return a negative value on error, otherwise returns the duration in
 * microseconds
 */
int ANativeWindow_getLastQueueDuration(ANativeWindow* window);

__END_DECLS