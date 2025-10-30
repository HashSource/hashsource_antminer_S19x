int __fastcall sub_1127BC(unsigned __int8 *a1, unsigned int a2)
{
  int v2; // r2
  bool v4; // zf
  char v5; // lr
  char *v6; // r7
  unsigned __int8 v7; // r2
  char *v8; // r3
  int v9; // r1
  int result; // r0
  char v11; // r6
  char v12; // t1
  unsigned int v13; // r4
  char *v14; // r6
  unsigned __int8 v15; // r2
  char *v16; // r3
  char v17; // t1
  unsigned int v18; // r8
  _BYTE *v19; // r3
  _BYTE *v20; // lr
  char *v21; // r2
  int v22; // t1
  char *v23; // r2
  char *v24; // r2
  bool v25; // zf
  _BYTE *v26; // r3

  if ( a2 <= (unsigned int)a1 )
    return -1;
  v2 = *a1;
  if ( (unsigned __int8)(v2 - 80) <= 0x1Fu )
  {
    if ( a2 - (_DWORD)a1 == 1 )
      return v2 - 80;
    else
      return -1;
  }
  else
  {
    v4 = v2 == 165;
    if ( v2 != 165 )
      v4 = v2 == 245;
    if ( v4 )
    {
      v6 = (char *)(a1 + 1);
      if ( a2 <= (unsigned int)(a1 + 1) )
        return -1;
      v7 = a1[1];
      v8 = (char *)(a1 + 2);
      v9 = 0;
      result = v7 & 0x7F;
      if ( (v7 & 0x80) != 0 )
      {
        v11 = 0;
        do
        {
          v11 += 7;
          if ( a2 <= (unsigned int)v8 )
            return -1;
          v12 = *v8++;
          v13 = v12 & 0x7F;
          result |= v13 << v11;
          v9 |= (v13 << (v11 - 32)) | (v13 >> (32 - v11));
        }
        while ( v12 < 0 );
      }
      v19 = (_BYTE *)(v8 - v6);
      if ( !v19 )
        return -1;
      v20 = &v19[(_DWORD)v6];
      if ( !&v19[(_DWORD)v6] || (_BYTE *)a2 == v20 )
        return -1;
      v21 = v20 + 1;
      if ( (char)v19[(_DWORD)v6] < 0 )
      {
        while ( (char *)a2 != v21 )
        {
          v22 = *v21++;
          if ( v22 >= 0 )
            goto LABEL_31;
        }
        return -1;
      }
LABEL_31:
      v23 = (char *)(v21 - v20);
      if ( !v23 )
        return -1;
      v24 = &v23[(_DWORD)v20];
      if ( !v24 )
        return -1;
    }
    else
    {
      v5 = 0;
      if ( v2 != 144 )
        return -1;
      v14 = (char *)(a1 + 1);
      if ( a2 <= (unsigned int)(a1 + 1) )
        return -1;
      v15 = a1[1];
      v16 = (char *)(a1 + 2);
      v9 = 0;
      result = v15 & 0x7F;
      if ( (v15 & 0x80) != 0 )
      {
        do
        {
          v5 += 7;
          if ( a2 <= (unsigned int)v16 )
            return -1;
          v17 = *v16++;
          v18 = v17 & 0x7F;
          result |= v18 << v5;
          v9 |= (v18 << (v5 - 32)) | (v18 >> (32 - v5));
        }
        while ( v17 < 0 );
      }
      v26 = (_BYTE *)(v16 - v14);
      if ( !v26 )
        return -1;
      v24 = &v26[(_DWORD)v14];
      if ( !&v26[(_DWORD)v14] )
        return -1;
    }
    if ( v24 != (char *)a2 )
      return -1;
    v25 = result >> 31 == v9;
    if ( result >> 31 == v9 )
      v25 = 1;
    if ( !v25 )
      return -1;
  }
  return result;
}
