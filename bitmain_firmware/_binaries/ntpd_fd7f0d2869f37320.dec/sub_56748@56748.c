int __fastcall sub_56748(int a1, int a2)
{
  int v3; // r8
  int v4; // r9
  _BYTE *v5; // r7
  _DWORD *v6; // r4
  char v8[20]; // [sp+0h] [bp-1Ch] BYREF

  sub_6D00C(v8, 20, "/dev/wwvb%d", a1);
  v3 = sub_3AA90(v8, 0xDu, 1);
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
  v6 = *(_DWORD **)(a2 + 84);
  v6[6] = 0;
  v6[5] = a2;
  v6[7] = v3;
  v6[3] = sub_5630C;
  v4 = sub_19084(v6 + 2);
  if ( v4 )
  {
    v4 = 1;
    *v6 = v5;
    *(_BYTE *)(a2 + 95) = -10;
    v6[11] = "Ultralink WWVB Receiver";
    v6[191] = *(_DWORD *)"WWVB";
  }
  else
  {
    close(v3);
    v6[7] = -1;
    free(v5);
  }
  return v4;
}
