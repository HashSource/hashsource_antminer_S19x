bool __fastcall sub_12200(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  bool v3; // zf
  int v4; // r12
  int v6; // r3
  int v7; // lr
  bool v8; // zf
  _BOOL4 v9; // r3
  unsigned __int8 *v10; // r8
  unsigned __int8 *v11; // r5
  unsigned int v12; // r6
  unsigned int v13; // r10

  v3 = a1 == 0;
  if ( a1 )
    v3 = a2 == 0;
  if ( v3 )
    sub_10C38();
  v4 = *a1;
  if ( *a1 != *a2 )
    return 0;
  v6 = a2[5];
  v7 = a1[5];
  v8 = v7 == v6;
  if ( v7 != v6 )
    v8 = v6 == 0;
  v9 = !v8;
  if ( !v8 )
    return 0;
  if ( v4 == 2 )
  {
    v10 = (unsigned __int8 *)(a1 + 1);
    v11 = (unsigned __int8 *)(a2 + 1);
    v12 = 32;
    v13 = 4;
  }
  else
  {
    if ( v4 != 10 )
      return v9;
    v10 = (unsigned __int8 *)(a1 + 1);
    v11 = (unsigned __int8 *)(a2 + 1);
    v12 = 128;
    v13 = 16;
  }
  if ( v12 >= a3 )
    v12 = a3;
  if ( v12 >> 3 && memcmp(v10, v11, v12 >> 3) )
    return 0;
  if ( (v12 & 7) == 0 )
    return 1;
  if ( v13 <= v12 >> 3 )
    sub_10C38();
  return ((v10[v12 >> 3] ^ v11[v12 >> 3]) & (255 << (8 - (v12 & 7)))) == 0;
}
