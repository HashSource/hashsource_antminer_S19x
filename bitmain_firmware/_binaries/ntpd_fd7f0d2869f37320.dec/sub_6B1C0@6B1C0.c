int __fastcall sub_6B1C0(int a1)
{
  int result; // r0
  int v3; // r4
  int *v4; // r1
  int *v5; // r3
  int v6; // r3
  bool v7; // zf

  result = dword_108244;
  if ( dword_108244 )
  {
    do
    {
      while ( 1 )
      {
        v3 = *(_DWORD *)result;
        if ( *(_DWORD *)(result + 64) == a1 )
          break;
        result = *(_DWORD *)result;
        if ( !v3 )
          return result;
      }
      v4 = (int *)dword_108244;
      if ( dword_108244 == result )
      {
        v4 = &dword_108244;
      }
      else
      {
        v5 = *(int **)dword_108244;
        if ( !*(_DWORD *)dword_108244 )
LABEL_18:
          sub_6FC54("recvbuff.c", 285, 2, "punlinked == rbufp");
        while ( (int *)result != v5 )
        {
          v4 = v5;
          if ( !*v5 )
            goto LABEL_18;
          v5 = (int *)*v5;
        }
      }
      v6 = *(_DWORD *)result;
      v7 = *(_DWORD *)result == 0;
      *v4 = *(_DWORD *)result;
      if ( v7 )
      {
        dword_108248 = v6;
      }
      else if ( dword_108248 == result )
      {
        dword_108248 = (int)&dword_108244;
      }
      --dword_108230;
      sub_6AF28((char *)result);
      result = v3;
    }
    while ( v3 );
  }
  return result;
}
