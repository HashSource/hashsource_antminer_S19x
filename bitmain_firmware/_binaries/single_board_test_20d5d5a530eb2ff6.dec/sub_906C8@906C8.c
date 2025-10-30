int __fastcall sub_906C8(int a1, int a2)
{
  int v4; // r0
  int v5; // r1
  int v7; // r3
  int v8; // r1
  int v9; // r7
  __int64 v10; // r8
  __int64 v11; // r2
  int v12; // [sp+8h] [bp-8h] BYREF
  int v13; // [sp+Ch] [bp-4h] BYREF

  v4 = sub_9CFC8(a1, &v12, &v13, 0);
  if ( v4 )
  {
    sub_95494(a1, 80, 481, v4, "ssl/statem/extensions_clnt.c", 530);
    return 0;
  }
  if ( v13 < 772 )
    return 2;
  if ( !sub_A8450(a2, v5, 43, 0, 2) || !sub_A8398(a2, 2) || !sub_A8398(a2, 1) )
  {
    v7 = 546;
LABEL_10:
    sub_95494(a1, 80, 481, 68, "ssl/statem/extensions_clnt.c", v7);
    return 0;
  }
  v9 = v13;
  if ( v13 >= v12 )
  {
    v10 = v13;
    while ( 1 )
    {
      v11 = v10--;
      --v9;
      if ( !sub_A8450(a2, v8, v11, HIDWORD(v11), 2) )
        break;
      if ( v12 > v9 )
        goto LABEL_18;
    }
    v7 = 554;
    goto LABEL_10;
  }
LABEL_18:
  if ( !sub_A7EDC(a2) || !sub_A7EDC(a2) )
  {
    v7 = 561;
    goto LABEL_10;
  }
  return 1;
}
