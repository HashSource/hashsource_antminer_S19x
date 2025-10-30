int sub_183DB4()
{
  int v0; // r3
  int result; // r0

  v0 = dword_487918;
  if ( !dword_487918 )
    return 0;
  result = 0;
  do
  {
    v0 = *(_DWORD *)(v0 + 4);
    ++result;
  }
  while ( v0 );
  return result;
}
