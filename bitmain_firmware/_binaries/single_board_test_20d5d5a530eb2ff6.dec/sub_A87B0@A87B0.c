int __fastcall sub_A87B0(int a1, int a2)
{
  __int64 v2; // r10
  unsigned __int64 v3; // r2
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r4
  __int64 v6; // r2
  bool v7; // cf
  unsigned int v8; // r6
  _BOOL4 v10; // r4
  int v11; // r2

  LODWORD(v2) = *(unsigned __int8 *)(a1 + 3879);
  HIDWORD(v2) = _byteswap_ulong(*(_DWORD *)(a1 + 3872));
  HIDWORD(v3) = _byteswap_ulong(*(_DWORD *)(a2 + 4));
  LODWORD(v3) = (*(unsigned __int8 *)(a2 + 8) << 24)
              | *(unsigned __int8 *)(a2 + 11)
              | (*(unsigned __int8 *)(a2 + 9) << 16);
  v4 = v2
     | (*(unsigned __int8 *)(a1 + 3876) << 24)
     | (*(unsigned __int8 *)(a1 + 3877) << 16)
     | (*(unsigned __int8 *)(a1 + 3878) << 8);
  v5 = (*(unsigned __int8 *)(a2 + 10) << 8) | v3;
  v6 = v4 - v5;
  v7 = HIDWORD(v5) >= HIDWORD(v2);
  if ( HIDWORD(v5) == HIDWORD(v2) )
    v7 = (unsigned int)v5 >= (unsigned int)v4;
  v8 = (unsigned int)((v4 - v5) >> 32) >> 31;
  if ( v7 )
    v8 = 0;
  if ( v8 )
    goto LABEL_6;
  v10 = v4 < v5;
  if ( v6 < 1 )
    v10 = 0;
  if ( v10 )
    return 0;
  if ( v6 >= 129 || v6 >= -128 && ((int)v6 > 0 || (v11 = -(int)v6, v11 <= 31) && ((*(_DWORD *)a2 >> v11) & 1) == 0) )
  {
LABEL_6:
    sub_7F21C(a1 + 2296, (_DWORD *)(a1 + 3872));
    return 1;
  }
  return 0;
}
