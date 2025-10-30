int __fastcall sub_B9070(const char *a1)
{
  char *v2; // r4
  int v3; // r0
  int v4; // r4
  _DWORD *v6; // r0
  char *s1; // [sp+4h] [bp-8h] BYREF

  s1 = (char *)sub_327254(a1);
  sub_25B324((int)&s1, "$datadir");
  sub_25B324((int)&s1, "$debugdir");
  v2 = s1;
  if ( dword_478228 )
  {
    v3 = strcmp(s1, a1);
    if ( v3 )
    {
      v6 = (_DWORD *)sub_242FC8(v3);
      sub_2594B0(*v6, "auto-load: Expanded $-variables to \"%s\".\n", s1);
      v2 = s1;
    }
  }
  v4 = sub_9832C(v2);
  if ( s1 )
    free(s1);
  return v4;
}
