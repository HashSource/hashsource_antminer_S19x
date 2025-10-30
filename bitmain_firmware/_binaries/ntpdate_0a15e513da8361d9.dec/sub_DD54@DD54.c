int __fastcall sub_DD54(int a1)
{
  int result; // r0
  int v3; // r4
  int *v4; // r1
  int *v5; // r3
  int v6; // r3
  bool v7; // zf

  result = dword_3333C;
  if ( dword_3333C )
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
      v4 = (int *)dword_3333C;
      if ( dword_3333C == result )
      {
        v4 = &dword_3333C;
      }
      else
      {
        v5 = *(int **)dword_3333C;
        if ( !*(_DWORD *)dword_3333C )
LABEL_18:
          sub_10C38("recvbuff.c", 285, 2, "punlinked == rbufp");
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
        dword_33340 = v6;
      }
      else if ( dword_33340 == result )
      {
        dword_33340 = (int)&dword_3333C;
      }
      --dword_33328;
      sub_DABC((char *)result);
      result = v3;
    }
    while ( v3 );
  }
  return result;
}
