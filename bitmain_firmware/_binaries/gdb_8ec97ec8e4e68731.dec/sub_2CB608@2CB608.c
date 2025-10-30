int __fastcall sub_2CB608(int a1, int a2, int *a3)
{
  int v4; // r5
  const char *v6; // r1
  int v7; // r7
  int v8; // r0
  int v9; // r3
  char v10; // r2
  char v11; // r12
  int result; // r0
  int v13; // r3

  v4 = *(_DWORD *)(a2 + 28);
  if ( (*(_BYTE *)a2 & 1) == 0 )
  {
    v6 = ".rela.plt.unloaded";
    v7 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
    if ( (*(_BYTE *)(v7 + 464) & 0x10) == 0 )
      v6 = ".rel.plt.unloaded";
    v8 = sub_2ADB48(a1, v6, (const char *)&loc_104108);
    if ( !v8 )
      return 0;
    *(_DWORD *)(v8 + 64) = *(unsigned __int8 *)(*(_DWORD *)(v7 + 392) + 11);
    *a3 = v8;
  }
  v9 = *(_DWORD *)(v4 + 116);
  if ( v9 )
  {
    v10 = *(_BYTE *)(v9 + 49);
    v11 = *(_BYTE *)(v9 + 52);
    *(_DWORD *)(v9 + 28) = -2;
    *(_BYTE *)(v9 + 49) = v10 & 0xFC;
    *(_BYTE *)(v9 + 52) = v11 & 0xF7;
    if ( !sub_2E0858(a2, v9) )
      return 0;
  }
  v13 = *(_DWORD *)(v4 + 120);
  result = 1;
  if ( v13 )
  {
    *(_DWORD *)(v13 + 28) = -2;
    *(_BYTE *)(v13 + 48) = 2;
  }
  return result;
}
