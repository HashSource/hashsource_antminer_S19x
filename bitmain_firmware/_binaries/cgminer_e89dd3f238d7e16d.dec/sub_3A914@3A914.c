void __fastcall sub_3A914(FILE *a1)
{
  const char *v1; // r5
  const char *v2; // r0
  char *v3; // r7
  char *v4; // r6
  const char *v5; // r4
  int v6; // r8
  char *v7; // r0
  const char *v8; // r5
  const char *v9; // r0
  char *v10; // r7
  char *v11; // r6
  const char *v12; // r4
  char *v13; // r0
  char *v14; // r0
  char *v15; // r0
  char *v16; // r0
  int v18; // [sp+18h] [bp-34h]
  const char *v19; // [sp+1Ch] [bp-30h]
  char *v20; // [sp+20h] [bp-2Ch]
  char *k; // [sp+24h] [bp-28h]
  int i; // [sp+28h] [bp-24h]
  char **j; // [sp+2Ch] [bp-20h]

  fwrite("{\n\"pools\" : [", 1u, 0xDu, a1);
  for ( i = 0; i < dword_90E90; ++i )
  {
    v18 = sub_35320(i);
    if ( *(_DWORD *)(v18 + 56) == 1 )
    {
      if ( i <= 0 )
        v8 = byte_6E658;
      else
        v8 = ",";
      if ( *(_DWORD *)(v18 + 184) )
      {
        v9 = sub_1FB84(*(char **)(v18 + 180));
        v10 = sub_3A7F8(v9);
      }
      else
      {
        v10 = byte_6E658;
      }
      if ( *(_DWORD *)(v18 + 184) )
        v11 = sub_3A7F8(*(const char **)(v18 + 184));
      else
        v11 = byte_6E658;
      if ( *(_DWORD *)(v18 + 184) )
        v12 = "|";
      else
        v12 = byte_6E658;
      v13 = sub_3A7F8(*(const char **)(v18 + 164));
      fprintf(a1, "%s\n\t{\n\t\t\"url\" : \"%s%s%s%s\",", v8, v10, v11, v12, v13);
    }
    else
    {
      if ( i <= 0 )
        v1 = byte_6E658;
      else
        v1 = ",";
      if ( *(_DWORD *)(v18 + 184) )
      {
        v2 = sub_1FB84(*(char **)(v18 + 180));
        v3 = sub_3A7F8(v2);
      }
      else
      {
        v3 = byte_6E658;
      }
      if ( *(_DWORD *)(v18 + 184) )
        v4 = sub_3A7F8(*(const char **)(v18 + 184));
      else
        v4 = byte_6E658;
      if ( *(_DWORD *)(v18 + 184) )
        v5 = "|";
      else
        v5 = byte_6E658;
      v6 = *(_DWORD *)(v18 + 56);
      v7 = sub_3A7F8(*(const char **)(v18 + 164));
      fprintf(a1, "%s\n\t{\n\t\t\"quota\" : \"%s%s%s%d;%s\",", v1, v3, v4, v5, v6, v7);
    }
    if ( *(_BYTE *)(v18 + 580) )
      fwrite("\n\t\t\"extranonce-subscribe\" : true,", 1u, 0x21u, a1);
    v14 = sub_3A7F8(*(const char **)(v18 + 172));
    fprintf(a1, "\n\t\t\"user\" : \"%s\",", v14);
    v15 = sub_3A7F8(*(const char **)(v18 + 176));
    fprintf(a1, "\n\t\t\"pass\" : \"%s\"\n\t}", v15);
  }
  fwrite("\n]\n", 1u, 3u, a1);
  for ( j = &off_85AF8; j[1] != (char *)16; j += 7 )
  {
    v20 = strdup(*j);
    for ( k = strtok(v20, "|"); k; k = strtok(0, "|") )
    {
      if ( k[1] == 45 && j[6] != (char *)&unk_9432C )
      {
        if ( ((unsigned int)j[1] & 1) != 0
          && (j[2] == (char *)sub_54370 || j[2] == (char *)sub_543D0)
          && *j[5] == (j[2] == (char *)sub_54370) )
        {
          fprintf(a1, ",\n\"%s\" : true", k + 2);
        }
        else if ( ((unsigned int)j[1] & 2) != 0
               && (j[3] == (char *)sub_54560
                || j[3] == (char *)sub_2EA7C
                || j[3] == (char *)sub_2EAB4
                || j[3] == (char *)sub_2EAEC
                || j[3] == (char *)sub_2ED54
                || j[3] == (char *)sub_2EB24
                || j[3] == (char *)sub_2EB5C
                || j[3] == (char *)sub_2EB94
                || j[3] == (char *)sub_2EBCC
                || j[3] == (char *)sub_2EC04
                || j[3] == (char *)sub_2ED8C
                || j[3] == (char *)sub_2EC3C
                || j[3] == (char *)sub_2EC74
                || j[3] == (char *)sub_2ECAC
                || j[3] == (char *)sub_2ECE4
                || j[3] == (char *)sub_2ED1C) )
        {
          fprintf(a1, ",\n\"%s\" : \"%d\"", k + 2, *(_DWORD *)j[5]);
        }
        else if ( ((unsigned int)j[1] & 2) != 0 && (j[3] == (char *)sub_301EC || j[3] == (char *)sub_30278) )
        {
          fprintf(a1, ",\n\"%s\" : \"%.1f\"", k + 2, *(float *)j[5]);
        }
        else if ( ((unsigned int)j[1] & 6) != 0 && j[5] != (char *)&unk_86E2C )
        {
          v19 = *(const char **)j[5];
          if ( v19 )
          {
            v16 = sub_3A7F8(v19);
            fprintf(a1, ",\n\"%s\" : \"%s\"", k + 2, v16);
          }
        }
      }
    }
    free(v20);
  }
  if ( dword_86CD4 == 4 )
    fwrite(",\n\"balance\" : true", 1u, 0x12u, a1);
  if ( dword_86CD4 == 3 )
    fwrite(",\n\"load-balance\" : true", 1u, 0x17u, a1);
  if ( dword_86CD4 == 1 )
    fwrite(",\n\"round-robin\" : true", 1u, 0x16u, a1);
  if ( dword_86CD4 == 2 )
    fprintf(a1, ",\n\"rotate\" : \"%d\"", dword_91F4C);
  fwrite("\n}\n", 1u, 3u, a1);
  sub_3A784();
}
