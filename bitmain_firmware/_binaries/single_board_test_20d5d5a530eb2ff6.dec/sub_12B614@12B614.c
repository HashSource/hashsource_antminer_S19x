int __fastcall sub_12B614(unsigned __int8 *a1, int a2, unsigned int *a3)
{
  unsigned int v3; // r3
  int result; // r0
  unsigned __int8 v5; // r4
  unsigned __int8 v6; // r5
  unsigned __int8 v7; // r6
  unsigned __int8 v8; // r7
  unsigned __int8 v9; // r1
  unsigned int v10; // r3
  unsigned __int8 v11; // r1
  unsigned __int8 v12; // r1
  unsigned __int8 v13; // r0
  unsigned __int8 v14; // r4
  unsigned __int8 v15; // r5
  unsigned __int8 v16; // r1
  unsigned __int8 v17; // r1
  unsigned __int8 v18; // r4
  unsigned __int8 v19; // r5
  unsigned __int8 v20; // r0

  if ( a2 <= 0 )
    return 0;
  v3 = *a1;
  if ( (v3 & 0x80) == 0 )
  {
    *a3 = v3;
    return 1;
  }
  if ( (v3 & 0xE0) == 0xC0 )
  {
    if ( a2 == 1 )
      return -1;
    v11 = a1[1];
    if ( (v11 & 0xC0) != 0x80 )
      return -3;
    v10 = v11 & 0x3F | ((v3 & 0x1F) << 6);
    if ( v10 > 0x7F )
    {
      result = 2;
      goto LABEL_21;
    }
    return -4;
  }
  if ( (v3 & 0xF0) == 0xE0 )
  {
    if ( a2 <= 2 )
      return -1;
    v12 = a1[1];
    if ( (v12 & 0xC0) != 0x80 )
      return -3;
    v13 = a1[2];
    if ( (v13 & 0xC0) != 0x80 )
      return -3;
    v10 = (unsigned __int16)((_WORD)v3 << 12) | ((v12 & 0x3F) << 6) | v13 & 0x3F;
    if ( v10 >= 0x800 )
    {
      result = 3;
      goto LABEL_21;
    }
    return -4;
  }
  if ( (v3 & 0xF8) == 0xF0 )
  {
    if ( a2 <= 3 )
      return -1;
    v14 = a1[1];
    if ( (v14 & 0xC0) != 0x80 )
      return -3;
    v15 = a1[2];
    if ( (v15 & 0xC0) != 0x80 )
      return -3;
    v16 = a1[3];
    if ( (v16 & 0xC0) != 0x80 )
      return -3;
    v10 = v16 & 0x3F | ((v3 & 7) << 18) | ((v14 & 0x3F) << 12) | ((v15 & 0x3F) << 6);
    if ( v10 >= 0x10000 )
    {
      result = 4;
      goto LABEL_21;
    }
    return -4;
  }
  if ( (v3 & 0xFC) == 0xF8 )
  {
    if ( a2 <= 4 )
      return -1;
    v17 = a1[1];
    if ( (v17 & 0xC0) != 0x80 )
      return -3;
    v18 = a1[2];
    if ( (v18 & 0xC0) != 0x80 )
      return -3;
    v19 = a1[3];
    if ( (v19 & 0xC0) != 0x80 )
      return -3;
    v20 = a1[4];
    if ( (v20 & 0xC0) != 0x80 )
      return -3;
    v10 = ((v17 & 0x3F) << 18) | ((v3 & 3) << 24) | v20 & 0x3F | ((v18 & 0x3F) << 12) | ((v19 & 0x3F) << 6);
    if ( v10 >= 0x200000 )
    {
      result = 5;
      goto LABEL_21;
    }
    return -4;
  }
  if ( (v3 & 0xFE) != 0xFC )
    return -2;
  if ( a2 <= 5 )
    return -1;
  v5 = a1[1];
  if ( (v5 & 0xC0) != 0x80 )
    return -3;
  v6 = a1[2];
  if ( (v6 & 0xC0) != 0x80 )
    return -3;
  v7 = a1[3];
  if ( (v7 & 0xC0) != 0x80 )
    return -3;
  v8 = a1[4];
  if ( (v8 & 0xC0) != 0x80 )
    return -3;
  v9 = a1[5];
  if ( (v9 & 0xC0) != 0x80 )
    return -3;
  v10 = ((v5 & 0x3F) << 24)
      | ((v3 & 1) << 30)
      | v9 & 0x3F
      | ((v6 & 0x3F) << 18)
      | ((v7 & 0x3F) << 12)
      | ((v8 & 0x3F) << 6);
  if ( v10 < 0x4000000 )
    return -4;
  result = 6;
LABEL_21:
  *a3 = v10;
  return result;
}
