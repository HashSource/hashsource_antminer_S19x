int __fastcall sub_60B14(int result)
{
  _DWORD *v1; // r4
  int v2; // r8
  int v3; // r7
  int v4; // r5

  v1 = (_DWORD *)dword_48769C;
  v2 = dword_487668;
  dword_487668 = dword_48769C;
  if ( dword_48769C )
  {
    v3 = result;
    for ( result = sub_60A10(result); ; result = sub_60A10(result) )
    {
      v4 = result;
      if ( result )
      {
        sub_188370(*(_DWORD *)(result + 44), v3);
        result = sub_188370(*(_DWORD *)(v4 + 48), v3);
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
