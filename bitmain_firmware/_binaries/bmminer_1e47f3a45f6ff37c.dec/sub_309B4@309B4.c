time_t sub_309B4()
{
  struct sysinfo v1; // [sp+0h] [bp-44h] BYREF

  if ( sysinfo(&v1) )
    return sub_30944();
  else
    return v1.uptime;
}
