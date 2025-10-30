__int16 *__fastcall sub_28970C(int a1)
{
  __int32_t v1; // r4
  int *v2; // r5
  int v3; // r3
  int v4; // r1
  bool v5; // zf
  int v7; // r6
  const unsigned __int16 **v8; // r0
  const unsigned __int16 *v9; // r7
  const __int32_t *v10; // r2
  int v11; // r3
  int v12; // r2
  __int32_t v13; // r3
  int v14; // r4
  const __int32_t **v15; // r0

  v1 = a1;
  if ( (unsigned int)(a1 - 128) > 0x7F )
  {
    if ( a1 == 27 )
    {
      v2 = &dword_48ADA0;
      LOBYTE(v1) = 101;
      LOBYTE(word_48ADD8) = 92;
      v12 = 2;
      v3 = 1;
      goto LABEL_16;
    }
    if ( a1 > 31 )
    {
      LOWORD(v2) = (unsigned __int16)&dword_48ADA0;
      if ( a1 == 127 )
      {
        HIWORD(v2) = (unsigned int)&dword_48ADA0 >> 16;
        *((_WORD *)v2 + 28) = 17244;
        *((_BYTE *)v2 + 58) = 45;
        LOBYTE(v1) = 63;
        v12 = 4;
        v3 = 3;
        goto LABEL_16;
      }
      v3 = 1;
      HIWORD(v2) = (unsigned int)&dword_48ADA0 >> 16;
      v4 = 0;
      goto LABEL_6;
    }
    if ( (a1 & 0x80) != 0 )
    {
      v2 = &dword_48ADA0;
      v3 = 1;
      v4 = 0;
      goto LABEL_6;
    }
    v1 = a1 | 0x40;
    v2 = &dword_48ADA0;
    word_48ADD8 = 17244;
    byte_48ADDA = 45;
    if ( ((unsigned __int8)a1 | 0x40) == (a1 | 0x40) )
    {
      v7 = (unsigned __int8)a1 | 0x40;
      v8 = _ctype_b_loc();
      v9 = *v8;
      if ( ((*v8)[v7] & 0x200) != 0 )
      {
        v13 = (*_ctype_toupper_loc())[v7];
        v14 = (unsigned __int8)v13;
        if ( v13 != (unsigned __int8)v13 || (v9[(unsigned __int8)v13] & 0x100) == 0 )
        {
          v1 = (*_ctype_toupper_loc())[v7];
          goto LABEL_3;
        }
        v15 = _ctype_tolower_loc();
        v11 = v14;
        v10 = *v15;
      }
      else
      {
        if ( ((*v8)[v7] & 0x100) == 0 )
          goto LABEL_3;
        v10 = *_ctype_tolower_loc();
        v11 = v7;
      }
      v1 = v10[v11];
    }
  }
  else
  {
    v2 = &dword_48ADA0;
    v1 = a1 & 0xFFFFFF7F;
    word_48ADD8 = 19804;
    byte_48ADDA = 45;
  }
LABEL_3:
  if ( v1 == 27 )
  {
    LOBYTE(v1) = 101;
    byte_48ADDB = 92;
    v12 = 5;
    v3 = 4;
    goto LABEL_16;
  }
  v3 = 4;
  v4 = 3;
LABEL_6:
  v5 = v1 == 34;
  if ( v1 != 34 )
    v5 = v1 == 92;
  if ( v5 )
  {
    v12 = 92;
    v4 += (int)v2;
  }
  else
  {
    v12 = v3;
  }
  if ( v5 )
    *(_BYTE *)(v4 + 56) = v12;
  else
    v3 = v4;
  if ( v5 )
    v12 = v3 + 1;
LABEL_16:
  *((_BYTE *)v2 + v3 + 56) = v1;
  *((_BYTE *)v2 + v12 + 56) = 0;
  return &word_48ADD8;
}
