time_t sub_20A08()
{
  struct sysinfo v1; // [sp+0h] [bp-44h] BYREF

  if ( sysinfo(&v1) )
    return sub_20998();
  else
    return v1.uptime;
}
