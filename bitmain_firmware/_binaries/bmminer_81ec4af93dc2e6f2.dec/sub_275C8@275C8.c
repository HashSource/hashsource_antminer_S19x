int sub_275C8()
{
  int v0; // r4
  int result; // r0

  v0 = 0;
  result = sub_266F0(0);
  if ( result )
    goto LABEL_4;
  while ( ++v0 != 4 )
  {
    result = sub_266F0(v0);
    if ( result )
LABEL_4:
      result = sub_767A4((unsigned __int8)v0, 0);
  }
  return result;
}
