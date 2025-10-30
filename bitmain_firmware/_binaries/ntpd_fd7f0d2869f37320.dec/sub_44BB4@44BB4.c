int __fastcall sub_44BB4(int a1, int a2)
{
  int v3; // r9
  int v4; // r10
  _BYTE *v5; // r8
  int v6; // r5
  int v7; // r0
  char v9[20]; // [sp+0h] [bp-18h] BYREF

  sub_6D00C(v9, 20, "/dev/fgclock%d", a1);
  v3 = sub_3AA90(v9, 0xDu, 1);
  if ( v3 <= 0 )
    return 0;
  v5 = (_BYTE *)sub_64B04(0, 12, 0, 0);
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v5[8] = 0;
  v5[9] = 0;
  v5[10] = 0;
  v5[11] = 0;
  v6 = *(_DWORD *)(a2 + 84);
  *(_DWORD *)v6 = v5;
  *(_DWORD *)(v6 + 20) = a2;
  *(_DWORD *)(v6 + 24) = 0;
  *(_DWORD *)(v6 + 28) = v3;
  *(_DWORD *)(v6 + 12) = sub_4485C;
  v4 = sub_19084((_DWORD *)(v6 + 8));
  if ( v4 )
  {
    *(_BYTE *)(a2 + 95) = -10;
    *(_DWORD *)(v6 + 44) = "Forum Graphic GPS dating station";
    *(_WORD *)(v6 + 764) = 20551;
    *(_BYTE *)(v6 + 766) = 83;
    v7 = *(_DWORD *)(v6 + 28);
    *(_DWORD *)v5 = 0;
    if ( write(v7, &unk_B7DF0, 0x1Au) != 26 )
      sub_39C88(a2, 3);
    return 1;
  }
  else
  {
    close(v3);
    *(_DWORD *)(v6 + 28) = -1;
  }
  return v4;
}
