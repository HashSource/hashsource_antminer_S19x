int __fastcall sub_2AD490(int a1, int a2, int a3)
{
  int v3; // r11
  FILE *v4; // r6
  size_t v9; // r0
  size_t v10; // r3
  char *v11; // r1
  unsigned int v12; // r0
  char *v13; // r2
  char v14; // t1
  const char *v15; // r7
  size_t v16; // r10
  unsigned int v17; // r4
  char *v18; // r0
  char *v19; // r5

  v3 = a3 == 0;
  if ( !a2 )
    v3 = 1;
  if ( !a1 )
    v3 = 1;
  if ( v3 )
  {
    v4 = 0;
    ((void (__fastcall *)(int))loc_2A6C48)(5);
  }
  else
  {
    v4 = sub_2A8794(a3, (int)"r");
    if ( v4 )
    {
      while ( 1 )
      {
        v9 = fread(&unk_48BBFC, 1u, 0x2000u, v4);
        v10 = v9;
        if ( !v9 )
          break;
        v11 = (char *)&unk_48BBFC + v9;
        v12 = ~v3;
        if ( (_UNKNOWN *)((char *)&unk_48BBFC + v10) > &unk_48BBFC )
        {
          v13 = (char *)&unk_48BBFC;
          do
          {
            v14 = *v13++;
            v12 = dword_411D28[(unsigned __int8)(v14 ^ v12)] ^ (v12 >> 8);
          }
          while ( v11 != v13 );
        }
        v3 = ~v12;
      }
      fclose(v4);
      v15 = (const char *)sub_3245A4(a3);
      v16 = strlen(v15);
      v17 = (v16 + 4) & 0xFFFFFFFC;
      v18 = (char *)sub_2AB368(v17 + 4);
      v19 = v18;
      if ( v18 )
      {
        memcpy(v18, v15, v16);
        memset(&v19[v16], 0, v17 - v16);
        (*(void (__fastcall **)(int, char *))(*(_DWORD *)(a1 + 4) + 48))(v3, &v19[v17]);
        v4 = (FILE *)sub_2ADDE8(a1, a2, v19, 0, 0, 0, v17 + 4);
        if ( v4 )
          return 1;
        else
          free(v19);
      }
      else
      {
        return 0;
      }
    }
    else
    {
      ((void (__fastcall *)(int))loc_2A6C48)(1);
    }
  }
  return (int)v4;
}
