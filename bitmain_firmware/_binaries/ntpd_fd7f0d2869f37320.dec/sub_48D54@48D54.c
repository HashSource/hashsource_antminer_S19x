int __fastcall sub_48D54(int a1, int a2)
{
  __int16 v3; // r2
  speed_t v4; // r1
  int v5; // r9
  int v6; // r7
  int v7; // r0
  int v8; // r4
  _DWORD *v9; // r6
  int v10; // r0
  char v12[20]; // [sp+0h] [bp-18h] BYREF

  sub_6D00C(v12, 20, "/dev/hpgps%d", a1);
  v3 = 257;
  if ( *(_DWORD *)(a2 + 76) == 1 )
  {
    v4 = 14;
  }
  else
  {
    v3 = 1;
    v4 = 13;
  }
  v5 = sub_3AA90(v12, v4, v3);
  if ( v5 <= 0 )
    return 0;
  v7 = sub_64B04(0, 1864, 0, 1);
  v8 = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(v8 + 20) = a2;
  *(_DWORD *)(v8 + 28) = v5;
  *(_DWORD *)(v8 + 12) = sub_48ED0;
  *(_DWORD *)(v8 + 24) = 0;
  v9 = (_DWORD *)v7;
  v6 = sub_19084((_DWORD *)(v8 + 8));
  if ( v6 )
  {
    *(_DWORD *)v8 = v9;
    *(_BYTE *)(a2 + 95) = -10;
    *(_DWORD *)(v8 + 44) = "HP 58503A GPS Time and Frequency Reference Receiver";
    v6 = 1;
    strcpy((char *)(v8 + 764), "GPS");
    v9[1] = 0;
    v9[2] = 0;
    *((_BYTE *)v9 + 20) = 0;
    *v9 = 2;
    v10 = *(_DWORD *)(v8 + 28);
    v9[4] = v9 + 5;
    v9[3] = 1;
    if ( write(v10, "*IDN?\r:PTIME:TZONE?\r", 0x14u) != 20 )
      sub_39C88(a2, 3);
  }
  else
  {
    close(v5);
    *(_DWORD *)(v8 + 28) = -1;
    free(v9);
  }
  return v6;
}
