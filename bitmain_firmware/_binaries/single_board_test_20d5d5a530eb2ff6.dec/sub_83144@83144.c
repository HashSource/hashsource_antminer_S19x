int __fastcall sub_83144(_DWORD *a1, int a2, int a3, int a4)
{
  bool v4; // zf
  int v5; // r9
  int v9; // r6
  int v10; // r0
  const void *v11; // r5
  int *v12; // r3
  int v13; // r3
  _BOOL4 v14; // r2
  int v15; // r4
  int v16; // r1
  int v17; // r4
  int v19; // r3
  int v20; // r0
  int v21; // [sp+Ch] [bp-4h] BYREF

  v4 = a3 == 0;
  if ( a3 )
    v4 = a2 == 0;
  v5 = v4;
  v21 = 0;
  if ( !v4 )
  {
    v9 = sub_DB4F8(a2, v5);
    if ( sub_DAC94() > 0 && sub_DACE0(v9, a3) > 0 && sub_DAE14(v9, v5, &v21) > 0 )
    {
      v10 = CRYPTO_malloc(v21, "ssl/s3_lib.c", 4812);
      v11 = (const void *)v10;
      if ( !v10 )
      {
        v17 = 0;
        sub_95494(a1, 80, 590, 65, "ssl/s3_lib.c", 4815);
        v16 = v21;
        goto LABEL_20;
      }
      if ( sub_DAE14(v9, v10, &v21) <= 0 )
      {
        v17 = v5;
        sub_95494(a1, 80, 590, 68, "ssl/s3_lib.c", 4821);
        v16 = v21;
        goto LABEL_20;
      }
      if ( !a4 )
      {
        v19 = a1[31];
        v17 = 1;
        v16 = v21;
        *(_DWORD *)(v19 + 592) = v11;
        v11 = 0;
        *(_DWORD *)(v19 + 596) = v16;
        goto LABEL_20;
      }
      v12 = (int *)a1[1];
      if ( (*(_DWORD *)(v12[25] + 48) & 8) != 0 )
        goto LABEL_23;
      v13 = *v12;
      v14 = v13 != 0x10000;
      if ( v13 < 772 )
        v14 = 0;
      if ( !v14 )
      {
LABEL_23:
        v17 = sub_82DD8(a1, v11, v21, 0);
      }
      else if ( a1[35] || (v20 = sub_86508(a1), (v17 = sub_A55FC(a1, v20, 0, 0, 0, a1 + 51)) != 0) )
      {
        v15 = sub_A5814(a1, v11, v21);
        v16 = v21;
        v17 = v15 != 0;
LABEL_20:
        sub_E0758((int)v11, v16, (size_t)"ssl/s3_lib.c");
        sub_DB4BC(v9);
        return v17;
      }
      v16 = v21;
      goto LABEL_20;
    }
    v11 = 0;
    sub_95494(a1, 80, 590, 68, "ssl/s3_lib.c", 4808);
    v16 = v21;
    v17 = 0;
    goto LABEL_20;
  }
  sub_95494(a1, 80, 590, 68, "ssl/s3_lib.c", 4798);
  return 0;
}
