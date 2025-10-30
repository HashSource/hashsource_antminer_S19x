int __fastcall sub_C8C80(int a1, int a2, int **a3, int **a4)
{
  int *v7; // r5
  int v8; // r9
  int *v9; // r6
  int *v10; // r7
  int v11; // r0
  bool v12; // zf
  int *v13; // r8
  int v14; // r3
  int *v15; // r10
  int v16; // r5
  int v18; // r2
  _DWORD *v20; // [sp+10h] [bp-Ch]
  int v21; // [sp+14h] [bp-8h]

  if ( a1 && (v7 = (int *)sub_C59B8(a1)) != 0 )
  {
    v8 = sub_C59E4(a1);
    if ( !v8 )
    {
      sub_D0048(16, 248, 125, "crypto/ec/ecdsa_ossl.c", 51);
      return v8;
    }
    if ( sub_C5E34(a1) )
    {
      v8 = a2;
      if ( !a2 )
      {
        v8 = sub_130B08();
        if ( !v8 )
        {
          sub_D0048(16, 248, 65, "crypto/ec/ecdsa_ossl.c", 62);
          return v8;
        }
      }
      v9 = (int *)sub_B822C();
      v10 = (int *)sub_B822C();
      v11 = sub_B822C();
      v12 = v10 == 0;
      if ( v10 )
        v12 = v9 == 0;
      v13 = (int *)v11;
      v14 = v12;
      if ( !v11 )
        v14 |= 1u;
      if ( v14 )
      {
        v15 = 0;
        sub_D0048(16, 248, 65, "crypto/ec/ecdsa_ossl.c", 71);
      }
      else
      {
        v15 = sub_C63F4(v7);
        if ( v15 )
        {
          v20 = (_DWORD *)sub_C6244((int)v7);
          v21 = sub_B85BC(v20);
          if ( sub_B8A68(v9, v21) && sub_B8A68(v10, v21) && sub_B8A68(v13, v21) )
          {
            do
            {
              do
              {
                if ( !sub_1365E8(v9, v20) )
                {
                  sub_D0048(16, 248, 158, "crypto/ec/ecdsa_ossl.c", 100);
                  goto LABEL_16;
                }
              }
              while ( sub_B85B0((int)v9) );
              if ( !sub_C7330(v7, v15, (int)v9, 0, 0, v8) )
              {
                sub_D0048(16, 248, 16, "crypto/ec/ecdsa_ossl.c", 108);
                goto LABEL_16;
              }
              if ( !sub_C6D34(v7, v15, (int)v13, 0, v8) )
              {
                sub_D0048(16, 248, 16, "crypto/ec/ecdsa_ossl.c", 113);
                goto LABEL_16;
              }
              if ( !sub_1337FC(v10, v13, v20, v8) )
              {
                v18 = 118;
                goto LABEL_40;
              }
            }
            while ( sub_B85B0((int)v10) );
            if ( !sub_C73A8(v7, (int)v9, (int)v9, v8) )
            {
              v18 = 125;
LABEL_40:
              sub_D0048(16, 248, 3, "crypto/ec/ecdsa_ossl.c", v18);
              goto LABEL_16;
            }
            v16 = 1;
            sub_B87C8(*a4);
            sub_B87C8(*a3);
            *a4 = v10;
            *a3 = v9;
            goto LABEL_17;
          }
        }
        else
        {
          sub_D0048(16, 248, 16, "crypto/ec/ecdsa_ossl.c", 75);
        }
      }
LABEL_16:
      v16 = 0;
      sub_B87C8(v9);
      sub_B87C8(v10);
LABEL_17:
      if ( a2 != v8 )
        sub_130B5C(v8);
      v8 = v16;
      sub_C6490((int)v15);
      sub_B87C8(v13);
      return v8;
    }
    sub_D0048(16, 248, 159, "crypto/ec/ecdsa_ossl.c", 56);
    return 0;
  }
  else
  {
    sub_D0048(16, 248, 67, "crypto/ec/ecdsa_ossl.c", 47);
    return 0;
  }
}
