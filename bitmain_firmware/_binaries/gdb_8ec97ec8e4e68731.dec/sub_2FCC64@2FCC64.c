int __fastcall sub_2FCC64(int result, int a2)
{
  int v3; // r4
  int v4; // r3
  int v5; // r3

  v3 = result;
  if ( *(_DWORD *)(a2 + 16) )
    result = sub_2A6BBC("linker.c", 666);
  v4 = *(_DWORD *)(v3 + 32);
  if ( v4 )
    *(_DWORD *)(v4 + 16) = a2;
  v5 = *(_DWORD *)(v3 + 28);
  *(_DWORD *)(v3 + 32) = a2;
  if ( !v5 )
    *(_DWORD *)(v3 + 28) = a2;
  return result;
}
