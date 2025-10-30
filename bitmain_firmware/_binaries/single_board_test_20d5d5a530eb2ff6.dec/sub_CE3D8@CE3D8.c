int sub_CE3D8()
{
  int v0; // r6
  unsigned int v1; // r3
  unsigned int *v2; // r2
  unsigned int i; // r1
  unsigned int v4; // r0
  bool v5; // zf
  unsigned int v6; // lr

  if ( sub_10C594(&engine_lock_init, do_engine_lock_init_ossl_) && do_engine_lock_init_ossl_ret_ )
  {
    sub_10C554(global_engine_lock);
    v0 = dword_6DF410;
    if ( dword_6DF410 )
    {
      __dmb(0xBu);
      v1 = *(_DWORD *)(v0 + 80);
      __dmb(0xBu);
      v2 = (unsigned int *)(v0 + 80);
      for ( i = v1; ; i = v1 )
      {
        v4 = v1 + 1;
        __dmb(0xBu);
        do
        {
          v1 = __ldrex(v2);
          v5 = v1 == i;
          if ( v1 != i )
            break;
          v6 = __strex(v4, v2);
          v5 = v6 == 0;
        }
        while ( v6 );
        __dmb(0xBu);
        if ( v5 )
          break;
      }
    }
    sub_10C564(global_engine_lock);
    return v0;
  }
  else
  {
    sub_D0048(38, 196, 65, "crypto/engine/eng_list.c", 239);
    return 0;
  }
}
