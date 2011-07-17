/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#include <sys/system_globals.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

SystemGlobals::SystemGlobals() {
  memset(&stgv_bool, 0, sizeof(stgv_bool));
  memset(&stgv_CallInfoPtr, 0, sizeof(stgv_CallInfoPtr));
  memset(&stgv_ObjectStaticCallbacksPtr, 0, sizeof(stgv_ObjectStaticCallbacksPtr));

  // Primitive Function/Method Static Variables

  // Primitive Class Static Variables

  // Redeclared Classes
}

void SystemGlobals::initialize() {
  Globals *globals = get_globals();
  pm_php$classes$arrayaccess_php(false, NULL, globals);
  pm_php$classes$debugger_php(false, NULL, globals);
  pm_php$classes$directory_php(false, NULL, globals);
  pm_php$classes$directoryiterator_php(false, NULL, globals);
  pm_php$classes$exception_php(false, NULL, globals);
  pm_php$classes$iterator_php(false, NULL, globals);
  pm_php$classes$reflection_php(false, NULL, globals);
  pm_php$classes$soapfault_php(false, NULL, globals);
  pm_php$classes$splfile_php(false, NULL, globals);
  pm_php$classes$splobjectstorage_php(false, NULL, globals);
  pm_php$classes$stdclass_php(false, NULL, globals);
  pm_php$classes$xhprof_php(false, NULL, globals);
  pm_php$globals$constants_php(false, NULL, globals);
  pm_php$globals$symbols_php(false, globals, globals);
}

///////////////////////////////////////////////////////////////////////////////
}
