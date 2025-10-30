char *__fastcall sub_2F3C28(int a1)
{
  char *result; // r0

  result = sub_2AD7AC(*(_DWORD *)(a1 + 48), ".eh_frame");
  if ( result )
  {
    while ( 1 )
    {
      result = (char *)*((_DWORD *)result + 40);
      if ( !result )
        break;
      if ( *((_DWORD *)result + 9) > 8u )
        return (char *)1;
    }
  }
  return result;
}
