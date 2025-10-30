bool __fastcall sub_8F098(_DWORD *a1, int a2, int a3)
{
  int v3; // r1
  unsigned __int8 v4; // r2
  unsigned int v6; // r4
  bool v7; // zf

  if ( a1[7] && a1[35] )
  {
    v3 = a1[285];
    v6 = *(unsigned __int8 *)(v3 + 492) - 1;
    v7 = v6 == 3;
    if ( v6 <= 3 )
      v7 = a3 == 0;
    if ( v7 )
    {
      sub_95494(a1, 109, 557, 110, "ssl/statem/extensions.c", 1710);
      return 0;
    }
  }
  else
  {
    v3 = a1[285];
    if ( !v3 )
      return 1;
  }
  v4 = *(_BYTE *)(v3 + 492) - 1;
  if ( v4 > 3u || a1[323] >= (unsigned int)(512 << v4) )
    return 1;
  return sub_7F140(a1) != 0;
}
