int __fastcall sub_11DB78(int a1, int a2, int a3, _DWORD *a4)
{
  void *v6; // r4
  int v7; // r5
  int v9; // r6

  v6 = (void *)sub_11D870(a1, a4);
  if ( a3 )
  {
    v7 = sub_1A37E8(a3, a2, v6);
  }
  else
  {
    v9 = ((int (*)(void))loc_E6190)();
    v7 = ((int (__fastcall *)(int, void *))loc_1A3448)(v9, v6);
    sub_1A3B48(v9);
  }
  if ( v6 )
    free(v6);
  return v7;
}
