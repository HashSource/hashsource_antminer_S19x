int *__fastcall sub_332C84(int *result, int a2, int a3)
{
  char *v3; // r5
  int v4; // r3
  unsigned __int16 *v5; // r2
  unsigned int v6; // r3
  unsigned __int16 *v7; // lr
  int v8; // r12
  unsigned int v9; // r3
  bool v10; // cc
  unsigned int v11; // r4
  int v12; // r3
  unsigned int v13; // r2
  int v14; // r3

  if ( a3 <= 0 )
    a2 = 1;
  v3 = (char *)result + 10;
  if ( a3 > 0 )
  {
    v5 = (unsigned __int16 *)&v3[2 * a3];
    v6 = *(_DWORD *)a2;
    v7 = (unsigned __int16 *)result + 5;
    v8 = 10;
    while ( 1 )
    {
      v12 = v6 & 0x3FF;
      if ( v12 )
      {
        v3 = (char *)v7;
        LOWORD(v12) = word_439E94[v12];
      }
      ++v7;
      v11 = v8 + 10;
      *(v7 - 1) = v12;
      if ( v7 == v5 )
        break;
      v9 = *(_DWORD *)a2;
      v10 = v11 > 0x20;
      if ( v11 > 0x20 )
      {
        v11 = *(_DWORD *)(a2 + 4);
        a2 += 4;
      }
      v6 = v9 >> v8;
      v8 -= 22;
      if ( v10 )
        v6 |= v11 << (10 - v8);
      else
        v8 = v11;
    }
    v4 = 3 * ((v3 - ((char *)result + 10)) >> 1);
    a2 = v4 + 1;
  }
  else
  {
    v4 = 0;
  }
  v13 = *(unsigned __int16 *)v3;
  *result = a2;
  if ( v13 > 9 )
  {
    if ( v13 > 0x63 )
      v14 = v4 + 3;
    else
      v14 = v4 + 2;
    *result = v14;
  }
  return result;
}
