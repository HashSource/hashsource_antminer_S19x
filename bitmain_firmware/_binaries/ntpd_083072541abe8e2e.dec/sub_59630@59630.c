int __fastcall sub_59630(int a1, int a2)
{
  int v3; // r8
  int v4; // r7
  int v5; // r0
  _DWORD *v6; // r4
  void *v7; // r9
  char v9[20]; // [sp+0h] [bp-1Ch] BYREF

  sub_6C054(v9, 20, "/dev/wwvb%d", a1);
  v3 = sub_3A298(v9, 0xDu, 1);
  if ( v3 <= 0 )
    return 0;
  v5 = sub_63BA4(0, 16, 0, 1);
  v6 = *(_DWORD **)(a2 + 84);
  v7 = (void *)v5;
  v6[5] = a2;
  v6[7] = v3;
  v6[3] = sub_59238;
  v6[6] = 0;
  v4 = sub_18DF0(v6 + 2);
  if ( v4 )
  {
    v4 = 1;
    *v6 = v7;
    *(_BYTE *)(a2 + 95) = -13;
    v6[11] = "Spectracom WWVB/GPS Receiver";
    v6[191] = *(_DWORD *)"WWVB";
  }
  else
  {
    close(v3);
    v6[7] = -1;
    free(v7);
  }
  return v4;
}
