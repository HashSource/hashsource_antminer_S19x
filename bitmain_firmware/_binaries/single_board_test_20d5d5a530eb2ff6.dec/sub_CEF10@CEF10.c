int __fastcall sub_CEF10(_DWORD *a1, int a2, int a3)
{
  int v4; // r3
  unsigned int v5; // r2
  unsigned int i; // r1
  int v7; // r3
  unsigned int v8; // r0
  unsigned int *v9; // r3
  bool v10; // zf
  unsigned int v11; // r7
  int v13; // [sp+10h] [bp-14h] BYREF
  int v14; // [sp+14h] [bp-10h]
  int v15; // [sp+18h] [bp-Ch]
  int v16; // [sp+1Ch] [bp-8h]

  v15 = a2;
  v16 = a3;
  v13 = 0;
  v14 = 0;
  if ( sub_10C594(&engine_lock_init, do_engine_lock_init_ossl_) && do_engine_lock_init_ossl_ret_ )
  {
    sub_10C554(global_engine_lock);
    sub_15B61C(dword_6DF414, sub_CECCC, &v13);
    v4 = v13;
    if ( v13 )
    {
      __dmb(0xBu);
      v5 = *(_DWORD *)(v4 + 80);
      __dmb(0xBu);
      for ( i = v5; ; i = v5 )
      {
        v7 = v13;
        v8 = v5 + 1;
        __dmb(0xBu);
        v9 = (unsigned int *)(v7 + 80);
        do
        {
          v5 = __ldrex(v9);
          v10 = v5 == i;
          if ( v5 != i )
            break;
          v11 = __strex(v8, v9);
          v10 = v11 == 0;
        }
        while ( v11 );
        __dmb(0xBu);
        if ( v10 )
          break;
      }
      v4 = v13;
    }
    *a1 = v4;
    sub_10C564(global_engine_lock);
    return v14;
  }
  else
  {
    sub_D0048(38, 197, 65, "crypto/engine/tb_asnmth.c", 196);
    return 0;
  }
}
