int __fastcall sub_CE484(int a1)
{
  int v2; // r7
  unsigned int v3; // r3
  unsigned int *v4; // r2
  unsigned int i; // r1
  unsigned int v6; // r0
  bool v7; // zf
  unsigned int v8; // lr

  if ( a1 )
  {
    sub_10C554(global_engine_lock);
    v2 = *(_DWORD *)(a1 + 96);
    if ( v2 )
    {
      __dmb(0xBu);
      v3 = *(_DWORD *)(v2 + 80);
      __dmb(0xBu);
      v4 = (unsigned int *)(v2 + 80);
      for ( i = v3; ; i = v3 )
      {
        v6 = v3 + 1;
        __dmb(0xBu);
        do
        {
          v3 = __ldrex(v4);
          v7 = v3 == i;
          if ( v3 != i )
            break;
          v8 = __strex(v6, v4);
          v7 = v8 == 0;
        }
        while ( v8 );
        __dmb(0xBu);
        if ( v7 )
          break;
      }
    }
    sub_10C564(global_engine_lock);
    sub_CE00C(a1);
    return v2;
  }
  else
  {
    sub_D0048(38, 115, 67, "crypto/engine/eng_list.c", 258);
    return 0;
  }
}
