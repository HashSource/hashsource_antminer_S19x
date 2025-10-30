int __fastcall sub_CDCEC(int a1, int a2, int (*a3)(void))
{
  int v4; // r4
  int v5; // r2
  int v6; // r3
  int v7; // r6
  int v8; // r4

  v4 = *(_DWORD *)(a1 + 84) - 1;
  *(_DWORD *)(a1 + 84) = v4;
  if ( v4 || (a3 = *(int (**)(void))(a1 + 52)) == 0 )
  {
    v7 = 1;
    v8 = sub_CDF5C(a1, 0, a3, &GLOBAL_OFFSET_TABLE_);
    if ( v8 )
      return v7;
  }
  else
  {
    if ( a2 )
    {
      sub_10C564(global_engine_lock);
      v7 = (*(int (__fastcall **)(int))(a1 + 52))(a1);
      sub_10C554(global_engine_lock);
    }
    else
    {
      v7 = a3();
    }
    if ( !v7 )
      return v4;
    v8 = sub_CDF5C(a1, 0, v5, v6);
    if ( v8 )
      return v7;
  }
  sub_D0048(38, 191, 106, "crypto/engine/eng_init.c", 70);
  return v8;
}
