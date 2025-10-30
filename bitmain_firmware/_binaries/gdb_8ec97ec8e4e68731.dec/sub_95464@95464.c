int __fastcall sub_95464(void *dest, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // r8
  int v6; // r12
  _DWORD *v7; // r1
  unsigned int v8; // r4
  __int64 v9; // r4
  size_t n; // r6
  int v12; // r0

  HIDWORD(v5) = HIDWORD(a2);
  v6 = *(_DWORD *)(dword_487D2C + 8);
  if ( !v6 )
    return -1;
  v7 = *(_DWORD **)(v6 + 100);
  LODWORD(v5) = a2;
  if ( !v7 )
    return -1;
  while ( 1 )
  {
    if ( (v7[5] & 0xA) == 0xA )
    {
      v8 = v7[7];
      if ( v8 <= a2 )
      {
        v9 = v8 + v7[9];
        if ( (unsigned int)v9 > a2 )
          break;
      }
    }
    v7 = (_DWORD *)v7[3];
    if ( !v7 )
      return -1;
  }
  n = v9 - a2;
  if ( v9 - v5 > a3 )
    n = a3;
  v12 = sub_2ADEDC(v6, (int)v7, dest, a2 - v7[7], a2 - v7[7], (v5 - (unsigned __int64)(unsigned int)v7[7]) >> 32, n);
  if ( !v12 )
    return 0;
  *a4 = v12;
  return 1;
}
