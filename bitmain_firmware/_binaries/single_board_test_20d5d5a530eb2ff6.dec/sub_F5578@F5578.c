unsigned int __fastcall sub_F5578(int *a1, int a2, int *a3, int a4)
{
  int v5; // r1
  __int16 v6; // r3^2
  unsigned int v7; // r2
  int v9; // [sp+0h] [bp-Ch] BYREF
  int v10; // [sp+4h] [bp-8h]

  v5 = a1[1];
  v9 = *a1;
  v10 = v5;
  if ( a4 )
    sub_F5044(&v9, a3);
  else
    sub_F513C(&v9, (int)a3);
  v6 = HIWORD(v9);
  v7 = v10;
  *(_WORD *)a2 = v9;
  *(_WORD *)(a2 + 2) = v6;
  *(_DWORD *)(a2 + 4) = v7;
  return HIWORD(v7);
}
