int __fastcall sub_8B8C8(_DWORD *a1)
{
  int v3; // r0
  int v4; // r6
  int v5; // r0
  int v6; // r5
  int v7; // r6
  int v8; // r9
  int v9; // r8
  int v10; // r3
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r7
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r5
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // [sp+Ch] [bp-8h] BYREF

  if ( a1[375] )
    return a1[374];
  if ( !a1[336] )
  {
LABEL_10:
    if ( a1[341] && a1[342] && (v22 = a1[341], (v8 = sub_EB780(0, &v22)) != 0) )
    {
      v9 = sub_EBC14();
      if ( v9 )
      {
        v14 = 0;
        v7 = 0;
        while ( v14 < sub_EBC88(v9) )
        {
          v15 = sub_EBC98(v9, v14);
          if ( v15 )
          {
            v16 = sub_EC054(v15, 954, 0);
            v7 = v16;
            if ( !a1[374] )
            {
              v19 = sub_10BFCC(v16);
              a1[374] = v19;
              if ( !v19 )
              {
                sub_D0048(20, 345, 65, "ssl/ssl_lib.c", 4755);
LABEL_36:
                sub_BD014(v7);
                sub_EB9D4(v9);
                sub_EB7C4(v8);
                return 0;
              }
            }
            while ( 1 )
            {
              v17 = sub_10BD80(v7);
              v18 = v17;
              if ( !v17 )
                break;
              if ( sub_BD38C(v17, 3) != 1 || sub_10BD3C(a1[374], v18) <= 0 )
              {
                sub_10BD3C(v7, v18);
                goto LABEL_36;
              }
            }
          }
          ++v14;
        }
      }
      else
      {
        v7 = 0;
      }
    }
    else
    {
      v7 = 0;
      v8 = 0;
      v9 = 0;
    }
    sub_BD014(v7);
    sub_EB9D4(v9);
    sub_EB7C4(v8);
    v10 = a1[285];
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 412);
      if ( v11 )
      {
        v12 = sub_10EDA8(v11, 951, 0);
        v4 = v12;
        if ( !a1[374] )
        {
          v21 = sub_10BFCC(v12);
          a1[374] = v21;
          if ( !v21 )
            goto LABEL_40;
        }
        while ( 1 )
        {
          v13 = sub_10BD80(v4);
          v6 = v13;
          if ( !v13 )
            break;
          if ( sub_BD38C(v13, 2) != 1 || sub_10BD3C(a1[374], v6) <= 0 )
            goto LABEL_22;
        }
        sub_BD014(v4);
      }
    }
    a1[375] = 1;
    return a1[374];
  }
  v22 = a1[336];
  v3 = sub_BCBBC();
  v4 = v3;
  if ( a1[374] || (v20 = sub_10BFCC(v3), (a1[374] = v20) != 0) )
  {
    do
    {
      v5 = sub_10BD80(v4);
      v6 = v5;
      if ( !v5 )
      {
        sub_BD014(v4);
        goto LABEL_10;
      }
    }
    while ( sub_BD38C(v5, 1) == 1 && sub_10BD3C(a1[374], v6) > 0 );
LABEL_22:
    sub_10BD3C(v4, v6);
    goto LABEL_23;
  }
LABEL_40:
  sub_D0048(20, 345, 65, "ssl/ssl_lib.c", 4755);
LABEL_23:
  sub_BD014(v4);
  return 0;
}
