void __fastcall sub_28AF54(int a1)
{
  char *v1; // r8
  const char *v2; // r7
  int v3; // r0
  char *v4; // r0
  char *v5; // r4
  const char *v6; // r2
  char *v7; // r6
  const char *v8; // t1
  const char *v9; // t1
  char *v10; // r7
  char *v11; // r6
  int v12; // r0
  int v13; // t1
  char *v15; // [sp+14h] [bp-8h]

  v1 = sub_283468();
  v15 = v1;
  fputc(10, (FILE *)dword_48AAB0);
  v2 = *(const char **)v1;
  if ( *(_DWORD *)v1 )
  {
    do
    {
      v3 = sub_2898DC(v2);
      v4 = sub_28ABEC(v3, (int)off_46DED0);
      v5 = v4;
      if ( a1 )
      {
        if ( !v4 )
        {
          fprintf((FILE *)dword_48AAB0, "# %s (not bound)\n", v2);
          goto LABEL_9;
        }
        v6 = *(const char **)v4;
        if ( *(_DWORD *)v4 )
        {
          v7 = v4;
          do
          {
            fprintf((FILE *)dword_48AAB0, "\"%s\": %s\n", v6, v2);
            sub_297758(*(_DWORD *)v7);
            v8 = (const char *)*((_DWORD *)v7 + 1);
            v7 += 4;
            v6 = v8;
          }
          while ( v8 );
        }
      }
      else
      {
        if ( !v4 )
        {
          fprintf((FILE *)dword_48AAB0, "%s is not bound to any keys\n", v2);
          goto LABEL_9;
        }
        fprintf((FILE *)dword_48AAB0, "%s can be found on ", v2);
        if ( *(_DWORD *)v5 )
        {
          v10 = v5;
          v11 = v5;
          while ( 1 )
          {
            v11 += 4;
            fprintf((FILE *)dword_48AAB0, "\"%s\"%s");
            if ( !*(_DWORD *)v11 )
              break;
            if ( v5 + 20 == v11 )
            {
              fwrite("...\n", 1u, 4u, (FILE *)dword_48AAB0);
              break;
            }
          }
          v12 = *(_DWORD *)v5;
          if ( *(_DWORD *)v5 )
          {
            do
            {
              sub_297758(v12);
              v13 = *((_DWORD *)v10 + 1);
              v10 += 4;
              v12 = v13;
            }
            while ( v13 );
          }
        }
      }
      sub_297758(v5);
LABEL_9:
      v9 = (const char *)*((_DWORD *)v1 + 1);
      v1 += 4;
      v2 = v9;
    }
    while ( v9 );
  }
  free(v15);
}
