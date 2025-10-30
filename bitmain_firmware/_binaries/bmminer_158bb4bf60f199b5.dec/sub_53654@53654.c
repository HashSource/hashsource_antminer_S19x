void __fastcall sub_53654(FILE *s)
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
  if ( dword_242F4C > 0 )
  {
    v2 = 0;
    do
    {
      v13 = sub_51EEC(v2);
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
          v16 = sub_497D0(*(char **)(v13 + 180));
          v40 = sub_5199C(v16);
          v17 = *(const char **)(v14 + 184);
          if ( v17 )
          {
            v20 = sub_5199C(v17);
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
        v21 = sub_5199C(*(const char **)(v14 + 164));
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
          v4 = sub_497D0(*(char **)(v13 + 180));
          v41 = sub_5199C(v4);
          v5 = *(const char **)(v14 + 184);
          if ( v5 )
          {
            v6 = sub_5199C(v5);
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
        v10 = sub_5199C(*(const char **)(v14 + 164));
        fprintf(s, "%s\n\t{\n\t\t\"quota\" : \"%s%s%s%d;%s\",", v3, v41, v9, v39, v37, v10);
        if ( !*(_BYTE *)(v14 + 580) )
          goto LABEL_11;
      }
      fwrite("\n\t\t\"extranonce-subscribe\" : true,", 1u, 0x21u, s);
LABEL_11:
      ++v2;
      v11 = sub_5199C(*(const char **)(v14 + 172));
      fprintf(s, "\n\t\t\"user\" : \"%s\",", v11);
      v12 = sub_5199C(*(const char **)(v14 + 176));
      fprintf(s, "\n\t\t\"pass\" : \"%s\"\n\t}", v12);
    }
    while ( dword_242F4C > v2 );
  }
  fwrite("\n]\n", 1u, 3u, s);
  if ( dword_9E54C != 16 )
  {
    v22 = (const char **)&unk_9E564;
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
      if ( v24[1] == 45 && *(v22 - 1) != (const char *)&unk_2463F0 )
      {
        v28 = (int)*(v22 - 6);
        if ( (v28 & 1) == 0 )
          goto LABEL_72;
        v29 = (int (*)())*(v22 - 5);
        v30 = (char *)v29 == (char *)sub_6428C;
        if ( (char *)v29 != (char *)sub_6428C )
          v30 = v29 == sub_642AC;
        if ( v30 && **(v22 - 2) == ((char *)v29 == (char *)sub_6428C) )
        {
          fprintf(s, ",\n\"%s\" : true", v24 + 2);
        }
        else
        {
LABEL_72:
          if ( (v28 & 2) == 0 )
            goto LABEL_73;
          v25 = (const char *(__fastcall *)(int, _DWORD *))*(v22 - 4);
          v26 = v25 == sub_526DC;
          if ( v25 != sub_526DC )
            v26 = (char *)v25 == (char *)sub_6448C;
          v27 = v26;
          if ( v25 == sub_52738 )
            v27 |= 1u;
          if ( v25 == sub_5296C )
            v27 |= 1u;
          if ( v25 == sub_5293C )
            v27 |= 1u;
          if ( v25 == sub_5270C )
            v27 |= 1u;
          if ( v25 == sub_52910 )
            v27 |= 1u;
          if ( v25 == sub_528E0 )
            v27 |= 1u;
          if ( v25 == sub_528B4 )
            v27 |= 1u;
          if ( v25 == sub_52888 )
            v27 |= 1u;
          if ( v25 == sub_5285C )
            v27 |= 1u;
          if ( v25 == sub_5282C )
            v27 |= 1u;
          if ( v25 == sub_527FC )
            v27 |= 1u;
          if ( v25 == sub_527CC )
            v27 |= 1u;
          if ( v25 == sub_5279C )
            v27 |= 1u;
          if ( v25 == sub_5276C )
            v27 |= 1u;
          if ( v27 )
          {
            fprintf(s, ",\n\"%s\" : \"%d\"", v24 + 2, *(_DWORD *)*(v22 - 2));
          }
          else
          {
            v36 = (char *)v25 == (char *)sub_52494;
            if ( (char *)v25 != (char *)sub_52494 )
              v36 = (char *)v25 == (char *)sub_5243C;
            if ( !v36 )
            {
LABEL_73:
              if ( (v28 & 6) != 0 )
              {
                v31 = (const char **)*(v22 - 2);
                if ( v31 != (const char **)&unk_1AF0CC )
                {
                  if ( *v31 )
                  {
                    v32 = sub_5199C(*v31);
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
  v33 = dword_1AEEB8;
  if ( dword_1AEEB8 == 4 )
  {
    fwrite(",\n\"balance\" : true", 1u, 0x12u, s);
    v33 = dword_1AEEB8;
  }
  if ( v33 == 3 )
  {
    fwrite(",\n\"load-balance\" : true", 1u, 0x17u, s);
    v33 = dword_1AEEB8;
  }
  if ( v33 == 1 )
  {
    fwrite(",\n\"round-robin\" : true", 1u, 0x16u, s);
    v33 = dword_1AEEB8;
  }
  if ( v33 == 2 )
    fprintf(s, ",\n\"rotate\" : \"%d\"", dword_242FE4);
  fwrite("\n}\n", 1u, 3u, s);
  v34 = dword_1AECE0;
  dword_1AECE0 = 0;
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
