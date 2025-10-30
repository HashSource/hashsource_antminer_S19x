int __fastcall sub_AB4D4(int a1, int a2, unsigned __int8 **a3, unsigned int *a4, _DWORD *a5)
{
  int result; // r0
  unsigned __int8 *v9; // r3
  bool v10; // zf
  bool v11; // cc
  unsigned int v12; // r0
  unsigned __int8 *v13; // lr
  int v14; // r1
  unsigned int v15; // r2
  unsigned int v16; // r7
  unsigned __int8 *v17; // [sp+0h] [bp-Ch] BYREF
  int v18; // [sp+4h] [bp-8h] BYREF

  v18 = 0;
  v17 = 0;
  result = sub_8A40C(a1, &v17, &v18);
  if ( result )
  {
    v9 = v17;
    result = v18;
    *a3 = 0;
    *a4 = 0;
    v10 = result == 0;
    if ( result )
      v10 = v9 == 0;
    if ( !v10 && result >= 0 )
    {
      while ( (unsigned int)result > 5 )
      {
        v11 = (unsigned int)(result - 6) > 1;
        v12 = result - 8;
        v13 = v9 + 8;
        v14 = v9[5] | (v9[4] << 8);
        if ( !v11 )
          break;
        v15 = v9[7] | (v9[6] << 8);
        v11 = v15 > v12;
        v16 = v12 - v15;
        v9 = &v13[v15];
        result = v12 - v15;
        if ( v11 )
          break;
        if ( a2 == v14 )
        {
          *a3 = v13;
          *a4 = v15;
          return 1;
        }
        if ( !v16 )
          return result;
      }
    }
    *a5 = 80;
    return -1;
  }
  return result;
}
