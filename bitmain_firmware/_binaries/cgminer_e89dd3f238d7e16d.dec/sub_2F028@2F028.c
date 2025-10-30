int __fastcall sub_2F028(int a1, const char *a2)
{
  char *s1; // [sp+0h] [bp-14h]
  char *dest; // [sp+Ch] [bp-8h]

  s1 = sub_1FC14(a2, a1);
  if ( !sub_2EEF8(a1, s1) )
  {
    sub_5452C(s1, a1 + 164);
    if ( strncmp(s1, "http://", 7u) )
    {
      if ( strncmp(s1, "https://", 8u) )
      {
        dest = (char *)sub_1F934(0x100u, "cgminer.c", "setup_url", 1070);
        strcpy(dest, "stratum+tcp://");
        strncat(dest, s1, 0xF2u);
        sub_2EEF8(a1, dest);
      }
    }
  }
  return *(_DWORD *)(a1 + 164);
}
