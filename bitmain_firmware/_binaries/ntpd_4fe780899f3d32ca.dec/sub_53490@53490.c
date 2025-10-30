int __fastcall sub_53490(int a1, int a2)
{
  int v4; // r0
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v9; // r0
  _BYTE v10[128]; // [sp+4h] [bp-88h] BYREF

  sub_6C054(v10, 128, "/dev/pcfclocks/%d", a1);
  v4 = open64(v10, 0);
  if ( v4 == -1 )
  {
    sub_6C054(v10, 128, "/dev/pcfclock%d", a1);
    v9 = open64(v10, 0);
    v5 = v9;
    if ( v9 == -1 )
      return 0;
  }
  else
  {
    v5 = v4;
  }
  v6 = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(v6 + 28) = v5;
  v7 = 1;
  *(_DWORD *)(v6 + 20) = a2;
  *(_DWORD *)(v6 + 12) = 0;
  *(_DWORD *)(v6 + 24) = 0;
  *(_BYTE *)(a2 + 95) = -1;
  *(_DWORD *)(v6 + 44) = "Conrad parallel port radio clock";
  strcpy((char *)(v6 + 764), "PCF");
  *(_DWORD *)(v6 + 744) = -515396076;
  *(_DWORD *)(v6 + 748) = 1069945978;
  return v7;
}
