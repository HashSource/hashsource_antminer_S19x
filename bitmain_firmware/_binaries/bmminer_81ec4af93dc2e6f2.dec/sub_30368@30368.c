time_t sub_30368()
{
  struct sysinfo v1; // [sp+0h] [bp-44h] BYREF

  if ( sysinfo(&v1) )
    return sub_302F8();
  else
    return v1.uptime;
}
