void __fastcall sub_1F6DF8(const char *a1)
{
  int v1; // r5
  int v2; // r4
  int v3; // r8
  ssize_t v4; // r6
  void *v5; // r7
  _DWORD *v6; // r4
  int *v7; // r0
  const char *v8; // [sp+4h] [bp-14h] BYREF
  __int64 v9; // [sp+8h] [bp-10h] BYREF
  __int64 v10; // [sp+10h] [bp-8h] BYREF

  v8 = a1;
  if ( sub_1F5F94(&v8, &v10) )
    goto LABEL_9;
  v1 = v10;
  v2 = sub_1F63C0(v10);
  if ( v2 == -1 )
  {
    sub_1F61A4(-1, 9);
    return;
  }
  if ( sub_1F5F94(&v8, &v9) || (v3 = v9, sub_1F5F94(&v8, &v10)) )
  {
LABEL_9:
    sub_1F61A4(-1, 5);
  }
  else
  {
    v4 = v10;
    v5 = sub_93028(v10);
    if ( !sub_230020(v3, v5, v4) )
    {
      if ( v2 == -3 )
      {
        if ( v1 == 1 )
          LOWORD(v6) = 31340;
        else
          LOWORD(v6) = 31288;
        HIWORD(v6) = 72;
        sub_25682C(*v6, v5, v4);
        sub_25680C(*v6);
        if ( v4 < 0 )
          goto LABEL_22;
      }
      else
      {
        if ( v2 == -2 )
        {
          sub_1F61A4(-1, 9);
          free(v5);
          return;
        }
        v4 = write(v2, v5, v4);
        if ( v4 < 0 )
        {
          v7 = _errno_location();
          if ( *v7 == 13 )
            *v7 = 9;
LABEL_22:
          sub_1F6474();
          goto LABEL_17;
        }
      }
      sub_1F61A4(v4, 0);
LABEL_17:
      free(v5);
      return;
    }
    free(v5);
    sub_1F61A4(-1, 5);
  }
}
