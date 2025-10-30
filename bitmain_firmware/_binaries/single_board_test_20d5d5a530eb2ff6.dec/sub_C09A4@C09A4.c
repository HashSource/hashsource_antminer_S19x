int __fastcall sub_C09A4(int a1, int a2)
{
  void (*v4)(void); // r3
  void (__fastcall *v5)(int); // r3

  v4 = *(void (**)(void))(*(_DWORD *)(a1 + 44) + 28);
  if ( v4 )
    v4();
  sub_CDDF8(*(_DWORD *)(a1 + 48));
  v5 = *(void (__fastcall **)(int))(a2 + 24);
  *(_DWORD *)(a1 + 44) = a2;
  *(_DWORD *)(a1 + 48) = 0;
  if ( v5 )
    v5(a1);
  return 1;
}
