int __fastcall sub_2906D0(int a1)
{
  int v1; // r6
  char *v2; // r0
  const char *v3; // r5
  const char *v4; // r0

  if ( dword_490140 )
  {
    sub_28D00C((const char *)dword_48AE34);
    tputs((const char *)dword_490140, 1, (int (*)(int))sub_293B80);
    dword_48AE04 = 0;
    if ( dword_49011C )
    {
      tputs((const char *)dword_49011C, 1, (int (*)(int))sub_293B80);
    }
    else
    {
      sub_28C3E0(dword_490144);
      tputs((const char *)dword_490140, 1, (int (*)(int))sub_293B80);
    }
    if ( dword_48AE2C > 0 )
      sub_28D00C(0);
  }
  else
  {
    sub_2945A8(a1);
  }
  v1 = dword_48AE3C;
  v2 = strrchr((const char *)dword_48AE3C, 10);
  if ( !v2 )
    return sub_28CC28();
  v3 = v2 + 1;
  sub_28D354();
  dword_48AE3C = (int)v3;
  v4 = sub_28C61C(v3, (size_t *)&dword_48AE24, &dword_48AE20, &dword_48AE1C, (size_t *)&dword_48AE10);
  dword_48AE0C = (int)v4;
  dword_48AE18 = 0;
  if ( v4 )
    v4 = (const char *)strlen(v4);
  dword_48AE08 = (int)v4;
  sub_28CC28();
  dword_48AE3C = v1;
  return sub_28D478();
}
