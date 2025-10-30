int __fastcall sub_F812C(int a1, int a2)
{
  void (*v4)(void); // r3
  void (__fastcall *v5)(int); // r3

  v4 = *(void (**)(void))(*(_DWORD *)(a1 + 8) + 32);
  if ( v4 )
    v4();
  sub_CDDF8(*(_DWORD *)(a1 + 12));
  v5 = *(void (__fastcall **)(int))(a2 + 28);
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = 0;
  if ( v5 )
    v5(a1);
  return 1;
}
