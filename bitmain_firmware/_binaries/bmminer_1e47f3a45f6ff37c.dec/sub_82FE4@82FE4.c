bool __fastcall sub_82FE4(int a1)
{
  return sub_831A8(a1, "* = 0, LOG_INFO")
      || sub_831A8(a1, "DEBUG = 20, LOG_DEBUG")
      || sub_831A8(a1, "INFO = 40, LOG_INFO")
      || sub_831A8(a1, "NOTICE = 60, LOG_NOTICE")
      || sub_831A8(a1, "WARN = 80, LOG_WARNING")
      || sub_831A8(a1, "ERROR = 100, LOG_ERR")
      || sub_831A8(a1, "FATAL = 120, LOG_ALERT")
      || sub_831A8(a1, "UNKNOWN = 254, LOG_ERR")
      || sub_831A8(a1, "! = 255, LOG_INFO");
}
