int __fastcall sub_273A34(int a1, int a2, unsigned int a3)
{
  _DWORD *v3; // r3
  int result; // r0

  v3 = *(_DWORD **)(a1 + 8);
  result = v3[1];
  if ( !result )
  {
    if ( 0x7FFFFFFF - *(_DWORD *)(*v3 + 4) < a3 )
      sub_33D184("basic_string::append");
    return sub_349270(*v3, a2, a3);
  }
  return result;
}
