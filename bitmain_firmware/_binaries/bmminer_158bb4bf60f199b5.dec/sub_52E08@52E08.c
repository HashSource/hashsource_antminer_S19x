int __fastcall sub_52E08(int a1, char *s1)
{
  char *v3; // r5
  char *v5; // r6

  v3 = sub_4AAB4(s1, a1);
  if ( !sub_52D98(a1, v3) )
  {
    sub_64370(v3, a1 + 164);
    if ( strncmp(v3, "http://", 7u) )
    {
      if ( strncmp(v3, "https://", 8u) )
      {
        v5 = (char *)sub_49624(0x100u, "cgminer.c", "setup_url", 1037);
        strcpy(v5, "stratum+tcp://");
        strncat(v5, v3, 0xF2u);
        sub_52D98(a1, v5);
      }
    }
  }
  return *(_DWORD *)(a1 + 164);
}
