int __fastcall sub_273B98(int result, int a2, unsigned int a3)
{
  int v3; // r0

  if ( *(int *)(result + 24) >= 0 )
  {
    v3 = *(_DWORD *)(result + 16) - 24;
    if ( 0x7FFFFFFF - *(_DWORD *)(v3 + 4) < a3 )
      sub_33D184("basic_string::append");
    return sub_349270(v3, a2, a3);
  }
  return result;
}
