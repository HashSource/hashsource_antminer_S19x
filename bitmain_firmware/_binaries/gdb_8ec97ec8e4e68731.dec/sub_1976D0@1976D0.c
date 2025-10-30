_DWORD *__fastcall sub_1976D0(_DWORD *a1, _DWORD *a2)
{
  unsigned __int8 *v3; // r7
  int v5; // r4
  int v6; // r3
  bool v7; // zf
  unsigned __int8 *v8; // r5
  char *v9; // r0
  int v11; // r7
  unsigned __int8 *v12; // r5
  unsigned __int8 *v13; // r3
  char *v14; // r0
  int v15; // r3
  int v16; // r4
  int v17; // r1
  int v18; // r3
  int v19; // r2
  int v20; // t1
  int v21; // r5
  size_t v22; // r0
  unsigned __int8 *v23; // r4
  unsigned __int8 *v24; // r5
  int v26; // r0
  int v28; // r3
  unsigned __int8 *v29; // [sp+4h] [bp-10h]
  int v30; // [sp+4h] [bp-10h]
  unsigned __int8 *v31; // [sp+8h] [bp-Ch]

  v3 = (unsigned __int8 *)a2[1];
  v5 = *v3;
  *a1 = 2;
  if ( strchr("\"'", v5) )
  {
    v6 = *(_DWORD *)(a2[6] + 8);
    v7 = v6 == 14;
    if ( v6 == 14 )
      v7 = v5 == 34;
    if ( v7 )
    {
      v22 = sub_19741C((const char *)v3);
      if ( v22 )
      {
        a1[1] = v3;
        a2[1] = &v3[v22];
        a1[2] = v22;
        return a1;
      }
    }
    v8 = v3 + 1;
    a2[1] = v3 + 1;
    a1[1] = v3 + 1;
    v9 = sub_197668((char *)v3 + 1, v5);
    a2[31] = v9;
    a2[30] = v5;
    if ( v9 )
    {
      a2[1] = v9 + 1;
      a1[2] = v9 - 1 - (char *)v3;
      return a1;
    }
    if ( !a2[32] )
      sub_946E0("unmatched quote");
    if ( v3[1] )
    {
      while ( 1 )
      {
        a2[1] = v8 + 1;
        if ( !v8[1] )
          break;
        ++v8;
      }
      v11 = v8 - v3;
    }
    else
    {
      v11 = v3[1];
    }
LABEL_14:
    a1[2] = v11;
    return a1;
  }
  v12 = v3;
  do
  {
    while ( 2 )
    {
      while ( 2 )
      {
        if ( isspace(v5) )
        {
LABEL_28:
          v14 = (char *)sub_9360C(v12);
          v12 = (unsigned __int8 *)v14;
          if ( v14 && sub_195BDC(v14) )
          {
LABEL_75:
            v28 = a2[1];
            a1[1] = v3;
            v11 = v28 - (_DWORD)v3;
            goto LABEL_14;
          }
          a2[1] = v12;
          v5 = *v12;
        }
        while ( 1 )
        {
          if ( !v5 )
            goto LABEL_45;
          if ( v5 != 58 )
            break;
          v15 = v12[1];
          if ( v15 == 58 )
            goto LABEL_55;
          v16 = v12 - v3;
          if ( v12 - v3 > 4 )
          {
            if ( strncmp((const char *)v12 - 4, "[abi", 4u) )
              goto LABEL_34;
LABEL_55:
            v13 = v12 + 1;
            goto LABEL_27;
          }
          if ( v16 != 1 || v15 != 47 )
          {
LABEL_34:
            a1[1] = v3;
            a1[2] = v16;
            return a1;
          }
LABEL_26:
          v13 = v12;
LABEL_27:
          v12 = v13 + 1;
          a2[1] = v13 + 1;
          v5 = v13[1];
          if ( isspace(v5) )
            goto LABEL_28;
        }
        if ( a2[5] && strchr("\"'", v5) )
        {
          if ( sub_195CC4(v12) )
            goto LABEL_75;
          v12 = (unsigned __int8 *)a2[1];
          v5 = *v12;
        }
        if ( v5 == 60 )
        {
          if ( *(_DWORD *)(a2[6] + 8) != 4 || v12 - v3 <= 7 )
            goto LABEL_36;
          if ( v3 >= v12 )
          {
            v29 = v12;
            goto LABEL_66;
          }
          v23 = v12;
          v31 = v12;
          do
          {
            v24 = v23;
            if ( !isspace(*--v23) )
            {
              v29 = v24;
              v5 = 60;
              v12 = v31;
              goto LABEL_65;
            }
          }
          while ( v3 != v23 );
          v12 = v31;
          v5 = 60;
          v29 = v3;
LABEL_65:
          if ( v29 - v3 <= 7 )
          {
LABEL_36:
            v17 = 62;
            goto LABEL_37;
          }
LABEL_66:
          if ( strncmp((const char *)v29 - 8, "operator", 8u) )
            goto LABEL_36;
          if ( v3 != v29 - 8 )
          {
            v26 = *(v29 - 9);
            v30 = v26;
            if ( isalnum(v26) || v30 == 95 )
              goto LABEL_36;
          }
          a2[1] = v12 + 1;
          v5 = v12[1];
          if ( v5 == 60 )
          {
            a2[1] = v12 + 2;
            v5 = v12[2];
            v12 += 2;
          }
          else
          {
            ++v12;
          }
          continue;
        }
        break;
      }
      if ( v5 != 40 )
      {
        if ( v5 == 44 )
        {
          v21 = v12 - v3;
          if ( *(_DWORD *)(a2[6] + 8) != 4 || v21 <= 8 || !sub_338BD4(v3, "operator") )
            goto LABEL_54;
          if ( !sub_FC574() )
          {
            v21 = a2[1] - (_DWORD)v3;
LABEL_54:
            a1[1] = v3;
            a1[2] = v21;
            return a1;
          }
          v12 = (unsigned __int8 *)(a2[1] + 1);
          a2[1] = v12;
          v5 = *v12;
          continue;
        }
        goto LABEL_26;
      }
      break;
    }
    v17 = 41;
LABEL_37:
    v18 = v5;
    v19 = 0;
    while ( 2 )
    {
      if ( v18 == v5 )
      {
        ++v19;
        goto LABEL_38;
      }
      if ( v17 != v18 || (--v19, v19) )
      {
LABEL_38:
        v20 = *++v12;
        v18 = v20;
        if ( !v20 )
          goto LABEL_44;
        continue;
      }
      break;
    }
    ++v12;
LABEL_44:
    a2[1] = v12;
    v5 = *v12;
  }
  while ( *v12 );
LABEL_45:
  a1[1] = v3;
  a1[2] = v12 - v3;
  return a1;
}
