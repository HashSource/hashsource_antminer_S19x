int __fastcall sub_52F2C(int result, _DWORD *a2)
{
  _DWORD *v2; // r2
  int v3; // r2
  _DWORD *v4; // r3

  v2 = (_DWORD *)*a2;
  if ( !*a2 )
  {
LABEL_6:
    result = sub_52BF4(a2, (_DWORD *)dword_47475C);
    if ( result )
    {
      if ( *(_DWORD *)(result + 96) )
        result = *(_DWORD *)(result + 96);
    }
    *(_DWORD *)(v3 + 60) = result;
    return result;
  }
  if ( v2 == (_DWORD *)result )
  {
    while ( 1 )
    {
      v4 = (_DWORD *)*v2;
      v2 = (_DWORD *)result;
      if ( !v4 )
        goto LABEL_6;
      if ( (_DWORD *)result != v4 )
        goto LABEL_10;
    }
  }
  v4 = (_DWORD *)*a2;
LABEL_10:
  *(_DWORD *)(result + 60) = v4[15];
  return result;
}
