void sub_30A88()
{
  dword_86D04 = (int)sub_1F934(0x1000u, "cgminer.c", "load_default_config", 2211);
  dword_86FA4 = 0;
  sub_3B8EC(dword_86D04);
  if ( access((const char *)dword_86D04, 4) )
  {
    free((void *)dword_86D04);
    dword_86D04 = 0;
  }
  else
  {
    sub_30900((const char *)dword_86D04);
  }
}
