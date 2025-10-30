char *__fastcall sub_6A240(char *result)
{
  char *v1; // r2
  char *v2; // r9
  char *v3; // r4
  int *v4; // r12
  int *v5; // r3
  char *v6; // r0

  v1 = (char *)dword_107220;
  if ( dword_107220 )
  {
    v2 = result;
    do
    {
      while ( 1 )
      {
        v3 = *(char **)v1;
        if ( *((char **)v1 + 16) == v2 )
          break;
        v1 = *(char **)v1;
        if ( !v3 )
          return result;
      }
      v4 = (int *)dword_107220;
      v5 = *(int **)dword_107220;
      if ( (char *)dword_107220 == v1 )
      {
        v6 = v1;
        v4 = &dword_107220;
      }
      else
      {
        if ( !v5 )
          goto LABEL_20;
        while ( v5 != (int *)v1 )
        {
          v4 = v5;
          if ( !*v5 )
            goto LABEL_20;
          v5 = (int *)*v5;
        }
        v6 = (char *)*v4;
        v5 = *(int **)*v4;
      }
      *v4 = (int)v5;
      if ( v5 )
      {
        if ( (char *)dword_107224 == v6 )
          dword_107224 = (int)&dword_107220;
      }
      else
      {
        dword_107224 = 0;
      }
      if ( v6 != v1 )
LABEL_20:
        sub_6ECC0("recvbuff.c", 285, 2, "punlinked == rbufp");
      --dword_10720C;
      result = sub_69FA8(v6);
      v1 = v3;
    }
    while ( v3 );
  }
  return result;
}
