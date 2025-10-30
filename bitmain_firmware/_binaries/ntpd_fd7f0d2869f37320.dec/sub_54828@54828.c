int __fastcall sub_54828(int a1, int a2)
{
  int v4; // r2
  int v5; // r3
  int v6; // r12
  _BYTE v8[128]; // [sp+4h] [bp-88h] BYREF

  sub_6D00C(v8, 128, "/dev/pcfclocks/%d", a1);
  v4 = open64(v8, 0);
  if ( v4 == -1 )
  {
    sub_6D00C(v8, 128, "/dev/pcfclock%d", a1);
    v4 = open64(v8, 0);
    if ( v4 == -1 )
      return 0;
  }
  v5 = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(v5 + 12) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  v6 = 1;
  *(_DWORD *)(v5 + 28) = v4;
  *(_DWORD *)(v5 + 20) = a2;
  *(_BYTE *)(a2 + 95) = -1;
  *(_DWORD *)(v5 + 44) = "Conrad parallel port radio clock";
  *(_DWORD *)(v5 + 744) = -515396076;
  *(_DWORD *)(v5 + 748) = 1069945978;
  strcpy((char *)(v5 + 764), "PCF");
  return v6;
}
