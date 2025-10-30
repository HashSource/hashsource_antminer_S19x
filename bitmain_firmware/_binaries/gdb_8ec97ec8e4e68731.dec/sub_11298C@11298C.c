int __fastcall sub_11298C(unsigned __int8 *a1, unsigned int a2, _DWORD *a3)
{
  int v4; // r3
  char *v5; // r11
  unsigned __int8 v6; // r4
  int v7; // r5
  char *v8; // r0
  int v9; // r4
  char v10; // r1
  char v11; // t1
  unsigned int v12; // r6
  unsigned __int8 *v14; // r11
  unsigned __int8 v15; // r8
  unsigned __int8 *v16; // lr
  __int64 v17; // r6
  unsigned int v18; // r12
  unsigned __int8 v19; // t1
  unsigned int v20; // r4
  int v21; // r5
  char v22; // r3
  char v23; // r10
  _BOOL4 v24; // r3
  int v25; // r3
  unsigned __int8 *v26; // lr
  int v27; // r3
  _BYTE *v28; // r0
  bool v29; // zf
  int v30; // [sp+8h] [bp-30h]

  if ( a2 > (unsigned int)a1 )
  {
    v4 = *a1;
    if ( (unsigned __int8)(v4 - 112) <= 0x1Fu )
    {
      v14 = a1 + 1;
      v30 = v4 - 112;
      if ( a2 <= (unsigned int)(a1 + 1) )
        return -1;
    }
    else
    {
      if ( v4 != 146 )
        return -1;
      v5 = (char *)(a1 + 1);
      if ( a2 <= (unsigned int)(a1 + 1) )
        return -1;
      v6 = a1[1];
      v7 = 0;
      v8 = (char *)(a1 + 2);
      v29 = (v6 & 0x80) == 0;
      v9 = v6 & 0x7F;
      if ( !v29 )
      {
        v10 = 0;
        do
        {
          v10 += 7;
          if ( a2 <= (unsigned int)v8 )
            return -1;
          v11 = *v8++;
          v12 = v11 & 0x7F;
          v9 |= v12 << v10;
          v7 |= (v12 << (v10 - 32)) | (v12 >> (32 - v10));
        }
        while ( v11 < 0 );
      }
      v28 = (_BYTE *)(v8 - v5);
      if ( !v28 )
        return -1;
      v14 = &v28[(_DWORD)v5];
      if ( !v14 )
        return -1;
      v29 = v9 >> 31 == v7;
      v30 = v9;
      if ( v9 >> 31 == v7 )
        v29 = 1;
      if ( !v29 || a2 <= (unsigned int)v14 )
        return -1;
    }
    v15 = *v14;
    v16 = v14 + 1;
    v17 = *v14 & 0x7F;
    if ( (*v14 & 0x80) != 0 )
    {
      v18 = 7;
      while ( 1 )
      {
        v22 = v18 - 32;
        v23 = 32 - v18;
        if ( a2 <= (unsigned int)v16 )
          return -1;
        v19 = *v16++;
        v15 = v19;
        v20 = v19 & 0x7F;
        v21 = v17 | (v20 << v18);
        v18 += 7;
        LODWORD(v17) = v21;
        HIDWORD(v17) |= (v20 << v22) | (v20 >> v23);
        if ( (v19 & 0x80) == 0 )
        {
          if ( v18 <= 0x3F )
            break;
          goto LABEL_17;
        }
      }
    }
    if ( (v15 & 0x40) == 0 )
    {
LABEL_17:
      if ( v16 == v14 )
        return -1;
      v24 = v17 != 0;
      if ( !v16 )
        v24 = 1;
      if ( v24 )
        return -1;
      v25 = *v16;
      if ( v25 == 6 )
      {
        v26 = v16 + 1;
        *a3 = -1;
      }
      else
      {
        if ( v25 != 148 || a2 <= (unsigned int)(v16 + 1) )
          return -1;
        v27 = v16[1];
        v26 = v16 + 2;
        *a3 = v27;
      }
      if ( v26 == (unsigned __int8 *)a2 )
        return v30;
    }
    return -1;
  }
  return -1;
}
