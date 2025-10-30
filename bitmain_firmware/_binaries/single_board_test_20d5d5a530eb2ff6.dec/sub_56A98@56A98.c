_WORD *__fastcall sub_56A98(_WORD *result, int a2)
{
  _WORD *v2; // r4
  _WORD **v3; // r3
  int v4; // [sp+4h] [bp-4h]

  v2 = result + 0x20000;
  if ( *((_BYTE *)result + 262171) )
  {
    if ( !((_DWORD)result << 30) )
    {
      v4 = a2;
      result = sub_52D48(result);
      a2 = v4;
    }
  }
  else
  {
    v3 = (_WORD **)(result + 131074);
    if ( *(_DWORD *)v2 )
    {
      result = *v3;
      *(_DWORD *)v2 -= *v3;
    }
    *v3 = 0;
    *((_DWORD *)v2 + 7) = 0;
  }
  if ( a2 > 0 )
  {
    if ( a2 > 12 )
      LOWORD(a2) = 12;
  }
  else
  {
    LOWORD(a2) = 9;
  }
  v2[12] = a2;
  return result;
}
