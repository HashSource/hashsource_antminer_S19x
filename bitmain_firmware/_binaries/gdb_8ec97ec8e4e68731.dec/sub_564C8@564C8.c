int __fastcall sub_564C8(int result)
{
  _DWORD *v1; // r4
  int v2; // r7
  int v3; // r6
  int i; // r0

  v1 = (_DWORD *)dword_48769C;
  v2 = dword_487668;
  dword_487668 = dword_48769C;
  if ( dword_48769C )
  {
    v3 = result;
    for ( i = sub_191AC0(result); ; i = sub_191AC0(result) )
    {
      result = sub_5634C(i);
      if ( result )
        result = sub_188438(*(_DWORD *)(result + 16), v3);
      v1 = (_DWORD *)*v1;
      if ( !v1 )
        break;
      dword_487668 = (int)v1;
    }
  }
  dword_487668 = v2;
  return result;
}
