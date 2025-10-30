void sub_31BC8()
{
  dword_87E9C = (int)sub_20210(0x1000u, "cgminer.c", "load_default_config", 2211);
  dword_8813C = 0;
  sub_3C7DC(dword_87E9C);
  if ( access((const char *)dword_87E9C, 4) )
  {
    free((void *)dword_87E9C);
    dword_87E9C = 0;
  }
  else
  {
    sub_31A40((const char *)dword_87E9C);
  }
}
