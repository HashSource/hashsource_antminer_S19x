int __fastcall sub_82BA0(int a1, int a2, int a3, int a4)
{
  int *v8; // r0
  int v9; // r3

  v8 = _errno_location();
  v9 = *(_DWORD *)(a1 + 124);
  *v8 = 0;
  if ( *(_DWORD *)(v9 + 240) )
    sub_82B40(a1, 0);
  return (*(int (__fastcall **)(int, int, int, int, int))(*(_DWORD *)(a1 + 4) + 60))(a1, 23, a2, a3, a4);
}
