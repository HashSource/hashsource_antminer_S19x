void __fastcall sub_2D174(FILE *s)
{
  int v2; // r6
  const char *v3; // r11
  char *v4; // r0
  const char *v5; // r0
  const char *v6; // r0
  char *v7; // r2
  int v8; // r3
  const char *v9; // r10
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  int v13; // r0
  int v14; // r4
  const char *v15; // r10
  char *v16; // r0
  const char *v17; // r0
  const char *v18; // r11
  char *v19; // r3
  const char *v20; // r0
  const char *v21; // r0
  const char **v22; // r4
  char *v23; // r8
  char *v24; // r11
  const char *(__fastcall *v25)(int, _DWORD *); // r2
  bool v26; // zf
  int v27; // r3
  int v28; // r1
  int (*v29)(); // r2
  bool v30; // zf
  const char **v31; // r3
  const char *v32; // r0
  int v33; // r1
  int v34; // r4
  int v35; // r5
  bool v36; // zf
  int v37; // [sp+14h] [bp-10h]
  const char *v38; // [sp+14h] [bp-10h]
  const char *v39; // [sp+18h] [bp-Ch]
  const char *v40; // [sp+18h] [bp-Ch]
  const char *v41; // [sp+1Ch] [bp-8h]

  fwrite("{\n\"pools\" : [", 1u, 0xDu, s);
  if ( dword_733CC > 0 )
  {
    v2 = 0;
    do
    {
      v13 = sub_2B7BC(v2);
      v8 = *(_DWORD *)(v13 + 56);
      v14 = v13;
      if ( v8 == 1 )
      {
        if ( v2 )
          v15 = ",";
        else
          v15 = "";
        if ( *(_DWORD *)(v13 + 184) )
        {
          v16 = sub_22B68(*(char **)(v13 + 180));
          v40 = sub_2AD7C(v16);
          v17 = *(const char **)(v14 + 184);
          if ( v17 )
          {
            v20 = sub_2AD7C(v17);
            v19 = "|";
            v18 = v20;
            if ( !*(_DWORD *)(v14 + 184) )
              v19 = "";
          }
          else
          {
            v18 = "";
            v19 = "";
          }
        }
        else
        {
          v18 = "";
          v40 = "";
          v19 = "";
        }
        v38 = v19;
        v21 = sub_2AD7C(*(const char **)(v14 + 164));
        fprintf(s, "%s\n\t{\n\t\t\"url\" : \"%s%s%s%s\",", v15, v40, v18, v38, v21);
        if ( !*(_BYTE *)(v14 + 580) )
          goto LABEL_11;
      }
      else
      {
        if ( v2 )
          v3 = ",";
        else
          v3 = "";
        if ( *(_DWORD *)(v13 + 184) )
        {
          v4 = sub_22B68(*(char **)(v13 + 180));
          v41 = sub_2AD7C(v4);
          v5 = *(const char **)(v14 + 184);
          if ( v5 )
          {
            v6 = sub_2AD7C(v5);
            v7 = "|";
            v8 = *(_DWORD *)(v14 + 56);
            v9 = v6;
            if ( !*(_DWORD *)(v14 + 184) )
              v7 = "";
          }
          else
          {
            v8 = *(_DWORD *)(v14 + 56);
            v9 = "";
            v7 = "";
          }
        }
        else
        {
          v9 = "";
          v41 = "";
          v7 = "";
        }
        v39 = v7;
        v37 = v8;
        v10 = sub_2AD7C(*(const char **)(v14 + 164));
        fprintf(s, "%s\n\t{\n\t\t\"quota\" : \"%s%s%s%d;%s\",", v3, v41, v9, v39, v37, v10);
        if ( !*(_BYTE *)(v14 + 580) )
          goto LABEL_11;
      }
      fwrite(&unk_51CDC, 1u, 0x21u, s);
LABEL_11:
      ++v2;
      v11 = sub_2AD7C(*(const char **)(v14 + 172));
      fprintf(s, "\n\t\t\"user\" : \"%s\",", v11);
      v12 = sub_2AD7C(*(const char **)(v14 + 176));
      fprintf(s, "\n\t\t\"pass\" : \"%s\"\n\t}", v12);
    }
    while ( dword_733CC > v2 );
  }
  fwrite("\n]\n", 1u, 3u, s);
  if ( dword_67FE4 != 16 )
  {
    v22 = (const char **)&unk_67FFC;
    while ( 1 )
    {
      v23 = _strdup(*(v22 - 7));
      v24 = strtok(v23, "|");
      if ( v24 )
        break;
LABEL_77:
      v22 += 7;
      free(v23);
      if ( *(v22 - 6) == (const char *)16 )
        goto LABEL_78;
    }
    while ( 1 )
    {
      if ( v24[1] == 45 && *(v22 - 1) != (const char *)&unk_76870 )
      {
        v28 = (int)*(v22 - 6);
        if ( (v28 & 1) == 0 )
          goto LABEL_72;
        v29 = (int (*)())*(v22 - 5);
        v30 = (char *)v29 == (char *)sub_40068;
        if ( (char *)v29 != (char *)sub_40068 )
          v30 = v29 == sub_40088;
        if ( v30 && **(v22 - 2) == ((char *)v29 == (char *)sub_40068) )
        {
          fprintf(s, ",\n\"%s\" : true", v24 + 2);
        }
        else
        {
LABEL_72:
          if ( (v28 & 2) == 0 )
            goto LABEL_73;
          v25 = (const char *(__fastcall *)(int, _DWORD *))*(v22 - 4);
          v26 = v25 == sub_2C234;
          if ( v25 != sub_2C234 )
            v26 = (char *)v25 == (char *)sub_40268;
          v27 = v26;
          if ( v25 == sub_2C264 )
            v27 |= 1u;
          if ( v25 == sub_2C4C4 )
            v27 |= 1u;
          if ( v25 == sub_2C494 )
            v27 |= 1u;
          if ( v25 == sub_2C468 )
            v27 |= 1u;
          if ( v25 == sub_2C43C )
            v27 |= 1u;
          if ( v25 == sub_2C40C )
            v27 |= 1u;
          if ( v25 == sub_2C3E0 )
            v27 |= 1u;
          if ( v25 == sub_2C3B4 )
            v27 |= 1u;
          if ( v25 == sub_2C388 )
            v27 |= 1u;
          if ( v25 == sub_2C358 )
            v27 |= 1u;
          if ( v25 == sub_2C328 )
            v27 |= 1u;
          if ( v25 == sub_2C2F8 )
            v27 |= 1u;
          if ( v25 == sub_2C2C8 )
            v27 |= 1u;
          if ( v25 == sub_2C298 )
            v27 |= 1u;
          if ( v27 )
          {
            fprintf(s, ",\n\"%s\" : \"%d\"", v24 + 2, *(_DWORD *)*(v22 - 2));
          }
          else
          {
            v36 = (char *)v25 == (char *)sub_2BEF8;
            if ( (char *)v25 != (char *)sub_2BEF8 )
              v36 = (char *)v25 == (char *)sub_2BEA0;
            if ( !v36 )
            {
LABEL_73:
              if ( (v28 & 6) != 0 )
              {
                v31 = (const char **)*(v22 - 2);
                if ( v31 != (const char **)&unk_68FE8 )
                {
                  if ( *v31 )
                  {
                    v32 = sub_2AD7C(*v31);
                    fprintf(s, ",\n\"%s\" : \"%s\"", v24 + 2, v32);
                  }
                }
              }
              goto LABEL_63;
            }
            fprintf(s, ",\n\"%s\" : \"%.1f\"", v24 + 2, *(float *)*(v22 - 2));
          }
        }
      }
LABEL_63:
      v24 = strtok(0, "|");
      if ( !v24 )
        goto LABEL_77;
    }
  }
LABEL_78:
  v33 = dword_68FD0;
  if ( dword_68FD0 == 4 )
  {
    fwrite(",\n\"balance\" : true", 1u, 0x12u, s);
    v33 = dword_68FD0;
  }
  if ( v33 == 3 )
  {
    fwrite(",\n\"load-balance\" : true", 1u, 0x17u, s);
    v33 = dword_68FD0;
  }
  if ( v33 == 1 )
  {
    fwrite(",\n\"round-robin\" : true", 1u, 0x16u, s);
    v33 = dword_68FD0;
  }
  if ( v33 == 2 )
    fprintf(s, ",\n\"rotate\" : \"%d\"", dword_73464);
  fwrite("\n}\n", 1u, 3u, s);
  v34 = dword_68DF0;
  dword_68DF0 = 0;
  if ( v34 )
  {
    do
    {
      v35 = *(_DWORD *)(v34 + 4);
      free(*(void **)v34);
      free((void *)v34);
      v34 = v35;
    }
    while ( v35 );
  }
}
