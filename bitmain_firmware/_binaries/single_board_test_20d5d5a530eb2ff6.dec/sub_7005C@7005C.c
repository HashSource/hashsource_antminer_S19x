int __fastcall sub_7005C(int a1, int a2, int a3)
{
  int v4; // r5
  int v8; // [sp+4h] [bp-8h] BYREF

  v4 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 32) )
  {
    sub_708F0(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 20), &v8);
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 32))(v8);
  }
  return sub_70914(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 20), a2, a3);
}
