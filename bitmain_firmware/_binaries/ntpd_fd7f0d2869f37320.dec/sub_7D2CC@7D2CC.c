int __fastcall sub_7D2CC(int a1, char *a2, _DWORD *a3, char **a4)
{
  char *v7; // r0
  char *v8; // r7
  size_t v9; // r9
  _BYTE *v10; // r0
  void *v11; // r10

  if ( !a2 )
    sub_6FC54((int)"./../lib/isc/unix/file.c", 515, 0, "path != ((void *)0)");
  v7 = strrchr(a2, 47);
  if ( v7 == a2 )
  {
    v8 = v7 + 1;
    v11 = sub_64C8C("/");
  }
  else
  {
    if ( v7 )
    {
      v8 = v7 + 1;
      v9 = v7 + 1 - a2;
      v10 = sub_64B04(0, v9, 0, 0);
      v11 = v10;
      if ( v10 )
      {
        sub_6E4B4(v10, (unsigned __int8 *)a2, v9);
        goto LABEL_6;
      }
      return 1;
    }
    v8 = a2;
    v11 = sub_64C8C(".");
  }
  if ( !v11 )
    return 1;
LABEL_6:
  if ( *v8 )
  {
    *a3 = v11;
    *a4 = v8;
    return 0;
  }
  else
  {
    free(v11);
    return 30;
  }
}
