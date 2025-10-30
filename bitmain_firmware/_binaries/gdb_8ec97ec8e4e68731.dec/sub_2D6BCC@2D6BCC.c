int __fastcall sub_2D6BCC(int a1)
{
  int v1; // r3
  int v2; // r0
  bool v3; // cc
  int result; // r0

  v1 = *(_DWORD *)(a1 + 160);
  if ( *(_DWORD *)(v1 + 2324) )
  {
    v2 = sub_347418(
           *(_DWORD *)(v1 + 264),
           *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 392) + 5));
    v3 = v2 <= 0;
    result = 4 * (v2 + 1);
    if ( !v3 )
      result -= 4;
  }
  else
  {
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    return -1;
  }
  return result;
}
