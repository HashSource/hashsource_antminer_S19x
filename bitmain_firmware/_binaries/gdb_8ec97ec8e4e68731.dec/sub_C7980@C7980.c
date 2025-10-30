int __fastcall sub_C7980(int result)
{
  _DWORD *v1; // r4
  int v2; // r6
  _DWORD *v3; // r5
  int v4; // r10
  const char *v5; // r0

  v1 = (_DWORD *)dword_478348;
  if ( dword_478348 )
  {
    v2 = result;
    do
    {
      while ( 1 )
      {
        v3 = (_DWORD *)v1[2];
        if ( v1[28] == *(_DWORD *)(v2 + 20) )
        {
          v4 = v1[6];
          result = v2;
          if ( v4 > 0 )
            break;
        }
        v1 = (_DWORD *)v1[2];
        if ( !v3 )
          return result;
      }
      v1[5] = 1;
      v5 = (const char *)sub_240128(v2);
      result = sub_259F10("Thread-specific breakpoint %d deleted - thread %s no longer in the thread list.\n", v4, v5);
      v1[6] = 0;
      v1 = v3;
    }
    while ( v3 );
  }
  return result;
}
