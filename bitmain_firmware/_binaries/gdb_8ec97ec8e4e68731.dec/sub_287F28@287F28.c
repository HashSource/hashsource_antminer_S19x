_BYTE *__fastcall sub_287F28(int a1)
{
  _BYTE *result; // r0
  _BYTE *v3; // r5
  _BYTE *v4; // r6
  int v5; // r1
  __int32_t v6; // r2
  int v7; // r3
  int v8; // r0
  _BYTE *v9; // r12
  int v10; // r2
  _BYTE *v11; // r3
  bool v12; // zf
  const unsigned __int16 **v13; // r0
  const unsigned __int16 *v14; // r8
  int v15; // r9
  const __int32_t *v16; // r7
  int v17; // r4
  __int32_t v18; // r2
  const __int32_t *v19; // r2

  result = sub_93028(8u);
  v3 = result;
  if ( a1 == 27 )
  {
    *result = 92;
    result[1] = 101;
    result[2] = 0;
    return result;
  }
  if ( a1 == 127 )
  {
    result[1] = 67;
    *result = 92;
    result[2] = 45;
    result[3] = 63;
    result[4] = 0;
    return result;
  }
  if ( a1 > 31 )
  {
    v5 = 1;
    v4 = result;
    v6 = a1;
    v7 = 1;
    v8 = 0;
    goto LABEL_9;
  }
  a1 |= 0x40u;
  *result = 92;
  result[1] = 67;
  v4 = result + 3;
  result[2] = 45;
  if ( (char)a1 == a1 )
  {
    v13 = _ctype_b_loc();
    v14 = *v13;
    v15 = (*v13)[(char)a1] & 0x200;
    if ( ((*v13)[(char)a1] & 0x200) != 0 )
    {
      v18 = (*_ctype_toupper_loc())[(char)a1];
      if ( (unsigned __int8)v18 == v18 && (v14[(unsigned __int8)v18] & 0x100) != 0 )
      {
        v16 = *_ctype_tolower_loc();
        v17 = LOBYTE((*_ctype_toupper_loc())[(char)a1]);
        goto LABEL_20;
      }
      v6 = (char)a1;
    }
    else
    {
      v6 = (char)a1;
      if ( ((*v13)[(char)a1] & 0x100) != 0 )
      {
        v16 = *_ctype_tolower_loc();
        v17 = (char)a1;
LABEL_20:
        a1 = v16[v17];
        v5 = 4;
        v7 = 4;
        v8 = 3;
        v6 = a1;
        goto LABEL_9;
      }
    }
    if ( v15 )
    {
      v19 = *_ctype_toupper_loc();
      v5 = 4;
      v7 = 4;
      v8 = 3;
      v6 = v19[(char)a1];
      a1 = v6;
    }
    else
    {
      v5 = 4;
      a1 = (char)a1;
      v7 = 4;
      v8 = 3;
    }
    goto LABEL_9;
  }
  v5 = 4;
  v6 = a1;
  v7 = 4;
  v8 = 3;
LABEL_9:
  v9 = &v3[v5];
  if ( (unsigned int)(v6 - 128) > 0x1F )
  {
    v12 = a1 == 34;
    if ( a1 != 34 )
      v12 = a1 == 92;
    if ( v12 )
    {
      v11 = &v3[v7];
      *v4 = 92;
    }
    else
    {
      v9 = v4;
      v11 = &v3[v8];
    }
  }
  else
  {
    a1 -= 128;
    *v4 = 92;
    v10 = a1 >> 3;
    v3[v5] = 50;
    v11 = &v3[v8 + 3];
    LOBYTE(a1) = (a1 & 7) + 48;
    v9 = v11;
    v3[v8 + 2] = v10 + 48;
  }
  *v9 = a1;
  v11[1] = 0;
  return v3;
}
