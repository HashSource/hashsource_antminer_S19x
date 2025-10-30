int __fastcall sub_2DDB08(int *a1, const char **a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  const char *v8; // r4
  size_t v13; // r0
  unsigned int v14; // r10
  size_t v15; // r6
  int v16; // r10
  const char *v17; // r0
  const char *v18; // r4
  size_t v19; // r0
  size_t v20; // r11
  unsigned int v21; // r6
  int v22; // r6
  int v24; // r6
  const char *v25; // r4
  const char *v26; // r4
  const char *v27; // r4
  const char *v28; // r4
  int v29; // r3
  const char *v30; // r4
  const char *v31; // r4
  const char *v32; // r4
  const char *v33; // r4
  const char *v34; // r4
  int v35; // r3
  const char *v36; // r4
  const char *v37; // r4
  const char *v38; // r4
  const char *v39; // r4
  const char *v40; // r4
  int v41; // r1
  const char *v42; // r4
  const char *v43; // r4
  const char *v44; // r4
  const char *v45; // r4
  const char *v46; // r3
  const char *v47; // r3
  const char *v48; // r4
  int v49; // r3
  int v50; // [sp+14h] [bp-1008h] BYREF
  char dest[4100]; // [sp+18h] [bp-1004h] BYREF

  v8 = *a2;
  v13 = strlen(*a2);
  if ( v13 - 1 >= 0x1000 )
    goto LABEL_14;
  v14 = *(unsigned __int8 *)v8;
  if ( v14 == 46 )
  {
    *a1 = a5;
    *a2 = v8 + 1;
    return 1;
  }
  if ( v14 <= 0x2E )
  {
    if ( v14 == 35 )
    {
      *a1 = strtoul(v8 + 1, (char **)a2, 16);
      return 1;
    }
  }
  else
  {
    v15 = v13;
    if ( v14 == 83 )
    {
      v16 = 1;
      goto LABEL_8;
    }
    if ( v14 == 115 )
    {
      v16 = 0;
LABEL_8:
      v17 = v8 + 1;
      v18 = &v8[v15];
      v19 = strtol(v17, (char **)a2, 10);
      v20 = v19;
      v21 = (unsigned int)(*a2 + 1);
      if ( v21 <= (unsigned int)v18 && v19 + 1 <= 0x1000 )
      {
        memcpy(dest, *a2 + 1, v19);
        *a2 = (const char *)(v21 + v20);
        dest[v20] = 0;
        if ( v16 )
        {
          if ( !sub_2DD87C(dest, *(_DWORD *)(*(_DWORD *)(a4 + 4) + 100), a1, a3) )
          {
            v22 = sub_2DD9CC(dest, a3, a4, (_DWORD *)(a4 + 48), a1, a6, a7);
            if ( !v22 )
            {
              sub_2A6A5C("undefined %s reference in complex symbol: %s", "section", dest);
              return v22;
            }
          }
        }
        else if ( !sub_2DD9CC(dest, a3, a4, (_DWORD *)(a4 + 48), a1, a6, a7) )
        {
          v22 = sub_2DD87C(dest, *(_DWORD *)(*(_DWORD *)(a4 + 4) + 100), a1, a3);
          if ( !v22 )
          {
            sub_2A6A5C("undefined %s reference in complex symbol: %s", "symbol", dest);
            return v22;
          }
        }
        return 1;
      }
LABEL_14:
      v22 = 0;
      ((void (__fastcall *)(int))loc_2A6C48)(5);
      return v22;
    }
  }
  if ( !strncmp(v8, "0-", 2u) )
  {
    if ( v8[2] == 58 )
      v26 = v8 + 3;
    else
      v26 = v8 + 2;
    *a2 = v26;
    if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
    {
      v22 = 1;
      *a1 = -v50;
      return v22;
    }
  }
  else if ( !strncmp(v8, (const char *)&dword_364FA8, 2u) )
  {
    if ( v8[2] == 58 )
      v27 = v8 + 3;
    else
      v27 = v8 + 2;
    *a2 = v27;
    if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
    {
      ++*a2;
      if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
      {
        v22 = 1;
        *a1 = v50 << dest[0];
        return v22;
      }
    }
  }
  else if ( !strncmp(v8, (const char *)&dword_3CE920, 2u) )
  {
    if ( v8[2] == 58 )
      v28 = v8 + 3;
    else
      v28 = v8 + 2;
    *a2 = v28;
    if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
    {
      ++*a2;
      if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
      {
        v22 = 1;
        if ( a8 )
          v29 = v50 >> dest[0];
        else
          v29 = (unsigned int)v50 >> dest[0];
        *a1 = v29;
        return v22;
      }
    }
  }
  else if ( !strncmp(v8, (const char *)&dword_364FAC, 2u) )
  {
    if ( v8[2] == 58 )
      v25 = v8 + 3;
    else
      v25 = v8 + 2;
    *a2 = v25;
    if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
    {
      ++*a2;
      if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
      {
        v22 = 1;
        *a1 = v50 == *(_DWORD *)dest;
        return v22;
      }
    }
  }
  else if ( !strncmp(v8, (const char *)&dword_364FB0, 2u) )
  {
    if ( v8[2] == 58 )
      v30 = v8 + 3;
    else
      v30 = v8 + 2;
    *a2 = v30;
    if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
    {
      ++*a2;
      if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
      {
        v22 = 1;
        *a1 = v50 != *(_DWORD *)dest;
        return v22;
      }
    }
  }
  else if ( !strncmp(v8, (const char *)&dword_364FB4, 2u) )
  {
    if ( v8[2] == 58 )
      v31 = v8 + 3;
    else
      v31 = v8 + 2;
    *a2 = v31;
    if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
    {
      ++*a2;
      if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
      {
        v22 = 1;
        if ( a8 )
          *a1 = v50 <= *(_DWORD *)dest;
        else
          *a1 = (unsigned int)v50 <= *(_DWORD *)dest;
        return v22;
      }
    }
  }
  else if ( !strncmp(v8, (const char *)&dword_364FB8, 2u) )
  {
    if ( v8[2] == 58 )
      v32 = v8 + 3;
    else
      v32 = v8 + 2;
    *a2 = v32;
    if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
    {
      ++*a2;
      if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
      {
        v22 = 1;
        if ( a8 )
          *a1 = v50 >= *(_DWORD *)dest;
        else
          *a1 = (unsigned int)v50 >= *(_DWORD *)dest;
        return v22;
      }
    }
  }
  else
  {
    v24 = strncmp(v8, (const char *)&dword_364FBC, 2u);
    if ( v24 )
    {
      if ( strncmp(v8, (const char *)&dword_364FC0, 2u) )
      {
        switch ( v14 )
        {
          case '~':
            if ( v8[1] == 58 )
              v36 = v8 + 2;
            else
              v36 = v8 + 1;
            *a2 = v36;
            if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
            {
              v22 = 1;
              *a1 = ~v50;
              return v22;
            }
            break;
          case '!':
            if ( v8[1] == 58 )
              v37 = v8 + 2;
            else
              v37 = v8 + 1;
            *a2 = v37;
            if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
            {
              v22 = 1;
              *a1 = v50 == 0;
              return v22;
            }
            break;
          case '*':
            if ( v8[1] == 58 )
              v38 = v8 + 2;
            else
              v38 = v8 + 1;
            *a2 = v38;
            if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
            {
              ++*a2;
              if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
              {
                v22 = 1;
                *a1 = *(_DWORD *)dest * v50;
                return v22;
              }
            }
            break;
          case '/':
            if ( v8[1] == 58 )
              v39 = v8 + 2;
            else
              v39 = v8 + 1;
            *a2 = v39;
            if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
            {
              ++*a2;
              if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
              {
                v22 = 1;
                if ( a8 )
                  *a1 = sub_347690(v50);
                else
                  *a1 = sub_347418(v50, *(_DWORD *)dest);
                return v22;
              }
            }
            break;
          case '%':
            if ( v8[1] == 58 )
              v40 = v8 + 2;
            else
              v40 = v8 + 1;
            *a2 = v40;
            if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
            {
              ++*a2;
              if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
              {
                v22 = 1;
                if ( a8 )
                {
                  sub_347924(v50, *(_DWORD *)dest);
                  *a1 = v41;
                }
                else
                {
                  *a1 = (unsigned __int64)sub_347674(v50, *(_DWORD *)dest) >> 32;
                }
                return v22;
              }
            }
            break;
          case '^':
            if ( v8[1] == 58 )
              v42 = v8 + 2;
            else
              v42 = v8 + 1;
            *a2 = v42;
            if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
            {
              ++*a2;
              if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
              {
                v22 = 1;
                *a1 = v50 ^ *(_DWORD *)dest;
                return v22;
              }
            }
            break;
          case '|':
            if ( v8[1] == 58 )
              v43 = v8 + 2;
            else
              v43 = v8 + 1;
            *a2 = v43;
            if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
            {
              ++*a2;
              if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
              {
                v22 = 1;
                *a1 = v50 | *(_DWORD *)dest;
                return v22;
              }
            }
            break;
          case '&':
            if ( v8[1] == 58 )
              v45 = v8 + 2;
            else
              v45 = v8 + 1;
            *a2 = v45;
            if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
            {
              ++*a2;
              if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
              {
                v22 = 1;
                *a1 = v50 & *(_DWORD *)dest;
                return v22;
              }
            }
            break;
          case '+':
            v47 = v8 + 1;
            if ( v8[1] == 58 )
              v47 = v8 + 2;
            *a2 = v47;
            if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
            {
              ++*a2;
              if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
              {
                v22 = 1;
                *a1 = v50 + *(_DWORD *)dest;
                return v22;
              }
            }
            break;
          case '-':
            v46 = v8 + 1;
            if ( v8[1] == 58 )
              v46 = v8 + 2;
            *a2 = v46;
            if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
            {
              ++*a2;
              if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
              {
                v22 = 1;
                *a1 = v50 - *(_DWORD *)dest;
                return v22;
              }
            }
            break;
          case '<':
            if ( v8[1] == 58 )
              v48 = v8 + 2;
            else
              v48 = v8 + 1;
            *a2 = v48;
            if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
            {
              ++*a2;
              if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
              {
                v22 = 1;
                if ( a8 )
                  *a1 = v50 < *(_DWORD *)dest;
                else
                  *a1 = (unsigned int)v50 < *(_DWORD *)dest;
                return v22;
              }
            }
            break;
          case '>':
            if ( v8[1] == 58 )
              v44 = v8 + 2;
            else
              v44 = v8 + 1;
            *a2 = v44;
            if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
            {
              ++*a2;
              if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
              {
                v22 = 1;
                if ( a8 )
                  *a1 = v50 > *(_DWORD *)dest;
                else
                  *a1 = (unsigned int)v50 > *(_DWORD *)dest;
                return v22;
              }
            }
            break;
          default:
            v22 = 0;
            sub_2A6A5C("unknown operator '%c' in complex symbol", v14);
            ((void (__fastcall *)(int))loc_2A6C48)(5);
            return v22;
        }
        return 0;
      }
      if ( v8[2] == 58 )
        v34 = v8 + 3;
      else
        v34 = v8 + 2;
      *a2 = v34;
      if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
      {
        ++*a2;
        if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
        {
          if ( !a8 )
          {
            if ( v50 )
            {
              v49 = 1;
            }
            else
            {
              v49 = *(_DWORD *)dest;
              if ( *(_DWORD *)dest )
                v49 = 1;
            }
            *a1 = v49;
            return 1;
          }
          if ( v50 )
            goto LABEL_111;
          goto LABEL_108;
        }
      }
    }
    else
    {
      if ( v8[2] == 58 )
        v33 = v8 + 3;
      else
        v33 = v8 + 2;
      *a2 = v33;
      if ( sub_2DDB08(&v50, a2, a3, a4, a5, a6, a7, a8) )
      {
        ++*a2;
        if ( sub_2DDB08(dest, a2, a3, a4, a5, a6, a7, a8) )
        {
          if ( a8 )
          {
            if ( v50 )
            {
              v24 = *(_DWORD *)dest;
              if ( *(_DWORD *)dest )
                v24 = 1;
            }
            *a1 = v24;
            return 1;
          }
          if ( !v50 )
          {
LABEL_111:
            v22 = 1;
            *a1 = a8;
            return v22;
          }
LABEL_108:
          v35 = *(_DWORD *)dest;
          if ( *(_DWORD *)dest )
            v35 = 1;
          a8 = v35;
          goto LABEL_111;
        }
      }
    }
  }
  return 0;
}
