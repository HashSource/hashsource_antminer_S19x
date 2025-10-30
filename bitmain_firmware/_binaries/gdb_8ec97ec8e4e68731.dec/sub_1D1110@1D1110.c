_DWORD *__fastcall sub_1D1110(_DWORD *a1, char *a2)
{
  _DWORD *result; // r0
  int v5; // r4

  result = sub_1D0878(a1, 1);
  v5 = result[6];
  if ( v5 )
  {
    while ( 1 )
    {
      result = a1;
      if ( *(_BYTE *)(v5 + 52) )
        goto LABEL_4;
      if ( sub_1D0098((int)a1, (_DWORD *)v5, a2, 1, 1)
        || (result = (_DWORD *)sub_1D0098((int)a1, (_DWORD *)v5, a2, 0, 1)) != 0 )
      {
        result = (_DWORD *)sub_1CE1F0((int)a1, v5);
LABEL_4:
        v5 = *(_DWORD *)v5;
        if ( !v5 )
          return result;
      }
      else
      {
        v5 = *(_DWORD *)v5;
        if ( !v5 )
          return result;
      }
    }
  }
  return result;
}
