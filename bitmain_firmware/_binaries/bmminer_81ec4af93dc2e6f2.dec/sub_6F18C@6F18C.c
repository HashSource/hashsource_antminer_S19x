int __fastcall sub_6F18C(int result)
{
  unsigned __int8 v1; // r2
  int v2; // r3
  int v3; // [sp+Ch] [bp-8h]

  v3 = result;
  if ( !dword_531B24 )
  {
    do
    {
      v1 = __ldrex(byte_531B28);
      result = __strex(1u, byte_531B28);
    }
    while ( result );
    if ( v1 != 1 )
    {
      if ( !v3 )
      {
        result = sub_6F114();
        v3 = result;
      }
      __dmb(0xBu);
      dword_531B24 = v3;
    }
    else
    {
      do
      {
        result = sched_yield();
        v2 = dword_531B24;
        __dmb(0xBu);
      }
      while ( !v2 );
    }
  }
  return result;
}
