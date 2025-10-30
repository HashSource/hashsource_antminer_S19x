int __fastcall sub_8EFA4(const char *a1)
{
  if ( a1 )
  {
    if ( !strcasecmp(a1, "LOG_EMERG") )
    {
      return 0;
    }
    else if ( !strcasecmp(a1, "LOG_ALERT") )
    {
      return 1;
    }
    else if ( !strcasecmp(a1, "LOG_CRIT") )
    {
      return 2;
    }
    else if ( !strcasecmp(a1, "LOG_ERR") )
    {
      return 3;
    }
    else if ( !strcasecmp(a1, "LOG_WARNING") )
    {
      return 4;
    }
    else if ( !strcasecmp(a1, "LOG_NOTICE") )
    {
      return 5;
    }
    else if ( !strcasecmp(a1, "LOG_INFO") )
    {
      return 6;
    }
    else if ( !strcasecmp(a1, "LOG_DEBUG") )
    {
      return 7;
    }
    else
    {
      sub_8CD10(2, "src/level.c", 63, "wrong syslog level[%s]", a1);
      return -187;
    }
  }
  else
  {
    sub_8CD10(2, "src/level.c", 44, "str is null or 0");
    return -187;
  }
}
