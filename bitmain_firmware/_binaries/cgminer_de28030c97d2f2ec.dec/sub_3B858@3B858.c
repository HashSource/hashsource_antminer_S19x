void __fastcall sub_3B858(FILE *a1)
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
  const char *v18; // [sp+18h] [bp-34h]
  char *v19; // [sp+1Ch] [bp-30h]
  int v20; // [sp+20h] [bp-2Ch]
  char *k; // [sp+24h] [bp-28h]
  int i; // [sp+28h] [bp-24h]
  char **j; // [sp+2Ch] [bp-20h]

  fwrite("{\n\"pools\" : [", 1u, 0xDu, a1);
  for ( i = 0; i < dword_92028; ++i )
  {
    v20 = sub_3636C(i);
    if ( *(_DWORD *)(v20 + 56) == 1 )
    {
      if ( i <= 0 )
        v8 = byte_6F818;
      else
        v8 = ",";
      if ( *(_DWORD *)(v20 + 184) )
      {
        v9 = sub_20460(*(char **)(v20 + 180));
        v10 = sub_3B73C(v9);
      }
      else
      {
        v10 = byte_6F818;
      }
      if ( *(_DWORD *)(v20 + 184) )
        v11 = sub_3B73C(*(const char **)(v20 + 184));
      else
        v11 = byte_6F818;
      if ( *(_DWORD *)(v20 + 184) )
        v12 = "|";
      else
        v12 = byte_6F818;
      v13 = sub_3B73C(*(const char **)(v20 + 164));
      fprintf(a1, "%s\n\t{\n\t\t\"url\" : \"%s%s%s%s\",", v8, v10, v11, v12, v13);
    }
    else
    {
      if ( i <= 0 )
        v1 = byte_6F818;
      else
        v1 = ",";
      if ( *(_DWORD *)(v20 + 184) )
      {
        v2 = sub_20460(*(char **)(v20 + 180));
        v3 = sub_3B73C(v2);
      }
      else
      {
        v3 = byte_6F818;
      }
      if ( *(_DWORD *)(v20 + 184) )
        v4 = sub_3B73C(*(const char **)(v20 + 184));
      else
        v4 = byte_6F818;
      if ( *(_DWORD *)(v20 + 184) )
        v5 = "|";
      else
        v5 = byte_6F818;
      v6 = *(_DWORD *)(v20 + 56);
      v7 = sub_3B73C(*(const char **)(v20 + 164));
      fprintf(a1, "%s\n\t{\n\t\t\"quota\" : \"%s%s%s%d;%s\",", v1, v3, v4, v5, v6, v7);
    }
    if ( *(_BYTE *)(v20 + 580) )
      fwrite("\n\t\t\"extranonce-subscribe\" : true,", 1u, 0x21u, a1);
    v14 = sub_3B73C(*(const char **)(v20 + 172));
    fprintf(a1, "\n\t\t\"user\" : \"%s\",", v14);
    v15 = sub_3B73C(*(const char **)(v20 + 176));
    fprintf(a1, "\n\t\t\"pass\" : \"%s\"\n\t}", v15);
  }
  fwrite("\n]\n", 1u, 3u, a1);
  for ( j = &off_86C90; j[1] != (char *)16; j += 7 )
  {
    v19 = strdup(*j);
    for ( k = strtok(v19, "|"); k; k = strtok(0, "|") )
    {
      if ( k[1] == 45 && j[6] != (char *)&unk_954C4 )
      {
        if ( ((unsigned int)j[1] & 1) != 0
          && (j[2] == (char *)sub_55008 || j[2] == (char *)sub_55068)
          && *j[5] == (j[2] == (char *)sub_55008) )
        {
          fprintf(a1, ",\n\"%s\" : true", k + 2);
        }
        else if ( ((unsigned int)j[1] & 2) != 0
               && (j[3] == (char *)sub_551F8
                || j[3] == (char *)sub_2FA74
                || j[3] == (char *)sub_2FAAC
                || j[3] == (char *)sub_2FAE4
                || j[3] == (char *)sub_2FD4C
                || j[3] == (char *)sub_2FB1C
                || j[3] == (char *)sub_2FB54
                || j[3] == (char *)sub_2FB8C
                || j[3] == (char *)sub_2FBC4
                || j[3] == (char *)sub_2FBFC
                || j[3] == (char *)sub_2FD84
                || j[3] == (char *)sub_2FC34
                || j[3] == (char *)sub_2FC6C
                || j[3] == (char *)sub_2FCA4
                || j[3] == (char *)sub_2FCDC
                || j[3] == (char *)sub_2FD14) )
        {
          fprintf(a1, ",\n\"%s\" : \"%d\"", k + 2, *(_DWORD *)j[5]);
        }
        else if ( ((unsigned int)j[1] & 2) != 0 && (j[3] == (char *)sub_31334 || j[3] == (char *)sub_313C0) )
        {
          fprintf(a1, ",\n\"%s\" : \"%.1f\"", k + 2, *(float *)j[5]);
        }
        else if ( ((unsigned int)j[1] & 6) != 0 && j[5] != (char *)&unk_87FC4 )
        {
          v18 = *(const char **)j[5];
          if ( v18 )
          {
            v16 = sub_3B73C(v18);
            fprintf(a1, ",\n\"%s\" : \"%s\"", k + 2, v16);
          }
        }
      }
    }
    free(v19);
  }
  if ( dword_87E6C == 4 )
    fwrite(",\n\"balance\" : true", 1u, 0x12u, a1);
  if ( dword_87E6C == 3 )
    fwrite(",\n\"load-balance\" : true", 1u, 0x17u, a1);
  if ( dword_87E6C == 1 )
    fwrite(",\n\"round-robin\" : true", 1u, 0x16u, a1);
  if ( dword_87E6C == 2 )
    fprintf(a1, ",\n\"rotate\" : \"%d\"", dword_930E4);
  fwrite("\n}\n", 1u, 3u, a1);
  sub_3B6CC();
}
