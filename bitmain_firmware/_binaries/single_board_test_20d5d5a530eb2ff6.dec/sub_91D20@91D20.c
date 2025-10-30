int __fastcall sub_91D20(int a1)
{
  int v1; // r1

  v1 = *(_DWORD *)(a1 + 140);
  **(_DWORD **)(a1 + 124) |= 0x200u;
  if ( !v1 )
    *(_DWORD *)(*(_DWORD *)(a1 + 1140) + 508) |= 1u;
  return 1;
}
