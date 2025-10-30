int __fastcall sub_D2E40(int a1, int a2, char *a3, size_t a4)
{
  _DWORD *v8; // r0
  int v9; // r3
  _DWORD *v10; // r4
  char *v11; // r11
  int *v12; // r8
  int v13; // r0
  size_t v14; // r9
  int v15; // r3
  size_t v16; // r9
  size_t v17; // r5
  int result; // r0
  int v19; // r0
  int v20; // r3
  _DWORD *v21; // r1
  _DWORD *v22; // r4
  int v23; // [sp+Ch] [bp-8h]
  int v24; // [sp+Ch] [bp-8h]

  v8 = (_DWORD *)sub_D8934(a1);
  if ( !v8[125] )
    return -1;
  v9 = v8[124];
  v10 = v8;
  if ( !v9 )
    return -1;
  if ( !a3 )
  {
    if ( (int)v8[177] > 0 )
    {
      v19 = sub_D8924(a1);
      v20 = v10[177];
      v21 = v10 + 169;
      if ( v19 )
      {
        if ( !sub_E83B0(v10 + 126, v21, a2, v20) )
          return -1;
      }
      else if ( !sub_E8834(v10 + 126, v21, a2, v20) )
      {
        return -1;
      }
      a3 = (char *)v10[177];
      v10[177] = 0;
    }
    if ( (int)v10[178] > 0 )
    {
      if ( !sub_E81A4(v10 + 126, v10 + 173) )
        return -1;
      v10[178] = 0;
    }
    if ( sub_D8924(a1) )
    {
      if ( sub_E8D70(v10 + 126, v10 + 165, 16) == 1 )
      {
        v10[125] = 0;
        return (int)a3;
      }
    }
    else if ( (int)v10[180] >= 0 && !sub_E8CD0(v10 + 126, v10 + 165) )
    {
      v10[125] = 0;
      return (int)a3;
    }
    return -1;
  }
  v11 = (char *)(v8 + 173);
  v12 = v8 + 178;
  if ( a2 )
  {
    v11 = (char *)(v8 + 169);
    v12 = v8 + 177;
    if ( sub_D7A88(v8[177] + a2, a3, a4, v9) )
    {
      sub_D0048(6, 169, 162, (int)"crypto/evp/e_aes.c", 4154);
      return 0;
    }
  }
  v13 = *v12;
  if ( *v12 <= 0 )
  {
    v15 = 0;
    v23 = 0;
LABEL_13:
    v16 = a4 & 0xF;
    if ( a4 == v16 )
      goto LABEL_18;
    if ( a2 )
    {
      v17 = a4 - v16;
      if ( sub_D8924(a1) )
      {
        if ( sub_E83B0(v10 + 126, a3, a2, v17) )
        {
LABEL_17:
          a3 += v17;
          v15 = v23 + v17;
          goto LABEL_18;
        }
      }
      else if ( sub_E8834(v10 + 126, a3, a2, v17) )
      {
        goto LABEL_17;
      }
      return -1;
    }
    v22 = v10 + 126;
LABEL_44:
    v17 = a4 - v16;
    if ( sub_E81A4(v22, a3) )
      goto LABEL_17;
    return -1;
  }
  v14 = 16 - v13;
  if ( a4 < 16 - v13 )
  {
    memcpy(&v11[v13], a3, a4);
    *v12 += a4;
    return 0;
  }
  a4 -= v14;
  memcpy(&v11[v13], a3, v14);
  a3 += v14;
  if ( a2 )
  {
    if ( sub_D8924(a1) )
    {
      if ( !sub_E83B0(v10 + 126, v11, a2, 16) )
        return -1;
    }
    else if ( !sub_E8834(v10 + 126, v11, a2, 16) )
    {
      return -1;
    }
    *v12 = 0;
    a2 += 16;
    v23 = 16;
    v15 = 16;
    goto LABEL_13;
  }
  v22 = v10 + 126;
  if ( !sub_E81A4(v22, v11) )
    return -1;
  v16 = a4 & 0xF;
  v15 = 16;
  *v12 = 0;
  if ( a4 != v16 )
  {
    v23 = 16;
    goto LABEL_44;
  }
LABEL_18:
  result = v15;
  if ( v16 )
  {
    v24 = v15;
    memcpy(v11, a3, v16);
    *v12 = v16;
    return v24;
  }
  return result;
}
