int sub_23E4F8()
{
  int v0; // r3
  int result; // r0

  v0 = dword_48A4D4;
  if ( !dword_48A4D4 )
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
