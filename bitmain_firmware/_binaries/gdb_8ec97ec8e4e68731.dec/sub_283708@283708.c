int __fastcall sub_283708(int a1)
{
  char *v1; // r0
  _BYTE *v2; // r6

  v1 = (char *)sub_2978A8(a1);
  dword_48ABC8 = (int)v1;
  dword_48ABD0 = 0;
  dword_48ABCC = dword_4900D8;
  if ( dword_4900D8 )
  {
    v2 = (_BYTE *)dword_48ABD4;
    if ( dword_4900D8 >= dword_48ABD8 - 2 )
    {
      dword_48ABD8 = dword_4900D8 + 2;
      v2 = sub_93050((void *)dword_48ABD4, dword_4900D8 + 2);
      dword_48ABD4 = (int)v2;
    }
    *v2 = 94;
    v1 = strncpy(v2 + 1, (const char *)dword_48AAD4, dword_4900D8);
    v2[dword_4900D8 + 1] = 0;
  }
  return sub_297328(v1);
}
