__int64 __fastcall sub_9335C(int a1, _DWORD *a2, int a3)
{
  int v5; // r6
  int i; // r11
  int v7; // r5
  int v8; // t1
  int v9; // r7
  int v10; // r10
  int v11; // r6
  int v12; // r9
  unsigned int v13; // r8
  int v14; // r5
  unsigned int v15; // r9
  int v16; // r11
  int v17; // r10
  unsigned int v18; // r0
  int v19; // r1
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r2
  int v22; // t1
  int v24; // r1
  int v25; // r0
  int v26; // [sp+4h] [bp-20h]
  __int64 v27; // [sp+8h] [bp-1Ch]

  v5 = a1 - 1;
  for ( i = 0; ; ++i )
  {
    v8 = *(unsigned __int8 *)++v5;
    v7 = v8;
    if ( !isspace(v8) )
      break;
  }
  v9 = 0;
  if ( v7 == 43 )
  {
    ++i;
  }
  else if ( v7 == 45 )
  {
    ++i;
    v9 = 1;
  }
  if ( (a3 & 0xFFFFFFEF) != 0 )
    goto LABEL_31;
  v10 = *(unsigned __int8 *)(a1 + i);
  if ( v10 == 48 )
  {
    v11 = a1 + i;
    if ( (*(_BYTE *)(a1 + i + 1) & 0xDF) == 0x58 )
    {
      i += 2;
      if ( !a3 )
      {
        a3 = 16;
        v11 = a1 + i;
        v10 = *(unsigned __int8 *)(a1 + i);
        v12 = 16;
        goto LABEL_13;
      }
    }
    else if ( !a3 )
    {
      a3 = 8;
      v12 = 8;
      goto LABEL_13;
    }
LABEL_31:
    v12 = a3;
    if ( (unsigned int)(a3 - 2) > 0x22 )
    {
      *_errno_location() = 22;
      return 0;
    }
    v11 = a1 + i;
    v10 = *(unsigned __int8 *)(a1 + i);
    goto LABEL_13;
  }
  if ( a3 )
    goto LABEL_31;
  a3 = 10;
  v11 = a1 + i;
  v12 = 10;
LABEL_13:
  v13 = 0;
  v26 = a3 >> 31;
  v14 = v12;
  v15 = 0;
  v16 = v10;
  v17 = 0;
  while ( 1 )
  {
    if ( !isalnum(v16) )
    {
LABEL_21:
      if ( a2 )
        *a2 = v11;
      LODWORD(v27) = v15;
      HIDWORD(v27) = v17 + (v13 << 24);
      if ( v9 )
        return -v27;
      return v27;
    }
    v18 = v16 - 48;
    if ( a3 <= 10 )
    {
      if ( v18 > 9 || v16 > a3 + 47 )
        goto LABEL_21;
LABEL_17:
      v19 = a3 * v17;
      v20 = (unsigned int)a3 * (unsigned __int64)v15;
      HIDWORD(v20) += v19 + v15 * v26;
      goto LABEL_18;
    }
    if ( v18 <= 9 )
      goto LABEL_17;
    if ( a3 + 86 < tolower(v16) )
      goto LABEL_21;
    v24 = a3 * v17;
    v25 = v16;
    v20 = (unsigned int)a3 * (unsigned __int64)v15;
    HIDWORD(v20) += v24 + v15 * v26;
    v18 = tolower(v25) - 87;
LABEL_18:
    v21 = v20 + (int)v18;
    v15 = v20 + v18;
    v17 = HIDWORD(v21) & 0xFFFFFF;
    v13 = HIBYTE(HIDWORD(v21)) + v14 * v13;
    if ( v13 > 0xFF )
      break;
    v22 = *(unsigned __int8 *)++v11;
    v16 = v22;
  }
  *_errno_location() = 34;
  if ( !a2 )
    return -1;
  *a2 = v11;
  return -1;
}
