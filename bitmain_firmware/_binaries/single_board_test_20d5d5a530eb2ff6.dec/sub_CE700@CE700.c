int __fastcall sub_CE700(int a1)
{
  int v2; // r3
  bool v3; // zf
  int v4; // r4
  bool v5; // zf
  int v6; // r2
  int v7; // r1

  if ( a1 )
  {
    sub_10C554(global_engine_lock);
    v2 = dword_6DF40C;
    v3 = a1 == dword_6DF40C;
    if ( a1 != dword_6DF40C )
      v3 = dword_6DF40C == 0;
    v4 = dword_6DF40C;
    if ( !v3 )
    {
      do
      {
        v4 = *(_DWORD *)(v4 + 96);
        v5 = v4 == 0;
        if ( v4 )
          v5 = a1 == v4;
      }
      while ( !v5 );
    }
    if ( v4 )
    {
      v6 = *(_DWORD *)(a1 + 96);
      if ( v6 )
        *(_DWORD *)(v6 + 92) = *(_DWORD *)(a1 + 92);
      v7 = *(_DWORD *)(a1 + 92);
      if ( v7 )
        *(_DWORD *)(v7 + 96) = v6;
      if ( a1 == v2 )
        dword_6DF40C = *(_DWORD *)(a1 + 96);
      v4 = 1;
      if ( a1 == dword_6DF410 )
        dword_6DF410 = v7;
      sub_CDF5C(a1, 0);
    }
    else
    {
      sub_D0048(38, 121, 105, "crypto/engine/eng_list.c", 118);
      sub_D0048(38, 123, 110, "crypto/engine/eng_list.c", 325);
    }
    sub_10C564(global_engine_lock);
    return v4;
  }
  else
  {
    sub_D0048(38, 123, 67, "crypto/engine/eng_list.c", 320);
    return 0;
  }
}
