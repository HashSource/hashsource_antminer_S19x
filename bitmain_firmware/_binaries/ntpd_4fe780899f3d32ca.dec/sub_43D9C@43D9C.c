int __fastcall sub_43D9C(int a1, int a2)
{
  int v3; // r10
  int v4; // r9
  _DWORD *v5; // r0
  _DWORD *v6; // r7
  int v7; // r4
  int v8; // r0
  char v10[20]; // [sp+0h] [bp-18h] BYREF

  sub_6C054(v10, 20, "/dev/fgclock%d", a1);
  v3 = sub_3A298(v10, 0xDu, 1);
  if ( v3 <= 0 )
    return 0;
  v5 = (_DWORD *)sub_63BA4(0, 12, 0, 0);
  *v5 = 0;
  v6 = v5;
  v5[1] = 0;
  v5[2] = 0;
  v7 = *(_DWORD *)(a2 + 84);
  *(_DWORD *)v7 = v5;
  *(_DWORD *)(v7 + 20) = a2;
  *(_DWORD *)(v7 + 24) = 0;
  *(_DWORD *)(v7 + 28) = v3;
  *(_DWORD *)(v7 + 12) = sub_43A3C;
  v4 = sub_18DF0((int *)(v7 + 8));
  if ( v4 )
  {
    *(_BYTE *)(a2 + 95) = -10;
    *(_DWORD *)(v7 + 44) = "Forum Graphic GPS dating station";
    *(_WORD *)(v7 + 764) = 20551;
    *(_BYTE *)(v7 + 766) = 83;
    v8 = *(_DWORD *)(v7 + 28);
    *v6 = 0;
    v4 = 1;
    if ( write(v8, &unk_B6DF0, 0x1Au) != 26 )
      sub_394A0((__int16 *)a2, 3);
  }
  else
  {
    close(v3);
    *(_DWORD *)(v7 + 28) = -1;
  }
  return v4;
}
