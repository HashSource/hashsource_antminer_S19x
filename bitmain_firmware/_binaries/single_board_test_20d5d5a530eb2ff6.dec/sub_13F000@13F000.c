unsigned int __fastcall sub_13F000(int *a1, int a2, unsigned int *a3, int a4)
{
  int v5; // r5
  __int16 v6; // r3^2
  unsigned int v7; // r2
  int v9; // [sp+0h] [bp-Ch] BYREF
  int v10; // [sp+4h] [bp-8h]

  v5 = a1[1];
  v9 = *a1;
  v10 = v5;
  sub_13C7E0(&v9, a3, a4);
  v6 = HIWORD(v9);
  v7 = v10;
  *(_WORD *)a2 = v9;
  *(_WORD *)(a2 + 2) = v6;
  *(_DWORD *)(a2 + 4) = v7;
  return HIWORD(v7);
}
