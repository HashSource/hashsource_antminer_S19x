int sub_1C624()
{
  _DWORD *v0; // r3
  int result; // r0

  v0 = (_DWORD *)dword_BA3D8;
  if ( !dword_BA3D8 )
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
