int *__fastcall sub_71CE8(int *result)
{
  _BYTE *v1; // r1
  int v2; // r12
  _BYTE *v3; // r1
  int v4; // r2

  if ( result )
  {
    v1 = (_BYTE *)result[1];
    result[4] = 0;
    *v1 = 0;
    v2 = dword_474948;
    *(_BYTE *)(result[1] + 1) = 0;
    v3 = (_BYTE *)result[1];
    result[11] = 0;
    result[7] = 1;
    result[2] = (int)v3;
    if ( v2 )
    {
      if ( result == *(int **)(v2 + 4 * dword_47494C) )
      {
        v4 = *result;
        dword_4748EC = (int)v3;
        result = (int *)result[4];
        dword_474A5C = v4;
        LOBYTE(v4) = *v3;
        dword_4748F0 = (int)v3;
        dword_474950 = (int)result;
        byte_474944 = v4;
      }
    }
  }
  return result;
}
