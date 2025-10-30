int __fastcall sub_BFB64(int a1, int a2)
{
  void (*v4)(void); // r3
  void (__fastcall *v5)(int); // r3

  v4 = *(void (**)(void))(*(_DWORD *)(a1 + 64) + 20);
  if ( v4 )
    v4();
  sub_CDDF8(*(_DWORD *)(a1 + 68));
  v5 = *(void (__fastcall **)(int))(a2 + 16);
  *(_DWORD *)(a1 + 64) = a2;
  *(_DWORD *)(a1 + 68) = 0;
  if ( v5 )
    v5(a1);
  return 1;
}
