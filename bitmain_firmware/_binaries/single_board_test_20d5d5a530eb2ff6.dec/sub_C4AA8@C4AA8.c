int __fastcall sub_C4AA8(int a1, int a2)
{
  int v4; // r8
  int v5; // r5
  int v6; // r1
  int v7; // r4
  int v8; // r0
  int v9; // r7
  int v10; // r6

  if ( (**(_DWORD **)a1 & 2) != 0 )
    return 1;
  v4 = a2;
  v5 = 0;
  if ( a2 || (v4 = sub_130B08(), (v5 = v4) != 0) )
  {
    if ( sub_C63C0(a1, v4) )
    {
      v6 = *(_DWORD *)(a1 + 4);
      if ( v6 )
      {
        if ( sub_C6DF4(a1, v6, v4) <= 0 )
        {
          v7 = 0;
          sub_D0048(16, 170, 107, "crypto/ec/ec_check.c", 44);
          v10 = 0;
        }
        else
        {
          v7 = sub_C63F4(a1);
          if ( v7 )
          {
            v8 = sub_C6244(a1);
            v9 = v8;
            if ( v8 )
            {
              if ( sub_B85B0(v8) )
              {
                sub_D0048(16, 170, 128, "crypto/ec/ec_check.c", 55);
              }
              else if ( sub_C7330(a1, v7, v9, 0, 0, v4) )
              {
                v10 = sub_C6CD4(a1, v7);
                if ( v10 )
                  v10 = 1;
                else
                  sub_D0048(16, 170, 122, "crypto/ec/ec_check.c", 62);
                goto LABEL_12;
              }
            }
          }
          v10 = 0;
        }
      }
      else
      {
        v7 = 0;
        v10 = 0;
        sub_D0048(16, 170, 113, "crypto/ec/ec_check.c", 40);
      }
    }
    else
    {
      v7 = 0;
      v10 = 0;
      sub_D0048(16, 170, 118, "crypto/ec/ec_check.c", 34);
    }
  }
  else
  {
    v5 = 0;
    v7 = 0;
    v10 = 0;
    sub_D0048(16, 170, 65, "crypto/ec/ec_check.c", 27);
  }
LABEL_12:
  sub_130B5C(v5);
  sub_C6490(v7);
  return v10;
}
