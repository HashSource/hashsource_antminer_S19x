int __fastcall sub_204F60(int a1, int a2, int a3, int a4)
{
  const char *v8; // r5
  int v10; // r9
  int v11; // r0
  int v12; // r0
  int v13; // r5
  void *v14; // r0
  void *v15; // r9

  if ( !*(_DWORD *)(a1 + 20) )
  {
    v12 = sub_204098(*(const char **)(a1 + 12), *(const char **)(*(_DWORD *)(a1 + 4) + 28), (const char **)(a1 + 28));
    v13 = v12;
    if ( v12 >= 0 )
    {
      sub_969F4(v12);
      v15 = v14;
      if ( !*(_DWORD *)(a1 + 20) )
        ((void (__fastcall *)(int, int))loc_204438)(a1, v13);
      sub_92620(v15);
    }
  }
  v8 = *(const char **)(a1 + 28);
  if ( !v8 || *(_DWORD *)(a1 + 16) < a2 )
    return 0;
  v10 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4 * (a2 + 0x3FFFFFFF));
  v11 = sub_1B7250(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4));
  sub_B7B48(v8, a2, v10, a3, v11, a4);
  dword_4893FC = a2;
  dword_4893EC = a1;
  dword_489400 = 0;
  dword_489404 = 0;
  return 1;
}
