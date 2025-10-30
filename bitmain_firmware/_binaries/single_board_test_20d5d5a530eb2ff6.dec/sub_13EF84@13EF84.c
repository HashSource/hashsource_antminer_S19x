unsigned int __fastcall sub_13EF84(int *a1, int a2, unsigned int *a3, unsigned int *a4, unsigned int *a5, int a6)
{
  int v7; // r6
  __int16 v8; // r3^2
  unsigned int v9; // r2
  int v11; // [sp+0h] [bp-Ch] BYREF
  int v12; // [sp+4h] [bp-8h]

  v7 = a1[1];
  v11 = *a1;
  v12 = v7;
  if ( a6 )
    sub_13E794(&v11, a3, a4, a5);
  else
    sub_13E85C(&v11, a3, a4, a5);
  v8 = HIWORD(v11);
  v9 = v12;
  *(_WORD *)a2 = v11;
  *(_WORD *)(a2 + 2) = v8;
  *(_DWORD *)(a2 + 4) = v9;
  return HIWORD(v9);
}
