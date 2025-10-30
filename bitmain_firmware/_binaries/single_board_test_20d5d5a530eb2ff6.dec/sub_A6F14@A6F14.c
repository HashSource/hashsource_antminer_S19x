int __fastcall sub_A6F14(int a1)
{
  int result; // r0
  int v3; // r4

  while ( 1 )
  {
    result = sub_A874C(*(_DWORD *)(*(_DWORD *)(a1 + 128) + 276));
    v3 = result;
    if ( !result )
      break;
    sub_9A264(*(_DWORD *)(result + 8));
    sub_A86B0(v3);
  }
  return result;
}
