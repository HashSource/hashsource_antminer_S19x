int __fastcall sub_2D6B98(int a1)
{
  int v1; // r0
  bool v2; // cc
  int result; // r0

  v1 = sub_347418(
         *(_DWORD *)(*(_DWORD *)(a1 + 160) + 96),
         *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 392) + 5));
  v2 = v1 <= 0;
  result = 4 * (v1 + 1);
  if ( !v2 )
    result -= 4;
  return result;
}
