int __fastcall sub_524A8(_DWORD *a1, _DWORD *a2, unsigned __int8 *a3)
{
  char v6; // r1
  unsigned __int16 v7; // r3
  int v8; // r4
  int v9; // r3
  int result; // r0
  _WORD v11[2]; // [sp+0h] [bp-14h] BYREF
  __int16 v12; // [sp+4h] [bp-10h]

  if ( !dword_BD5F8 )
  {
    if ( !sub_6568C(v11) )
    {
      v12 = 257;
      v11[0] = 2015;
    }
    dword_BD5F8 = sub_66428(v11);
  }
  v6 = *a3;
  v7 = _byteswap_ushort(*((_WORD *)a3 + 1));
  LOBYTE(v12) = a3[1];
  HIBYTE(v12) = v6;
  v11[0] = v7;
  v8 = sub_66428(v11);
  sub_65BF4(v11, v8);
  if ( __PAIR64__((unsigned __int8)v12, HIBYTE(v12)) != __PAIR64__(a3[1], *a3) || v11[0] != (a3[3] | (a3[2] << 8)) )
    return -1;
  for ( ; v8 < dword_BD5F8; v8 += 7168 )
    ;
  sub_65BF4(v11, v8);
  v9 = v11[0];
  result = HIBYTE(v12) | (32 * (unsigned __int8)v12);
  *a2 = v11[1];
  *a1 = v9;
  return result;
}
