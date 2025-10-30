int __fastcall sub_83E20(const char *a1)
{
  if ( a1 )
  {
    if ( !strcasecmp(a1, "LOG_LOCAL0") )
    {
      return 128;
    }
    else if ( !strcasecmp(a1, "LOG_LOCAL1") )
    {
      return 136;
    }
    else if ( !strcasecmp(a1, "LOG_LOCAL2") )
    {
      return 144;
    }
    else if ( !strcasecmp(a1, "LOG_LOCAL3") )
    {
      return 152;
    }
    else if ( !strcasecmp(a1, "LOG_LOCAL4") )
    {
      return 160;
    }
    else if ( !strcasecmp(a1, "LOG_LOCAL5") )
    {
      return 168;
    }
    else if ( !strcasecmp(a1, "LOG_LOCAL6") )
    {
      return 176;
    }
    else if ( !strcasecmp(a1, "LOG_LOCAL7") )
    {
      return 184;
    }
    else if ( !strcasecmp(a1, "LOG_USER") )
    {
      return 8;
    }
    else if ( !strcasecmp(a1, "LOG_AUTHPRIV") )
    {
      return 80;
    }
    else if ( !strcasecmp(a1, "LOG_CRON") )
    {
      return 72;
    }
    else if ( !strcasecmp(a1, "LOG_DAEMON") )
    {
      return 24;
    }
    else if ( !strcasecmp(a1, "LOG_FTP") )
    {
      return 88;
    }
    else if ( !strcasecmp(a1, "LOG_KERN") )
    {
      return 0;
    }
    else if ( !strcasecmp(a1, "LOG_LPR") )
    {
      return 48;
    }
    else if ( !strcasecmp(a1, "LOG_MAIL") )
    {
      return 16;
    }
    else if ( !strcasecmp(a1, "LOG_NEWS") )
    {
      return 56;
    }
    else if ( !strcasecmp(a1, "LOG_SYSLOG") )
    {
      return 40;
    }
    else
    {
      return 80;
    }
  }
  else
  {
    sub_89984(2, "src/rule.c", 477, "facility is null or 0");
    return -187;
  }
}
