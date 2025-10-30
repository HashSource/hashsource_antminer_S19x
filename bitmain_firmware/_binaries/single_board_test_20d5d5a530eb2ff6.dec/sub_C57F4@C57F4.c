int __fastcall sub_C57F4(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r4
  int v5; // r6
  int v6; // r7
  int *v8; // r8
  int *v9; // r0
  int v10; // r2

  if ( a1 )
  {
    v2 = a1[3];
    if ( v2 )
    {
      v3 = a1[4];
      if ( v3 )
      {
        v4 = sub_C6CD4(v2, v3);
        if ( v4 )
        {
          v5 = 0;
          v6 = 0;
          v4 = 0;
          sub_D0048(16, 258, 106, "crypto/ec/ec_key.c", 284);
LABEL_6:
          sub_130B5C(v6);
          sub_C6490(v5);
          return v4;
        }
        v6 = sub_130B08();
        if ( !v6 )
        {
          v5 = 0;
          v4 = 0;
          goto LABEL_6;
        }
        v5 = sub_C63F4(a1[3]);
        if ( !v5 )
        {
LABEL_19:
          v4 = 0;
          goto LABEL_6;
        }
        if ( sub_C6DF4(a1[3], a1[4], v6) <= 0 )
        {
          sub_D0048(16, 258, 107, "crypto/ec/ec_key.c", 295);
          goto LABEL_6;
        }
        v8 = *(int **)(a1[3] + 8);
        if ( sub_B85B0((int)v8) )
        {
          sub_D0048(16, 258, 122, "crypto/ec/ec_key.c", 301);
          goto LABEL_6;
        }
        v4 = sub_C7330(a1[3], v5, 0, a1[4], v8, v6);
        if ( !v4 )
        {
          sub_D0048(16, 258, 16, "crypto/ec/ec_key.c", 305);
          goto LABEL_6;
        }
        if ( sub_C6CD4(a1[3], v5) )
        {
          v9 = (int *)a1[5];
          if ( v9 )
          {
            if ( sub_B8354(v9, v8) >= 0 )
            {
              v10 = 318;
LABEL_18:
              sub_D0048(16, 258, 130, "crypto/ec/ec_key.c", v10);
              goto LABEL_19;
            }
            v4 = sub_C7330(a1[3], v5, a1[5], 0, 0, v6);
            if ( !v4 )
            {
              sub_D0048(16, 258, 16, "crypto/ec/ec_key.c", 323);
              goto LABEL_6;
            }
            if ( sub_C6EFC(a1[3], v5, a1[4], v6) )
            {
              v4 = 0;
              sub_D0048(16, 258, 123, "crypto/ec/ec_key.c", 327);
              goto LABEL_6;
            }
          }
          v4 = 1;
          goto LABEL_6;
        }
        v10 = 309;
        goto LABEL_18;
      }
    }
  }
  sub_D0048(16, 258, 67, "crypto/ec/ec_key.c", 279);
  return 0;
}
