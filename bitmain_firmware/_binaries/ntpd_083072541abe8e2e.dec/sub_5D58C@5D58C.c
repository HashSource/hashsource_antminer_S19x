int __fastcall sub_5D58C(int a1, int a2)
{
  int v3; // r8
  int v4; // r7
  int v5; // r0
  int *v6; // r4
  void *v7; // r9
  char v9[20]; // [sp+0h] [bp-1Ch] BYREF

  sub_6C054(v9, 20, "/dev/chronolog%d", a1);
  v3 = sub_3A298(v9, 0xBu, 0);
  if ( v3 <= 0 )
    return 0;
  v5 = sub_63BA4(0, 28, 0, 1);
  v6 = *(int **)(a2 + 84);
  v7 = (void *)v5;
  *v6 = v5;
  v6[5] = a2;
  v6[7] = v3;
  v6[3] = (int)sub_5D6B4;
  v6[6] = 0;
  v4 = sub_18DF0(v6 + 2);
  if ( v4 )
  {
    v4 = 1;
    *(_BYTE *)(a2 + 95) = -13;
    v6[11] = (int)"Chrono-log K";
    v6[191] = *(_DWORD *)"chronolog";
  }
  else
  {
    close(v3);
    v6[7] = -1;
    free(v7);
    *v6 = 0;
  }
  return v4;
}
