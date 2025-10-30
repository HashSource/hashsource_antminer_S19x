int sub_243C34()
{
  int result; // r0

  if ( !dword_48A50C && !dword_48A510 )
  {
    result = *(_DWORD *)(dword_487668 + 48);
    if ( result == *(_DWORD *)(dword_487668 + 44) )
      *(_BYTE *)dword_48A4EC = 0;
  }
  return result;
}
