<?php

/**
 * @file
 *
 * CS Profile using the Profiler helper
 */

!function_exists('profiler_v2') ? require_once('sites/all/libraries/profiler/profiler.inc') : FALSE;
profiler_v2('d7_csbase_profile');
