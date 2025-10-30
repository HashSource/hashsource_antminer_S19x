void __fastcall sub_2C8C8(int a1, char *s1, const char *a3, int a4, int a5)
{
  void *v6; // r8
  bool v10; // zf
  const char *v11; // r3
  char *v12; // r0
  int v13; // r2
  bool v14; // zf
  int v15; // r11
  void *v16; // r6
  unsigned int v17; // [sp+Ch] [bp-10h] BYREF

  v6 = *(void **)(a1 + 4);
  if ( strcmp(s1, (const char *)v6)
    || strcmp(a3, *(const char **)(a1 + 8))
    || *(unsigned __int8 *)(a1 + 20) != a4
    || *(unsigned __int8 *)(a1 + 21) != a5 )
  {
    v10 = a3 == 0;
    if ( a3 )
      v10 = *s1 == 0;
    if ( !v10 )
    {
      v11 = a3;
      if ( *a3 == 46 )
        goto LABEL_9;
      while ( 1 )
      {
        v12 = strchr(v11, 47);
        v11 = v12;
        if ( !v12 )
          break;
        if ( *v12 == 46 )
        {
LABEL_9:
          if ( v11[1] == 46 )
          {
            v13 = *((unsigned __int8 *)v11 + 2);
            v14 = v13 == 0;
            if ( v11[2] )
              v14 = v13 == 47;
            if ( v14 )
              return;
          }
        }
      }
      if ( *(_DWORD *)a1 )
      {
        fclose(*(FILE **)a1);
        v15 = 1;
        v6 = *(void **)(a1 + 4);
        *(_DWORD *)a1 = 0;
      }
      else
      {
        v15 = 0;
      }
      if ( strcmp((const char *)v6, s1) )
      {
        free(v6);
        *(_DWORD *)(a1 + 4) = sub_64C8C(s1);
      }
      v16 = *(void **)(a1 + 8);
      if ( strcmp((const char *)v16, a3) )
      {
        free(v16);
        *(_DWORD *)(a1 + 8) = sub_64C8C(a3);
      }
      *(_BYTE *)(a1 + 20) = a4;
      *(_BYTE *)(a1 + 21) = a5;
      if ( v15 )
      {
        sub_6055C(&v17);
        sub_2C1C4(a1, v17);
      }
    }
  }
}
