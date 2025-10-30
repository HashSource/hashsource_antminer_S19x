int __fastcall sub_726C8(int result)
{
  unsigned __int8 v1; // r2
  int v2; // r3
  int v3; // [sp+Ch] [bp-8h]

  v3 = result;
  if ( !dword_5369E0 )
  {
    do
    {
      v1 = __ldrex(byte_5369E4);
      result = __strex(1u, byte_5369E4);
    }
    while ( result );
    if ( v1 != 1 )
    {
      if ( !v3 )
      {
        result = sub_72650();
        v3 = result;
      }
      __dmb(0xFu);
      dword_5369E0 = v3;
    }
    else
    {
      do
      {
        result = sched_yield();
        v2 = dword_5369E0;
        __dmb(0xFu);
      }
      while ( !v2 );
    }
  }
  return result;
}
