void sub_2D8F0()
{
  dword_68EF4 = (int)sub_229BC(0x1000u, "cgminer.c", "load_default_config", 2149);
  sub_2D7F4((char *)dword_68EF4);
  if ( access((const char *)dword_68EF4, 4) )
  {
    free((void *)dword_68EF4);
    dword_68EF4 = 0;
  }
  else
  {
    sub_2B890((const char *)dword_68EF4);
  }
}
