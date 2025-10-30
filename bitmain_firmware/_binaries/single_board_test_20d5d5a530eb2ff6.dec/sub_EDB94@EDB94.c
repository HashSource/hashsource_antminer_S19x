int __fastcall sub_EDB94(int a1, const char *a2, const char *a3, int a4, int a5)
{
  int v9; // r5
  size_t v10; // r10
  __int16 v11; // r2
  void *v12; // r4
  int v13; // r8
  signed int v15; // r0
  int v16; // r11
  int v17; // r8
  int v18; // r3
  size_t n; // r2
  void *v20; // r3
  int v21; // r2
  int v22; // r0
  int v23; // r0
  int v24[2]; // [sp+14h] [bp-8h] BYREF

  v9 = sub_15DA78();
  if ( !v9 )
    goto LABEL_6;
  sub_15DAAC();
  v10 = strlen(a2);
  if ( sub_B69CC(a1, (int)"-----BEGIN ", 11) != 11
    || v10 != sub_B69CC(a1, (int)a2, v10)
    || sub_B69CC(a1, (int)"-----\n", 6) != 6
    || a3 && (v15 = strlen(a3), v15 > 0) && (v15 != sub_B69CC(a1, (int)a3, v15) || sub_B69CC(a1, (int)"\n", 1) != 1) )
  {
    v11 = 7;
    v12 = 0;
LABEL_4:
    v13 = 0;
    sub_D0048(9, 114, v11, (int)"crypto/pem/pem_lib.c", 658);
    goto LABEL_5;
  }
  v12 = CRYPTO_malloc((void *)0x2000);
  if ( !v12 )
  {
LABEL_6:
    v11 = 65;
    v12 = 0;
    goto LABEL_4;
  }
  if ( a5 > 0 )
  {
    v16 = 0;
    v17 = 0;
    v18 = a5;
    while ( 1 )
    {
      if ( v18 >= 5120 )
        v18 = 5120;
      n = v18;
      v20 = (void *)(a4 + v16);
      v16 += n;
      a5 -= n;
      if ( !sub_15DABC(v9, (int)v12, (int)v24, v20, n) )
        break;
      v21 = v24[0];
      if ( v24[0] )
      {
        v22 = sub_B69CC(a1, (int)v12, v24[0]);
        v21 = v24[0];
        if ( v22 != v24[0] )
          break;
      }
      v18 = a5;
      v17 += v21;
      if ( a5 <= 0 )
      {
        sub_15DBE4(v9, v12, v24);
        goto LABEL_24;
      }
    }
LABEL_22:
    v11 = 7;
    goto LABEL_4;
  }
  v17 = 0;
  sub_15DBE4(v9, v12, v24);
LABEL_24:
  if ( v24[0] > 0 )
  {
    v23 = sub_B69CC(a1, (int)v12, v24[0]);
    if ( v23 != v24[0] )
      goto LABEL_22;
  }
  if ( sub_B69CC(a1, (int)"-----END ", 9) != 9 )
    goto LABEL_22;
  if ( v10 != sub_B69CC(a1, (int)a2, v10) )
    goto LABEL_22;
  if ( sub_B69CC(a1, (int)"-----\n", 6) != 6 )
    goto LABEL_22;
  v13 = v17 + v24[0];
  if ( !v13 )
    goto LABEL_22;
LABEL_5:
  sub_15DA88(v9);
  sub_E0758(v12, 0x2000u, (size_t)"crypto/pem/pem_lib.c");
  return v13;
}
