int __fastcall sub_2F9BC(int a1, int a2, int a3)
{
  int v3; // r12
  int *v4; // r2
  int v6; // r12
  int v7; // r3
  int v8; // r3
  int v9; // [sp+4h] [bp-10h] BYREF
  int v10; // [sp+8h] [bp-Ch]
  int v11; // [sp+Ch] [bp-8h]

  v3 = *(unsigned __int8 *)(a3 + a2 + 88);
  v4 = (int *)(a3 + 12 * (a2 - 16));
  v10 = 0;
  v9 = 0;
  v11 = 0;
  if ( v3 == 2 )
  {
    v8 = *v4;
    v9 = v4[1];
    v10 = v8;
    return ((int (__fastcall *)(int, int, int *))loc_1DE9C8)(a1, a2, &v9);
  }
  else if ( v3 == 3 )
  {
    v6 = v4[2];
    v7 = v4[1];
    v9 = *v4;
    v10 = v6;
    v11 = v7;
    return ((int (__fastcall *)(int, int, int *))loc_1DE9C8)(a1, a2, &v9);
  }
  else
  {
    if ( v3 == 1 )
      v9 = *v4;
    return ((int (__fastcall *)(int, int, int *))loc_1DE9C8)(a1, a2, &v9);
  }
}
