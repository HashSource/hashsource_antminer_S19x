int __fastcall sub_53770(_DWORD *a1, _DWORD *a2, unsigned __int8 *a3)
{
  __int16 v6; // r12
  unsigned __int8 v7; // r1
  __int16 v8; // r3
  int v9; // r4
  int v10; // r2
  int result; // r0
  _WORD v12[2]; // [sp+0h] [bp-14h] BYREF
  unsigned __int8 v13; // [sp+4h] [bp-10h]
  unsigned __int8 v14; // [sp+5h] [bp-Fh]

  if ( !dword_BE610 )
  {
    if ( !sub_666BC(v12) )
    {
      v13 = 1;
      v14 = 1;
      v12[0] = 2015;
    }
    dword_BE610 = sub_67430(v12);
  }
  v6 = a3[2];
  v7 = *a3;
  v8 = a3[3];
  v13 = a3[1];
  v14 = v7;
  v12[0] = v8 | (v6 << 8);
  v9 = sub_67430(v12);
  sub_66C70(v12, v9);
  if ( v14 != *a3 || v13 != a3[1] || v12[0] != (a3[3] | (a3[2] << 8)) )
    return -1;
  for ( ; v9 < dword_BE610; v9 += 7168 )
    ;
  sub_66C70(v12, v9);
  v10 = v12[0];
  result = v14 | (32 * v13);
  *a2 = v12[1];
  *a1 = v10;
  return result;
}
