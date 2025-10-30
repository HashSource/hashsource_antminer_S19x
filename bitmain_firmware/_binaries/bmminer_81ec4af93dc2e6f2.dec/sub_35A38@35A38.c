void sub_35A38()
{
  dword_B3C98 = sub_3C908(4096, "bmminer.c", "load_default_config", 971);
  sub_3593C((char *)dword_B3C98);
  if ( access((const char *)dword_B3C98, 4) )
  {
    free((void *)dword_B3C98);
    dword_B3C98 = 0;
  }
  else
  {
    sub_34EA4((const char *)dword_B3C98);
  }
}
