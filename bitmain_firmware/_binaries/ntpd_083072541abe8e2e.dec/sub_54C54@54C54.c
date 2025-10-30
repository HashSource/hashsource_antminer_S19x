int __fastcall sub_54C54(int a1, int a2)
{
  int v3; // r9
  int v4; // r7
  int v5; // r0
  _DWORD *v6; // r4
  _DWORD *v7; // r10
  char v9[40]; // [sp+4h] [bp-2Ch] BYREF

  sub_6C054(v9, 40, "/dev/true%d", a1);
  v3 = sub_3A298(v9, 0xDu, 1);
  if ( v3 <= 0 )
    return 0;
  v5 = sub_63BA4(0, 28, 0, 1);
  v6 = *(_DWORD **)(a2 + 84);
  v7 = (_DWORD *)v5;
  v6[5] = a2;
  v6[7] = v3;
  v6[3] = sub_5476C;
  v6[6] = 0;
  v4 = sub_18DF0(v6 + 2);
  if ( v4 )
  {
    v4 = 1;
    *v6 = v7;
    *(_BYTE *)(a2 + 95) = -10;
    v6[11] = "Kinemetrics/TrueTime Receiver";
    v6[191] = *(_DWORD *)"TRUE";
    v7[4] = 0;
    v7[3] = 0;
    *v7 = 2;
    sub_53E04((__int16 *)a2, byte_996E0);
    sub_53ECC(a2, 0);
  }
  else
  {
    close(v3);
    v6[7] = -1;
    free(v7);
  }
  return v4;
}
