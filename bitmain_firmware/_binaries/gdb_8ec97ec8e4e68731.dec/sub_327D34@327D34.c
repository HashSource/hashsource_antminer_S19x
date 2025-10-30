int *__fastcall sub_327D34(int *result, int a2, int a3)
{
  int *v3; // r4
  int v4; // r1
  int v5; // r6
  int v6; // r3
  unsigned __int64 v7; // r2
  int v8; // r5
  int v9; // r3

  v3 = result;
  if ( *result <= a2 )
  {
    *((_WORD *)result + 5) = 0;
    *result = 1;
  }
  else
  {
    v4 = *result - a2;
    v5 = (int)result + 10;
    if ( v4 <= 49 )
    {
      v6 = 35608;
    }
    else
    {
      v6 = -1431655765;
      a3 = v4 + 2;
    }
    if ( v4 <= 49 )
    {
      HIWORD(v6) = 67;
      HIDWORD(v7) = *(unsigned __int8 *)(v6 + v4 + 20);
    }
    else
    {
      v7 = (unsigned int)a3 * (unsigned __int64)(unsigned int)v6;
    }
    if ( v4 > 49 )
      HIDWORD(v7) >>= 1;
    v8 = 2 * (HIDWORD(v7) + 0x7FFFFFFF);
    v9 = v4 - 3 * (HIDWORD(v7) - 1);
    if ( v9 != 3 )
      *(_WORD *)(v5 + v8) = (unsigned __int64)sub_347674(*(unsigned __int16 *)(v5 + v8), dword_438D00[v9]) >> 32;
    *v3 = sub_327CA8(v5, (v8 >> 1) + 1);
    return v3;
  }
  return result;
}
