int __fastcall sub_E9D40(DIR ***a1, const char *a2)
{
  bool v2; // zf
  int v3; // r4
  int *v6; // r0
  DIR **v7; // r3
  int *v8; // r7
  DIR *v9; // r4
  struct dirent *v10; // r0
  int v11; // r1
  DIR **v13; // r4
  DIR *v14; // r0
  DIR **v15; // r3
  int v16; // r6

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  v3 = v2;
  if ( !v2 )
  {
    v6 = _errno_location();
    v7 = *a1;
    v8 = v6;
    *v6 = v3;
    if ( v7 )
    {
      v9 = *v7;
      goto LABEL_9;
    }
    v13 = (DIR **)calloc(0x1008u, 1u);
    *a1 = v13;
    if ( v13 )
    {
      v14 = opendir(a2);
      v15 = *a1;
      *v13 = v14;
      v9 = *v15;
      if ( *v15 )
      {
LABEL_9:
        v10 = readdir(v9);
        if ( !v10 )
          return 0;
        sub_E9F28(*a1 + 1, v10->d_name, 4097);
        return (int)(*a1 + 1);
      }
      v16 = *v8;
      free(v15);
      *a1 = 0;
      v11 = 0;
      *v8 = v16;
    }
    else
    {
      v11 = 0;
      *v8 = 12;
    }
    return v11;
  }
  *_errno_location() = 22;
  return 0;
}
