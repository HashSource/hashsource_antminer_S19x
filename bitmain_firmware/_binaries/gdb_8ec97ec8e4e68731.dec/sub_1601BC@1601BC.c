void __fastcall sub_1601BC(int a1)
{
  _DWORD *v1; // r3
  int v3; // r0
  int v4; // r1
  _DWORD *v5; // r0
  int v6; // r0
  _DWORD *v7; // r4
  void *v8; // r0
  void *v9; // r0
  void *ptr[6]; // [sp+14h] [bp-18h] BYREF

  v1 = *(_DWORD **)(a1 + 16);
  if ( !v1 )
  {
    sub_160DD4(a1, a1 + 12);
    v1 = *(_DWORD **)(a1 + 16);
  }
  if ( *v1 == 1 )
  {
    ((void (__fastcall *)(void **, int))loc_15CFA0)(ptr, a1);
    ((void (__fastcall *)(void *, void *, void *, void *, void *, int, int, int))loc_10D524)(
      ptr[0],
      ptr[1],
      ptr[2],
      ptr[3],
      ptr[4],
      dword_4878EC,
      dword_4878F0,
      dword_4878F4);
  }
  else
  {
    v3 = sub_15F8A0(a1);
    if ( !v3 )
      sub_946E0("Cannot pop the initial frame.");
    v4 = sub_15FDF4(v3);
    if ( !v4 )
      sub_946E0("Cannot find the caller frame.");
    v5 = sub_160144(ptr, v4);
    v6 = sub_1DDBBC(v5);
    ((void (__fastcall *)(int, void *))loc_1DE518)(v6, ptr[0]);
    sub_15D778();
    v7 = ptr[0];
    if ( ptr[0] )
    {
      v8 = (void *)*((_DWORD *)ptr[0] + 2);
      if ( v8 )
        free(v8);
      v9 = (void *)v7[3];
      if ( v9 )
        free(v9);
      sub_33AC04(v7);
    }
  }
}
