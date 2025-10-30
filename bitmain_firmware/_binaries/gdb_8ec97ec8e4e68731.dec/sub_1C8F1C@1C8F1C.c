int sub_1C8F1C()
{
  _DWORD *v0; // r4
  int result; // r0

  v0 = (_DWORD *)dword_487CEC;
  if ( dword_487CEC )
  {
    do
    {
      result = sub_1C8AB0((int)v0);
      v0 = (_DWORD *)*v0;
    }
    while ( v0 );
  }
  return result;
}
