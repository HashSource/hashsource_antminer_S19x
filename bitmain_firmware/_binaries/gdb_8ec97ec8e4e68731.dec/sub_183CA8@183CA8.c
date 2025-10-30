int sub_183CA8()
{
  int v0; // r3
  int result; // r0

  v0 = dword_487918;
  if ( !dword_487918 )
    return 0;
  result = *(_DWORD *)(dword_487918 + 12);
  if ( result )
    return 1;
  while ( 1 )
  {
    v0 = *(_DWORD *)(v0 + 4);
    if ( !v0 )
      break;
    if ( *(_DWORD *)(v0 + 12) )
      return 1;
  }
  return result;
}
