int __fastcall sub_14C9EC(int a1, int *a2, _DWORD *a3, int a4)
{
  int v8; // r3
  int v10; // r0
  void *v11; // r9
  int v12; // r4

  if ( *a3 )
    goto LABEL_2;
  v10 = sub_22EBBC(a1);
  v8 = *a2;
  if ( !v10 || *(_DWORD *)(v8 + 8) != 4 )
    return (*(int (__fastcall **)(int, int *, _DWORD *, int))(*(_DWORD *)(v8 + 32) + 20))(a1, a2, a3, a4);
  if ( sub_23EA78(dword_4878EC, dword_4878F0, dword_4878F4) )
  {
LABEL_2:
    v8 = *a2;
    return (*(int (__fastcall **)(int, int *, _DWORD *, int))(*(_DWORD *)(v8 + 32) + 20))(a1, a2, a3, a4);
  }
  v11 = (void *)((int (__fastcall *)(int, int, int))loc_23E9AC)(dword_4878EC, dword_4878F0, dword_4878F4);
  v12 = (*(int (__fastcall **)(int, int *, _DWORD *, int))(*(_DWORD *)(*a2 + 32) + 20))(a1, a2, a3, a4);
  if ( ((int (__fastcall *)(int, int, int, int))loc_23EBFC)(v12, dword_4878EC, dword_4878F0, dword_4878F4) )
    v12 = sub_26E7B4(v12);
  sub_92620(v11);
  return v12;
}
