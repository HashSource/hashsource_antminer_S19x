int __fastcall sub_5BD80(int a1, int a2)
{
  int v3; // r8
  int v4; // r7
  int v5; // r0
  _DWORD *v6; // r4
  void *v7; // r9
  unsigned int v8; // r2
  const char *v9; // r1
  char v11[20]; // [sp+0h] [bp-18h] BYREF

  sub_6C054(v11, 20, "/dev/gps%d", a1);
  v3 = sub_3A298(v11, 0xDu, 1);
  if ( v3 <= 0 )
    return 0;
  v5 = sub_63BA4(0, 136, 0, 1);
  v6 = *(_DWORD **)(a2 + 84);
  v7 = (void *)v5;
  v6[5] = a2;
  v6[7] = v3;
  v6[3] = sub_5B730;
  v6[6] = 0;
  v4 = sub_18DF0(v6 + 2);
  if ( !v4 )
  {
LABEL_10:
    close(v3);
    v6[7] = -1;
    free(v7);
    return v4;
  }
  *v6 = v7;
  *(_BYTE *)(a2 + 95) = -20;
  v6[191] = *(_DWORD *)"GPS ";
  v8 = *(_DWORD *)(a2 + 76);
  v6[11] = "Arbiter 1088A/B GPS Receiver";
  if ( v8 > 1 )
  {
    v4 = 0;
    sub_64E00(5, "ARBITER: Invalid mode %d", v8);
    goto LABEL_10;
  }
  if ( v8 )
    v9 = "O0";
  else
    v9 = "B0";
  v4 = 1;
  write(v6[7], v9, 2u);
  return v4;
}
