void sub_36080()
{
  dword_B6A08 = sub_3D10C(4096, "bmminer.c", "load_default_config", 971);
  sub_35F84((char *)dword_B6A08);
  if ( access((const char *)dword_B6A08, 4) )
  {
    free((void *)dword_B6A08);
    dword_B6A08 = 0;
  }
  else
  {
    sub_3552C((const char *)dword_B6A08);
  }
}
