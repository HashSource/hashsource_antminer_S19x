int __fastcall sub_107F04(_BYTE *a1, int a2, _BYTE *a3, int *a4, int a5)
{
  _DWORD *v6; // r0
  int v7; // r4
  int **v8; // r6
  int v9; // r0
  int v10; // r5
  _BYTE *v12; // [sp+Ch] [bp-8h] BYREF

  v12 = a3;
  v6 = sub_B8AEC(a1, a2, 0);
  v7 = (int)v6;
  if ( v6 )
  {
    v8 = sub_107558(a5, (int)v6);
    v9 = sub_C499C((size_t *)v8, &v12);
    if ( v9 < 0 )
    {
      v10 = -1;
      sub_D0048(53, 105, 68, (int)"crypto/sm2/sm2_sign.c", 427);
    }
    else
    {
      v10 = 1;
      *a4 = v9;
    }
  }
  else
  {
    v10 = -1;
    sub_D0048(53, 105, 3, (int)"crypto/sm2/sm2_sign.c", 419);
    v8 = 0;
  }
  sub_C49E8(v8);
  sub_B895C(v7);
  return v10;
}
