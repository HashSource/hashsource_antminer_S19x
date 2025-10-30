int __fastcall sub_59858(int a1, int a2)
{
  int v4; // r0
  int v5; // r8
  int v6; // r7
  int v7; // r10
  int v8; // r4
  char v10[20]; // [sp+8h] [bp-18h] BYREF

  sub_6C054(v10, 20, "/dev/zyfer%d", a1);
  v4 = sub_3A298(v10, 0xDu, 32);
  v5 = v4;
  if ( v4 <= 0 )
    return 0;
  sub_64E00(5, "zyfer(%d) fd: %d dev <%s>", a1, v4, v10);
  v7 = sub_63BA4(0, 48, 0, 0);
  memset((void *)v7, 0, 0x30u);
  v8 = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(v8 + 20) = a2;
  *(_DWORD *)(v8 + 28) = v5;
  *(_DWORD *)(v8 + 12) = sub_599B8;
  *(_DWORD *)(v8 + 24) = 0;
  v6 = sub_18DF0((int *)(v8 + 8));
  if ( v6 )
  {
    v6 = 1;
    *(_DWORD *)v8 = v7;
    *(_BYTE *)(a2 + 95) = -20;
    *(_DWORD *)(v8 + 44) = "Zyfer GPStarplus";
    strcpy((char *)(v8 + 764), "GPS");
    *(_BYTE *)(v7 + 30) = 0;
    *(_DWORD *)(v7 + 32) = 2;
  }
  else
  {
    close(v5);
    *(_DWORD *)(v8 + 28) = -1;
    free((void *)v7);
  }
  return v6;
}
