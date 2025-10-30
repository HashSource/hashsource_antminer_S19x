int sub_1CD360()
{
  _DWORD *v0; // r3
  int result; // r0

  v0 = (_DWORD *)dword_487D28;
  if ( !dword_487D28 )
    return 0;
  result = 0;
  do
  {
    v0 = (_DWORD *)*v0;
    ++result;
  }
  while ( v0 );
  return result;
}
