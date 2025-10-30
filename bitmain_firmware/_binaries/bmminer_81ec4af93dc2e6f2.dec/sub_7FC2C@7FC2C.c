bool __fastcall sub_7FC2C(int a1)
{
  return sub_7FDF0(a1, "* = 0, LOG_INFO")
      || sub_7FDF0(a1, "DEBUG = 20, LOG_DEBUG")
      || sub_7FDF0(a1, "INFO = 40, LOG_INFO")
      || sub_7FDF0(a1, "NOTICE = 60, LOG_NOTICE")
      || sub_7FDF0(a1, "WARN = 80, LOG_WARNING")
      || sub_7FDF0(a1, "ERROR = 100, LOG_ERR")
      || sub_7FDF0(a1, "FATAL = 120, LOG_ALERT")
      || sub_7FDF0(a1, "UNKNOWN = 254, LOG_ERR")
      || sub_7FDF0(a1, "! = 255, LOG_INFO");
}
