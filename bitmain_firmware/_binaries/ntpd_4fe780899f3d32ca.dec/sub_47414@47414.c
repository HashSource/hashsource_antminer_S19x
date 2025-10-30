int __fastcall sub_47414(int a1, int a2)
{
  int v3; // r9
  int v4; // r8
  int *v5; // r4
  char v7[20]; // [sp+0h] [bp-1Ch] BYREF

  sub_6C054(v7, 20, "/dev/heath%d", a1);
  v3 = sub_3A298(v7, *((_DWORD *)&unk_975BC + (*(_DWORD *)(a2 + 76) & 3) + 24), 128);
  if ( v3 <= 0 )
    return 0;
  v5 = *(int **)(a2 + 84);
  v5[5] = a2;
  v5[7] = v3;
  v5[3] = (int)sub_47230;
  v5[6] = 0;
  v4 = sub_18DF0(v5 + 2);
  if ( v4 )
  {
    v4 = 1;
    *(_BYTE *)(a2 + 95) = -4;
    v5[191] = 5658455;
    v5[11] = (int)"Heath GC-1000 Most Accurate Clock";
  }
  else
  {
    close(v3);
    v5[7] = -1;
  }
  return v4;
}
