int __fastcall sub_5534C(int a1, int a2)
{
  int v3; // r9
  int v4; // r8
  _DWORD *v5; // r0
  void *v6; // r7
  _DWORD *v7; // r4
  char v9[20]; // [sp+0h] [bp-1Ch] BYREF

  sub_6C054(v9, 20, "/dev/wwvb%d", a1);
  v3 = sub_3A298(v9, 0xDu, 1);
  if ( v3 <= 0 )
    return 0;
  v5 = (_DWORD *)sub_63BA4(0, 12, 0, 0);
  *v5 = 0;
  v6 = v5;
  v5[1] = 0;
  v5[2] = 0;
  v7 = *(_DWORD **)(a2 + 84);
  v7[6] = 0;
  v7[5] = a2;
  v7[7] = v3;
  v7[3] = sub_54F04;
  v4 = sub_18DF0(v7 + 2);
  if ( v4 )
  {
    v4 = 1;
    *v7 = v6;
    *(_BYTE *)(a2 + 95) = -10;
    v7[11] = "Ultralink WWVB Receiver";
    v7[191] = *(_DWORD *)"WWVB";
  }
  else
  {
    close(v3);
    v7[7] = -1;
    free(v6);
  }
  return v4;
}
