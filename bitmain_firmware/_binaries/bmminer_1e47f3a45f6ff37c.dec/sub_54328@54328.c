int __fastcall sub_54328(int result)
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  char v5[4]; // [sp+0h] [bp-814h] BYREF
  int v6; // [sp+800h] [bp-14h]
  int v7; // [sp+804h] [bp-10h]
  int v8; // [sp+808h] [bp-Ch]
  int i; // [sp+80Ch] [bp-8h]

  if ( dword_535DA0 )
  {
    v8 = sub_590EC(result);
    v1 = sub_5481C();
    for ( i = 0; i < v8; ++i )
    {
      v7 = sub_58FB4(i);
      if ( v7 >= 0 )
      {
        sub_56FFC(v7);
        v6 = sub_59050(i);
        if ( v6 >= 0 )
        {
          v1 = sub_56FFC(v6);
        }
        else
        {
          snprintf(v5, 0x800u, "fail to get reset for chain %d\n", i);
          v1 = sub_3B6AC(1, v5, 0, (int)v5);
        }
      }
      else
      {
        snprintf(v5, 0x800u, "fail to get socket for chain %d\n", i);
        v1 = sub_3B6AC(1, v5, 0, (int)v5);
      }
    }
    v2 = sub_57A54(v1);
    v3 = sub_56624(v2);
    v4 = sub_554BC(v3);
    result = sub_56A34(v4);
    dword_535DA0 = 0;
  }
  return result;
}
