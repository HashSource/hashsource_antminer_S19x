int __fastcall sub_8BADC(int a1, _DWORD *a2, _BYTE **a3, FILE *stream, char a5)
{
  _BYTE *v7; // r3
  int result; // r0
  const char *v9; // r0
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r10
  const char *v13; // r0
  char *v14; // r2

  if ( (*a2 & 0x10000) != 0 )
  {
    v7 = *a3;
    if ( *a3 )
    {
      if ( *v7 )
      {
        switch ( *v7 )
        {
          case 'C':
          case 'c':
            goto LABEL_10;
          case 'N':
          case 'n':
            v10 = *(const char **)(a1 + 40);
            if ( v10 )
              fputs(v10, stream);
            v11 = *(const char **)(a1 + 44);
            if ( v11 )
              fputs(v11, stream);
            fputc(10, stream);
            v12 = off_B9480;
            v13 = sub_8BA84();
            fprintf(stream, v12, v13);
            if ( *(int *)a1 >= 139264 && *(_DWORD *)(a1 + 128) )
              goto LABEL_14;
            if ( *(_DWORD *)(a1 + 72) )
              goto LABEL_21;
            goto LABEL_7;
          case 'V':
          case 'v':
            goto LABEL_6;
          default:
            fprintf(stderr, off_B94BC);
            sub_7E2B8(1);
        }
      }
    }
  }
  sub_88348((int *)(a1 + 12), 0);
  if ( (*(_DWORD *)(a1 + 12) & 0x1000) != 0 )
  {
LABEL_10:
    v9 = *(const char **)(a1 + 40);
    if ( v9 || (v9 = *(const char **)(a1 + 48)) != 0 )
      fputs(v9, stream);
    else
      sub_7DA6C((int)stream, *(const char **)(a1 + 56), 0, 0);
    if ( *(int *)a1 >= 139264 && *(_DWORD *)(a1 + 128) )
    {
LABEL_14:
      fputc(10, stream);
      fputs(*(const char **)(a1 + 128), stream);
    }
    else if ( *(_DWORD *)(a1 + 72) )
    {
LABEL_21:
      fputc(10, stream);
      fprintf(stream, off_B95AC, *(_DWORD *)(a1 + 72));
    }
  }
  else
  {
LABEL_6:
    sub_7DA6C((int)stream, *(const char **)(a1 + 48), *(const char **)(a1 + 40), *(const char **)(a1 + 56));
  }
LABEL_7:
  fflush(stream);
  result = ferror(stream);
  if ( result )
  {
    if ( stream == stdout )
      v14 = off_B9530;
    else
      v14 = off_B9534;
    sub_7E374(*(_DWORD *)(a1 + 28), (int)off_B9538, (int)v14);
  }
  if ( a5 )
    sub_7E2B8(0);
  return result;
}
