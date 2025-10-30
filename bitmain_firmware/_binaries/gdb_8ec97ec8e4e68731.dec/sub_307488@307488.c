int __fastcall sub_307488(_DWORD *a1)
{
  void (__fastcall *v2)(_DWORD); // r9
  int v3; // r1
  int v4; // r8
  int v5; // r4
  _DWORD *v6; // r6
  bool v7; // cc
  _BOOL4 v8; // r7

  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  v2 = (void (__fastcall *)(_DWORD))a1[9];
  if ( !v2 )
    return -2;
  v4 = sub_307334((int)a1);
  if ( v4 )
    return -2;
  v5 = v3;
  v6 = (_DWORD *)a1[7];
  if ( v3 >= 0 )
  {
    if ( v3 <= 47 )
      v5 = v3 & 0xF;
    v4 = (v3 >> 4) + 5;
  }
  else
  {
    v5 = -v3;
  }
  v7 = v5 != 0;
  if ( v5 )
    v7 = (unsigned int)(v5 - 8) > 7;
  v8 = v7;
  if ( v7 )
    return -2;
  if ( v6[14] )
  {
    if ( v5 != v6[10] )
    {
      v2(a1[10]);
      v6[14] = v8;
    }
  }
  v6[3] = v4;
  v6[10] = v5;
  return sub_307428((int)a1);
}
