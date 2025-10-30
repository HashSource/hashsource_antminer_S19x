bool __fastcall sub_184BC8(int a1)
{
  _DWORD *v1; // r3

  v1 = (_DWORD *)dword_487944;
  if ( !dword_487944 )
    return (bool)v1;
  while ( a1 != v1[1] )
  {
    v1 = (_DWORD *)*v1;
    if ( !v1 )
      return (bool)v1;
  }
  return !sub_98F78(v1 + 3, &dword_475848);
}
