int __fastcall sub_F91C(_DWORD *a1)
{
  int v2; // r6
  const unsigned __int16 **v3; // r0
  unsigned int v4; // r12
  int v5; // lr
  const unsigned __int16 *v6; // r0
  int v7; // r3
  int v8; // t1
  int v9; // r1
  _BOOL4 v10; // r2

  v2 = sub_64B04(0, 12, 0, 1);
  v3 = _ctype_b_loc();
  v4 = 0;
  v5 = a1[1] - 1;
  v6 = *v3;
  while ( 1 )
  {
    v8 = *(unsigned __int8 *)++v5;
    v7 = v8;
    v9 = v6[v8] & 0x800;
    if ( (v6[v8] & 0x800) == 0 )
      break;
    v4 = (v7 - 48 + 10 * v4) | v4 & 0xFF000000;
  }
  v10 = v7 == 0;
  if ( v4 >= 0x10000 )
    v10 = 0;
  if ( v10 )
  {
    *(_WORD *)(v2 + 4) = v4;
    *(_DWORD *)(v2 + 8) = v9;
    sub_F55C(a1);
  }
  else
  {
    *(_WORD *)(v2 + 4) = 0;
    *(_DWORD *)(v2 + 8) = a1;
  }
  return v2;
}
