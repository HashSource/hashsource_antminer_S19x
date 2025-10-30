int __fastcall sub_5880C(int a1, int a2, int a3)
{
  int v7; // [sp+10h] [bp-Ch] BYREF
  int v8; // [sp+14h] [bp-8h]

  v8 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(*(_DWORD *)v8 + 32) )
  {
    sub_5A078(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 20), &v7);
    (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 32))(v7);
  }
  return sub_5A0F4(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 20), a2, a3);
}
