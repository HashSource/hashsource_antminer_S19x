int __fastcall sub_61970(int result)
{
  unsigned __int8 v1; // r2
  int v2; // r3
  int v3; // [sp+Ch] [bp-8h]

  v3 = result;
  if ( !dword_90C48 )
  {
    do
    {
      v1 = __ldrex(byte_90C4C);
      result = __strex(1u, byte_90C4C);
    }
    while ( result );
    if ( v1 != 1 )
    {
      if ( !v3 )
      {
        result = sub_618F8();
        v3 = result;
      }
      __dmb(0xBu);
      dword_90C48 = v3;
    }
    else
    {
      do
      {
        result = sched_yield();
        v2 = dword_90C48;
        __dmb(0xBu);
      }
      while ( !v2 );
    }
  }
  return result;
}
