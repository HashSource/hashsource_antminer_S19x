const char **__fastcall sub_2AE51C(char *a1, int a2, _DWORD *a3, _DWORD *a4, const char **a5)
{
  const char **v7; // r0
  const char **v8; // r6
  char *v9; // r7
  int v10; // r0
  const char **v11; // r4
  bool v12; // zf
  char *v13; // r0
  const char *v14; // r8
  char *v15; // r3
  char dest[52]; // [sp+4h] [bp-34h] BYREF

  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = -1;
  if ( a5 )
    *a5 = 0;
  v7 = sub_2AE464(a1, a2);
  v8 = v7;
  if ( !v7 )
    return v8;
  if ( a3 )
    *a3 = v7[2] == 0;
  if ( a4 )
    *a4 = *((unsigned __int8 *)v7 + 24);
  if ( !a5 )
    return v8;
  v9 = (char *)*v7;
  v10 = sub_2A65D0();
  v11 = (const char **)v10;
  v12 = v10 == 0;
  if ( v10 )
    v12 = v9 == 0;
  if ( !v12 )
  {
    v13 = strchr(v9, 45);
    if ( v13 )
    {
      v14 = v13 + 1;
      if ( !sub_2AE39C(v13 + 1, v11, a5) )
      {
        strcpy(dest, v14);
        do
        {
          v15 = strrchr(dest, 45);
          if ( !v15 )
            break;
          *v15 = 0;
        }
        while ( !sub_2AE39C(dest, v11, a5) );
      }
    }
    else
    {
      sub_2AE39C(v9, v11, a5);
    }
    goto LABEL_21;
  }
  if ( v10 )
  {
LABEL_21:
    free(v11);
    return v8;
  }
  return v8;
}
