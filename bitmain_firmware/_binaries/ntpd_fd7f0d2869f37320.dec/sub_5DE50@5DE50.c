int __fastcall sub_5DE50(int a1, int a2)
{
  int v3; // r9
  int v4; // r8
  int v5; // r0
  int v6; // r4
  _DWORD *v7; // r7
  char v9[20]; // [sp+0h] [bp-18h] BYREF

  sub_6D00C(v9, 20, "/dev/gps%d", a1);
  v3 = sub_3AA90(v9, 0xDu, 1);
  if ( v3 <= 0 )
    return 0;
  v5 = sub_64B04(0, 212, 0, 1);
  v6 = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(v6 + 20) = a2;
  *(_DWORD *)(v6 + 28) = v3;
  *(_DWORD *)(v6 + 12) = sub_5DF7C;
  *(_DWORD *)(v6 + 24) = 0;
  v7 = (_DWORD *)v5;
  v4 = sub_19084((_DWORD *)(v6 + 8));
  if ( v4 )
  {
    v4 = 1;
    *(_DWORD *)v6 = v7;
    *(_BYTE *)(a2 + 95) = -20;
    *(_DWORD *)(v6 + 44) = "Austron 2201A GPS Receiver";
    strcpy((char *)(v6 + 764), "GPS");
    v7[52] = 0;
    *v7 = v7 + 1;
  }
  else
  {
    close(v3);
    *(_DWORD *)(v6 + 28) = -1;
    free(v7);
  }
  return v4;
}
