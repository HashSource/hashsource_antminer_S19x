int __fastcall sub_CEC08(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int (__fastcall *v12)(int, int, int, int, int, int, int, int); // r5

  if ( a1 )
  {
    sub_10C554(global_engine_lock);
    if ( *(_DWORD *)(a1 + 84) )
    {
      sub_10C564(global_engine_lock);
      v12 = *(int (__fastcall **)(int, int, int, int, int, int, int, int))(a1 + 68);
      if ( v12 )
        return v12(a1, a2, a3, a4, a5, a6, a7, a8);
      sub_D0048(38, 194, 125, "crypto/engine/eng_pkey.c", 135);
    }
    else
    {
      sub_10C564(global_engine_lock);
      sub_D0048(38, 194, 117, "crypto/engine/eng_pkey.c", 129);
    }
    return 0;
  }
  else
  {
    sub_D0048(38, 194, 67, "crypto/engine/eng_pkey.c", 122);
    return 0;
  }
}
