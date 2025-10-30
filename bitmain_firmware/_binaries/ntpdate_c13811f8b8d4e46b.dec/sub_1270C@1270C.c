int __fastcall sub_1270C(_DWORD *a1)
{
  bool v1; // zf
  int result; // r0

  v1 = *a1 == 2;
  if ( *a1 == 2 )
    result = a1[1];
  else
    result = 0;
  if ( v1 )
    return (result & 0xF0) == 240;
  return result;
}
