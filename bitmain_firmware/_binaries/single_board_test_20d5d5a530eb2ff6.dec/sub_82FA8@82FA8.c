int __fastcall sub_82FA8(int a1, int a2)
{
  int v3; // r0
  _DWORD *v4; // r6
  int v5; // r5
  int v6; // r0
  int v7; // r4
  int v9; // r3
  int v10; // [sp+Ch] [bp-8h] BYREF

  v10 = 0;
  v3 = sub_A276C(a2);
  v4 = (_DWORD *)v3;
  if ( !v3 )
  {
    v7 = 0;
    sub_95494(a1, 80, 559, 68, "ssl/s3_lib.c", 4714);
    goto LABEL_11;
  }
  v5 = *(_WORD *)(v3 + 8) & 3;
  if ( v5 == 2 )
    v6 = *(_DWORD *)v3;
  else
    v6 = 408;
  v7 = sub_DB6A8(v6, 0);
  if ( !v7 )
  {
    sub_95494(a1, 80, 559, 65, "ssl/s3_lib.c", 4724);
    goto LABEL_11;
  }
  if ( sub_DAFF4() <= 0 )
  {
    v9 = 4729;
LABEL_14:
    sub_95494(a1, 80, 559, 6, "ssl/s3_lib.c", v9);
    goto LABEL_11;
  }
  if ( v5 != 2 && sub_DB77C(v7, 408, 6, 4097, *v4, 0) <= 0 )
  {
    v9 = 4735;
    goto LABEL_14;
  }
  if ( sub_DB03C(v7, &v10) <= 0 )
  {
    sub_95494(a1, 80, 559, 6, "ssl/s3_lib.c", 4740);
    sub_DA240(v10);
    v10 = 0;
  }
LABEL_11:
  sub_DB4BC(v7);
  return v10;
}
