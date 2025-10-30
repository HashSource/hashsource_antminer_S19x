int __fastcall sub_9D6FC(_DWORD *a1, unsigned __int8 **a2)
{
  int v4; // r6
  unsigned int v5; // r3
  unsigned __int8 *v6; // r5
  unsigned int v7; // r3
  unsigned int v8; // r2
  unsigned int v9; // lr
  unsigned int v10; // r3
  unsigned __int8 *v11; // r5
  unsigned int v12; // r4
  unsigned __int8 *v13; // r5
  int v14; // r0
  int v15; // r11
  unsigned __int8 *v16; // r10
  int v17; // r3
  unsigned __int8 *v19; // [sp+Ch] [bp-8h] BYREF

  v4 = sub_10BFD4(sub_9B328);
  if ( !v4 )
  {
    v15 = 0;
    sub_95494(a1, 80, 541, 65, (int)"ssl/statem/statem_lib.c", 2263);
    goto LABEL_17;
  }
  v5 = (unsigned int)a2[1];
  if ( v5 <= 1 || (v6 = *a2, v7 = v5 - 2, v8 = (*a2)[1] | (**a2 << 8), v8 > v7) )
  {
    v17 = 2269;
LABEL_16:
    v15 = 0;
    sub_95494(a1, 50, 541, 159, (int)"ssl/statem/statem_lib.c", v17);
LABEL_17:
    sub_10BFDC(v4, X509_NAME_free);
    X509_NAME_free(v15);
    return 0;
  }
  *a2 = &v6[v8 + 2];
  a2[1] = (unsigned __int8 *)(v7 - v8);
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      v9 = v8 - 2;
      v10 = v6[3] | (v6[2] << 8);
      if ( v10 <= v8 - 2 )
      {
        v11 = v6 + 4;
        while ( 1 )
        {
          v19 = v11;
          v12 = v9 - v10;
          v13 = &v11[v10];
          v14 = sub_115C24(0, &v19, v10);
          v15 = v14;
          if ( !v14 )
          {
            sub_95494(a1, 50, 541, 13, (int)"ssl/statem/statem_lib.c", 2287);
            goto LABEL_17;
          }
          v16 = v19;
          if ( v19 != v13 )
          {
            sub_95494(a1, 50, 541, 131, (int)"ssl/statem/statem_lib.c", 2292);
            goto LABEL_17;
          }
          if ( !sub_10BD3C(v4, v14) )
            break;
          v9 = v12 - 2;
          v11 = v16 + 2;
          if ( !v12 )
            goto LABEL_20;
          if ( v12 != 1 )
          {
            v10 = v16[1] | (*v16 << 8);
            if ( v10 <= v9 )
              continue;
          }
          goto LABEL_15;
        }
        sub_95494(a1, 80, 541, 65, (int)"ssl/statem/statem_lib.c", 2298);
        goto LABEL_17;
      }
    }
LABEL_15:
    v17 = 2280;
    goto LABEL_16;
  }
LABEL_20:
  sub_10BFDC(*(_DWORD *)(a1[31] + 548), X509_NAME_free);
  *(_DWORD *)(a1[31] + 548) = v4;
  return 1;
}
