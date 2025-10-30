_DWORD *sub_5226C(_DWORD *result, ...)
{
  int v1; // r5
  unsigned int *v2; // r4
  signed int v3; // r12
  unsigned int v4; // t1
  signed int v5; // r1
  bool v6; // cc
  _BYTE *v7; // r2
  int i; // r3
  int v9; // t1
  bool v11; // zf
  _BOOL4 v12; // r12
  int v13; // r3
  va_list varg_r1; // [sp+24h] [bp+1Ch] BYREF

  va_start(varg_r1, result);
  v1 = 8;
  va_copy(v2, varg_r1);
  do
  {
    v4 = *v2++;
    v3 = v4;
    if ( v4 > 0x20 )
    {
      v13 = result[2];
      v7 = (_BYTE *)(*result + v13);
      if ( v13 > 2 && *(v7 - 3) == 42 )
      {
        i = (unsigned __int8)*(v7 - 2);
        v7 -= 2;
      }
      else
      {
        i = *(unsigned __int8 *)(*result + v13);
      }
    }
    else
    {
      v5 = result[3];
      v6 = v3 < v5;
      if ( v3 >= v5 )
      {
        v7 = (_BYTE *)result[1];
      }
      else
      {
        result[3] = 0;
        v7 = (_BYTE *)*result;
        v5 = 0;
      }
      if ( v6 )
        result[1] = v7;
      for ( i = (unsigned __int8)*v7; v3 > v5; i = (unsigned __int8)*++v7 )
      {
        if ( !i )
          break;
        if ( i == 44 )
          ++v5;
        result[3] = v5;
        result[1] = v7 + 1;
      }
    }
    while ( i && ((i - 42) & 0xFD) != 0 )
    {
      if ( i != 46 )
        *v7 = 95;
      v9 = (unsigned __int8)*++v7;
      i = v9;
    }
    v11 = v1 == 0;
    v12 = v3 >= 0;
    --v1;
    if ( v11 )
      v12 = 0;
  }
  while ( v12 );
  return result;
}
