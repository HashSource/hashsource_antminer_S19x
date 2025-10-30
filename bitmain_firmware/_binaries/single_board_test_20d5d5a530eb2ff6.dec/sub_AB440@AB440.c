int __fastcall sub_AB440(
        int a1,
        int a2,
        unsigned int a3,
        unsigned __int8 **a4,
        unsigned int *a5,
        int a6,
        int a7,
        _DWORD *a8)
{
  int v8; // r4
  int result; // r0
  unsigned __int8 *v12; // r2
  bool v13; // zf
  bool v14; // cc
  unsigned int v15; // r0
  unsigned __int8 *v16; // r7
  int v17; // r3
  unsigned int v18; // r4
  unsigned int v19; // r1
  unsigned __int8 *v20; // [sp+0h] [bp-Ch] BYREF
  int v21; // [sp+4h] [bp-8h] BYREF

  v8 = a7;
  v20 = 0;
  v21 = 0;
  if ( a7 )
    v8 = 1;
  if ( (v8 & (a3 >> 12)) != 0 || !sub_8A40C(a1, &v20, &v21) )
    return 0;
  v12 = v20;
  result = v21;
  *a4 = 0;
  v13 = result == 0;
  if ( result )
    v13 = v12 == 0;
  *a5 = 0;
  if ( !v13 && result >= 0 )
  {
    while ( (unsigned int)result > 5 )
    {
      v14 = (unsigned int)(result - 6) > 1;
      v15 = result - 8;
      v16 = v12 + 8;
      v17 = v12[5] | (v12[4] << 8);
      if ( !v14 )
        break;
      v18 = v12[7] | (v12[6] << 8);
      v14 = v18 > v15;
      v19 = v15 - v18;
      v12 = &v16[v18];
      result = v15 - v18;
      if ( v14 )
        break;
      if ( a2 == v17 )
      {
        *a4 = v16;
        *a5 = v18;
        return 1;
      }
      if ( !v19 )
        return result;
    }
  }
  *a8 = 80;
  return -1;
}
