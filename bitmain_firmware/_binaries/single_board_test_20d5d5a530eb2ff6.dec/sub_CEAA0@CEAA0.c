int __fastcall sub_CEAA0(int a1, int a2, int a3, int a4)
{
  int (__fastcall *v8)(int, int, int, int); // r4
  int result; // r0

  if ( a1 )
  {
    sub_10C554(global_engine_lock);
    if ( *(_DWORD *)(a1 + 84) )
    {
      sub_10C564(global_engine_lock);
      v8 = *(int (__fastcall **)(int, int, int, int))(a1 + 60);
      if ( v8 )
      {
        result = v8(a1, a2, a3, a4);
        if ( !result )
        {
          sub_D0048(38, 150, 128, "crypto/engine/eng_pkey.c", 78);
          return 0;
        }
      }
      else
      {
        sub_D0048(38, 150, 125, "crypto/engine/eng_pkey.c", 72);
        return 0;
      }
    }
    else
    {
      sub_10C564(global_engine_lock);
      sub_D0048(38, 150, 117, "crypto/engine/eng_pkey.c", 66);
      return 0;
    }
  }
  else
  {
    sub_D0048(38, 150, 67, "crypto/engine/eng_pkey.c", 60);
    return 0;
  }
  return result;
}
