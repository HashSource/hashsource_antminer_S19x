void sub_53DD0()
{
  dword_1AEDE4 = (int)sub_49624(0x1000u, "cgminer.c", "load_default_config", 2144);
  sub_53CD4((char *)dword_1AEDE4);
  if ( access((const char *)dword_1AEDE4, 4) )
  {
    free((void *)dword_1AEDE4);
    dword_1AEDE4 = 0;
  }
  else
  {
    sub_51FC0((const char *)dword_1AEDE4);
  }
}
