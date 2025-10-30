int __fastcall sub_59BB4(int a1, int a2)
{
  int *v3; // r4
  int v4; // r0
  int v5; // r12
  int v6; // r2

  v3 = *(int **)(a2 + 84);
  v3[11] = (int)"Spectracom TSYNC-PCI";
  v3[3] = 0;
  v3[6] = 0;
  v3[5] = a2;
  *(_BYTE *)(a2 + 95) = -20;
  v4 = sub_63BA4(0, 12, 0, 0);
  if ( !v4 )
    return 0;
  v6 = *(_DWORD *)(a2 + 68);
  v5 = 1;
  *(_BYTE *)(v4 + 8) = 16;
  *(_DWORD *)v4 = v6 & 0x20;
  *(_DWORD *)(v4 + 4) = *(_DWORD *)"LOCL";
  v3[191] = *(_DWORD *)"LOCL";
  *v3 = v4;
  return v5;
}
