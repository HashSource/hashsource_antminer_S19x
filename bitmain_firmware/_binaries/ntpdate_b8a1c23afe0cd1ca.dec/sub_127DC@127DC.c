int __fastcall sub_127DC(_DWORD *a1)
{
  bool v1; // zf
  int result; // r0

  v1 = *a1 == 10;
  if ( *a1 == 10 )
    result = a1[1] & 0xC0FF;
  else
    result = 0;
  if ( v1 )
    return result == 49406;
  return result;
}
