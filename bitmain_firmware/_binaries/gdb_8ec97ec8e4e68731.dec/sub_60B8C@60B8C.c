int __fastcall sub_60B8C(int result)
{
  _DWORD *v1; // r4
  int v2; // r7
  int v3; // r5

  v1 = (_DWORD *)dword_48769C;
  v2 = dword_487668;
  dword_487668 = dword_48769C;
  if ( dword_48769C )
  {
    for ( result = sub_60A10(result); ; result = sub_60A10(result) )
    {
      v3 = result;
      if ( result )
      {
        sub_18833C(*(_DWORD *)(result + 44));
        result = sub_18833C(*(_DWORD *)(v3 + 48));
      }
      v1 = (_DWORD *)*v1;
      if ( !v1 )
        break;
      dword_487668 = (int)v1;
    }
  }
  dword_487668 = v2;
  return result;
}
