int __fastcall sub_626CC(int result)
{
  unsigned __int8 v1; // r2
  int v2; // r3
  int v3; // [sp+Ch] [bp-8h]

  v3 = result;
  if ( !dword_91DE0 )
  {
    do
    {
      v1 = __ldrex(byte_91DE4);
      result = __strex(1u, byte_91DE4);
    }
    while ( result );
    if ( v1 != 1 )
    {
      if ( !v3 )
      {
        result = sub_62654();
        v3 = result;
      }
      __dmb(0xFu);
      dword_91DE0 = v3;
    }
    else
    {
      do
      {
        result = sched_yield();
        v2 = dword_91DE0;
        __dmb(0xFu);
      }
      while ( !v2 );
    }
  }
  return result;
}
