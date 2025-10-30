char **__fastcall sub_A9B34(int *a1, char *s2)
{
  int v3; // r3
  bool v4; // nf
  int v5; // r0
  int v6; // r6
  char **v7; // r4
  __int16 v8; // r3
  const char *v9; // r0
  __int16 v11; // r3
  const char *v12; // r0
  const char *v13; // r0
  __int16 v14; // r3
  const char *v15; // r0
  __int16 v16; // r3
  const char *v17; // r0
  const char *v18; // r0
  const char *v19; // r3
  const char *v20; // r0
  const char *v21; // r0
  __int16 v22; // r3
  const char *v23; // r0
  const char *v24; // r0
  __int16 v25; // r3
  const char *v26; // r0
  const char *v27; // r0
  __int16 v28; // r3
  const char *v29; // r0
  __int16 v30; // r3
  const char *v31; // r0
  const char *v32; // r0
  __int16 v33; // r3
  const char *v34; // r0
  __int16 v35; // r3
  const char *v36; // r0
  __int16 v37; // r3
  const char *v38; // r0
  const char *v39; // r0
  __int16 v40; // r3
  const char *v41; // r0
  __int16 v42; // r3
  const char *v43; // r0
  __int16 v44; // r3
  const char *v45; // r0
  const char *v46; // r0

  if ( !s2 )
    return 0;
  v3 = *a1;
  v4 = (*a1 & 4) != 0;
  v5 = *a1 & 8;
  v6 = v3 & 1;
  if ( v4 )
  {
    if ( (v3 & 2) != 0 )
    {
      if ( (v3 & 0x20) != 0 )
      {
        if ( v5 )
        {
          v7 = (char **)&unk_202E1C;
          while ( 1 )
          {
            if ( v6 )
            {
              v20 = v7[2];
              if ( v20 )
              {
                if ( !strcmp(v20, s2) )
                  break;
              }
            }
            v19 = v7[1];
            __pld(v7 + 21);
            if ( v19 )
            {
              if ( !strcasecmp(v19, s2) )
                break;
            }
            v7 += 4;
            if ( v7 == &off_20311C )
              return 0;
          }
        }
        else
        {
          v7 = (char **)&unk_202E1C;
          while ( 1 )
          {
            v44 = *((_WORD *)v7 + 6);
            __pld(v7 + 23);
            if ( (v44 & 8) == 0 )
            {
              if ( v6 )
              {
                v45 = v7[2];
                if ( v45 )
                {
                  if ( !strcmp(v45, s2) )
                    break;
                }
              }
              v46 = v7[1];
              if ( v46 )
              {
                if ( !strcasecmp(v46, s2) )
                  break;
              }
            }
            v7 += 4;
            if ( v7 == &off_20311C )
              return 0;
          }
        }
      }
      else if ( v5 )
      {
        v7 = (char **)&unk_202E1C;
        while ( 1 )
        {
          v16 = *((_WORD *)v7 + 6);
          __pld(v7 + 23);
          if ( (v16 & 0x20) == 0 )
          {
            if ( v6 )
            {
              v17 = v7[2];
              if ( v17 )
              {
                if ( !strcmp(v17, s2) )
                  break;
              }
            }
            v18 = v7[1];
            if ( v18 )
            {
              if ( !strcasecmp(v18, s2) )
                break;
            }
          }
          v7 += 4;
          if ( v7 == &off_20311C )
            return 0;
        }
      }
      else
      {
        v7 = (char **)&unk_202E1C;
        while ( 1 )
        {
          v28 = *((_WORD *)v7 + 6);
          __pld(v7 + 23);
          if ( (v28 & 8) == 0 && (v28 & 0x20) == 0 )
          {
            if ( v6 )
            {
              v29 = v7[2];
              if ( v29 )
              {
                if ( !strcmp(v29, s2) )
                  break;
              }
            }
            v27 = v7[1];
            if ( v27 )
            {
              if ( !strcasecmp(v27, s2) )
                break;
            }
          }
          v7 += 4;
          if ( v7 == &off_20311C )
            return 0;
        }
      }
    }
    else if ( v5 )
    {
      if ( (v3 & 0x20) != 0 )
      {
        v7 = (char **)&unk_202E1C;
        while ( 1 )
        {
          if ( v6 )
          {
            v21 = v7[2];
            if ( v21 )
            {
              if ( !strcmp(v21, s2) )
                break;
            }
          }
          v7 += 4;
          if ( v7 == &off_20311C )
            return 0;
        }
      }
      else
      {
        v7 = (char **)&unk_202E1C;
        while ( 1 )
        {
          v42 = *((_WORD *)v7 + 6);
          __pld(v7 + 35);
          if ( (v42 & 0x20) == 0 )
          {
            if ( v6 )
            {
              v43 = v7[2];
              if ( v43 )
              {
                if ( !strcmp(v43, s2) )
                  break;
              }
            }
          }
          v7 += 4;
          if ( v7 == &off_20311C )
            return 0;
        }
      }
    }
    else if ( (v3 & 0x20) != 0 )
    {
      v7 = (char **)&unk_202E1C;
      while ( 1 )
      {
        v8 = *((_WORD *)v7 + 6);
        __pld(v7 + 35);
        if ( (v8 & 8) == 0 )
        {
          if ( v6 )
          {
            v9 = v7[2];
            if ( v9 )
            {
              if ( !strcmp(v9, s2) )
                break;
            }
          }
        }
        v7 += 4;
        if ( v7 == &off_20311C )
          return 0;
      }
    }
    else
    {
      v7 = (char **)&unk_202E1C;
      while ( 1 )
      {
        v33 = *((_WORD *)v7 + 6);
        __pld(v7 + 31);
        if ( (v33 & 8) == 0 && (v33 & 0x20) == 0 )
        {
          if ( v6 )
          {
            v34 = v7[2];
            if ( v34 )
            {
              if ( !strcmp(v34, s2) )
                break;
            }
          }
        }
        v7 += 4;
        if ( v7 == &off_20311C )
          return 0;
      }
    }
  }
  else if ( v5 )
  {
    if ( (v3 & 2) != 0 )
    {
      if ( (v3 & 0x20) != 0 )
      {
        v7 = (char **)&unk_202E1C;
        while ( 1 )
        {
          v11 = *((_WORD *)v7 + 6);
          __pld(v7 + 23);
          if ( (v11 & 4) == 0 )
          {
            if ( v6 )
            {
              v12 = v7[2];
              if ( v12 )
              {
                if ( !strcmp(v12, s2) )
                  break;
              }
            }
            v13 = v7[1];
            if ( v13 )
            {
              if ( !strcasecmp(v13, s2) )
                break;
            }
          }
          v7 += 4;
          if ( v7 == &off_20311C )
            return 0;
        }
      }
      else
      {
        v7 = (char **)&unk_202E1C;
        while ( 1 )
        {
          v40 = *((_WORD *)v7 + 6);
          __pld(v7 + 23);
          if ( (v40 & 4) == 0 && (v40 & 0x20) == 0 )
          {
            if ( v6 )
            {
              v41 = v7[2];
              if ( v41 )
              {
                if ( !strcmp(v41, s2) )
                  break;
              }
            }
            v39 = v7[1];
            if ( v39 )
            {
              if ( !strcasecmp(v39, s2) )
                break;
            }
          }
          v7 += 4;
          if ( v7 == &off_20311C )
            return 0;
        }
      }
    }
    else if ( (v3 & 0x20) != 0 )
    {
      v7 = (char **)&unk_202E1C;
      while ( 1 )
      {
        v22 = *((_WORD *)v7 + 6);
        __pld(v7 + 35);
        if ( (v22 & 4) == 0 )
        {
          if ( v6 )
          {
            v23 = v7[2];
            if ( v23 )
            {
              if ( !strcmp(v23, s2) )
                break;
            }
          }
        }
        v7 += 4;
        if ( v7 == &off_20311C )
          return 0;
      }
    }
    else
    {
      v7 = (char **)&unk_202E1C;
      while ( 1 )
      {
        v37 = *((_WORD *)v7 + 6);
        __pld(v7 + 31);
        if ( (v37 & 4) == 0 && (v37 & 0x20) == 0 )
        {
          if ( v6 )
          {
            v38 = v7[2];
            if ( v38 )
            {
              if ( !strcmp(v38, s2) )
                break;
            }
          }
        }
        v7 += 4;
        if ( v7 == &off_20311C )
          return 0;
      }
    }
  }
  else if ( (v3 & 2) != 0 )
  {
    if ( (v3 & 0x20) != 0 )
    {
      v7 = (char **)&unk_202E1C;
      while ( 1 )
      {
        v25 = *((_WORD *)v7 + 6);
        __pld(v7 + 23);
        if ( (v25 & 8) == 0 && (v25 & 4) == 0 )
        {
          if ( v6 )
          {
            v26 = v7[2];
            if ( v26 )
            {
              if ( !strcmp(v26, s2) )
                break;
            }
          }
          v24 = v7[1];
          if ( v24 )
          {
            if ( !strcasecmp(v24, s2) )
              break;
          }
        }
        v7 += 4;
        if ( v7 == &off_20311C )
          return 0;
      }
    }
    else
    {
      v7 = (char **)&unk_202E1C;
      while ( 1 )
      {
        v30 = *((_WORD *)v7 + 6);
        __pld(v7 + 19);
        if ( (v30 & 8) == 0 && (v30 & 4) == 0 && (v30 & 0x20) == 0 )
        {
          if ( v6 )
          {
            v31 = v7[2];
            if ( v31 )
            {
              if ( !strcmp(v31, s2) )
                break;
            }
          }
          v32 = v7[1];
          if ( v32 )
          {
            if ( !strcasecmp(v32, s2) )
              break;
          }
        }
        v7 += 4;
        if ( v7 == &off_20311C )
          return 0;
      }
    }
  }
  else if ( (v3 & 0x20) != 0 )
  {
    v7 = (char **)&unk_202E1C;
    while ( 1 )
    {
      v14 = *((_WORD *)v7 + 6);
      __pld(v7 + 31);
      if ( (v14 & 8) == 0 && (v14 & 4) == 0 )
      {
        if ( v6 )
        {
          v15 = v7[2];
          if ( v15 )
          {
            if ( !strcmp(v15, s2) )
              break;
          }
        }
      }
      v7 += 4;
      if ( v7 == &off_20311C )
        return 0;
    }
  }
  else
  {
    v7 = (char **)&unk_202E1C;
    while ( 1 )
    {
      v35 = *((_WORD *)v7 + 6);
      __pld(v7 + 27);
      if ( (v35 & 8) == 0 && (v35 & 4) == 0 && (v35 & 0x20) == 0 )
      {
        if ( v6 )
        {
          v36 = v7[2];
          if ( v36 )
          {
            if ( !strcmp(v36, s2) )
              break;
          }
        }
      }
      v7 += 4;
      if ( v7 == &off_20311C )
        return 0;
    }
  }
  return v7;
}
