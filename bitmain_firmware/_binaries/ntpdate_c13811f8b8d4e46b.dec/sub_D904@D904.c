char *__fastcall sub_D904(char *result)
{
  char *v1; // r2
  char *v2; // r9
  char *v3; // r4
  int *v4; // r12
  int *v5; // r3
  char *v6; // r0

  v1 = (char *)dword_33338;
  if ( dword_33338 )
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
      v4 = (int *)dword_33338;
      v5 = *(int **)dword_33338;
      if ( (char *)dword_33338 == v1 )
      {
        v6 = v1;
        v4 = &dword_33338;
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
        if ( (char *)dword_3333C == v6 )
          dword_3333C = (int)&dword_33338;
      }
      else
      {
        dword_3333C = 0;
      }
      if ( v6 != v1 )
LABEL_20:
        sub_1073C("recvbuff.c", 285, 2, "punlinked == rbufp");
      --dword_33324;
      result = sub_D66C(v6);
      v1 = v3;
    }
    while ( v3 );
  }
  return result;
}
