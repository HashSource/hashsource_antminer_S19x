void __fastcall sub_2C570(int a1, char *s1, const char *a3, int a4, int a5)
{
  void *v7; // r8
  bool v10; // zf
  char *v11; // r3
  int v12; // r2
  bool v13; // zf
  int v14; // r11
  void *v15; // r5
  unsigned int v16; // [sp+Ch] [bp-10h] BYREF

  v7 = *(void **)(a1 + 4);
  if ( strcmp(s1, (const char *)v7)
    || strcmp(a3, *(const char **)(a1 + 8))
    || *(unsigned __int8 *)(a1 + 20) != a4
    || *(unsigned __int8 *)(a1 + 21) != a5 )
  {
    v10 = a3 == 0;
    if ( a3 )
      v10 = *s1 == 0;
    if ( !v10 )
    {
      v11 = (char *)a3;
      while ( 1 )
      {
        if ( *v11 == 46 && v11[1] == 46 )
        {
          v12 = (unsigned __int8)v11[2];
          v13 = v12 == 47;
          if ( v12 != 47 )
            v13 = v12 == 0;
          if ( v13 )
            break;
        }
        v11 = strchr(v11, 47);
        if ( !v11 )
        {
          if ( *(_DWORD *)a1 )
          {
            v14 = 1;
            fclose(*(FILE **)a1);
            v7 = *(void **)(a1 + 4);
            *(_DWORD *)a1 = 0;
          }
          else
          {
            v14 = 0;
          }
          if ( strcmp((const char *)v7, s1) )
          {
            free(v7);
            *(_DWORD *)(a1 + 4) = sub_63D08(s1);
          }
          v15 = *(void **)(a1 + 8);
          if ( strcmp((const char *)v15, a3) )
          {
            free(v15);
            *(_DWORD *)(a1 + 8) = sub_63D08(a3);
          }
          *(_BYTE *)(a1 + 20) = a4;
          *(_BYTE *)(a1 + 21) = a5;
          if ( v14 )
          {
            sub_5F724(&v16);
            sub_2BE54(a1, v16);
          }
          return;
        }
      }
    }
  }
}
