unsigned int __fastcall sub_3326F0(unsigned int result, int *a2, int a3)
{
  int v3; // r12
  unsigned __int16 *v4; // lr
  int v5; // r3
  unsigned __int16 *v6; // r6
  int v7; // r4
  int v8; // r9
  _BYTE *v9; // r3
  int v10; // r8
  int v11; // r2
  char *v12; // r6
  _BYTE *v13; // r2
  unsigned int v14; // t1
  __int16 v15; // lr
  _BYTE *v16; // r2
  int v17; // r3
  int v18; // t1
  int v19; // r4
  bool v20; // cc
  int v21; // r2
  int v22; // r5
  _BYTE *v23; // r5
  int v24; // r10
  int v25; // r9
  int v26; // r11
  char *v27; // r6
  unsigned int v28; // t1
  bool v29; // cf
  unsigned int v30; // r2
  __int16 v31; // lr
  __int16 v32; // r2
  _BYTE v33[24]; // [sp+0h] [bp-1Ch] BYREF
  char v34; // [sp+18h] [bp-4h] BYREF

  v4 = (unsigned __int16 *)(result + 10);
  v3 = *(_DWORD *)result;
  if ( !a3 )
    goto LABEL_14;
  if ( v3 <= 49 )
  {
    v5 = 2 * (byte_438B2C[v3] + 0x7FFFFFFF);
    v6 = (unsigned __int16 *)((char *)v4 + v5);
    if ( a3 <= 49 )
    {
LABEL_4:
      v3 += a3;
      v7 = byte_438B2C[a3];
      v8 = a3 - 3 * (v7 - 1);
      v9 = &v33[2 * v7 + v5];
      v10 = 3 - v8;
      if ( v8 == 3 )
        goto LABEL_5;
      goto LABEL_23;
    }
  }
  else
  {
    v5 = (((2863311531u * (unsigned __int64)(unsigned int)(v3 + 2)) >> 32) & 0xFFFFFFFE) - 2;
    v6 = (unsigned __int16 *)((char *)v4 + v5);
    if ( a3 <= 49 )
      goto LABEL_4;
  }
  v3 += a3;
  v9 = &v33[2 * ((a3 + 2) / 3u) + v5];
  v8 = a3 - 3 * ((a3 + 2) / 3u - 1);
  v10 = 3 - v8;
  if ( v8 == 3 )
  {
LABEL_5:
    if ( v4 <= v6 )
    {
      v11 = (int)v6 - result;
      v12 = (char *)(v6 + 1);
      v13 = &v9[~(v11 - 10) & 0xFFFFFFFE];
      do
      {
        v14 = *((unsigned __int16 *)v12 - 1);
        v12 -= 2;
        result = v14;
        *(_WORD *)v9 = v14;
        v9 -= 2;
      }
      while ( v9 != v13 );
    }
    goto LABEL_8;
  }
LABEL_23:
  if ( v3 <= 49 )
    v22 = 2 * (byte_438B2C[v3] + 0x7FFFFFFF);
  else
    v22 = (((2863311531u * (unsigned __int64)(unsigned int)(v3 + 2)) >> 32) & 0xFFFFFFFE) - 2;
  v23 = &v33[v22];
  if ( v4 <= v6 )
  {
    v24 = dword_438D00[v8];
    v25 = dword_438D00[v10];
    result = (unsigned int)&v9[~((unsigned int)v6 - result - 10) & 0xFFFFFFFE];
    v26 = dword_43ADE8[v10 - 469];
    v27 = (char *)(v6 + 1);
    v15 = 0;
    do
    {
      v28 = *((unsigned __int16 *)v27 - 1);
      v27 -= 2;
      v29 = v23 >= v9;
      v9 -= 2;
      v30 = (v26 * (v28 >> v10)) >> 17;
      v31 = v30 + v15;
      v32 = v28 - v30 * v25;
      if ( v29 )
        *((_WORD *)v9 + 1) = v31;
      v15 = v32 * v24;
    }
    while ( v9 != (_BYTE *)result );
    goto LABEL_9;
  }
LABEL_8:
  v15 = 0;
LABEL_9:
  if ( v9 >= v33 )
  {
    result = (unsigned int)(v9 - 2);
    v16 = &v9[~(unsigned int)&v9[26 - (_DWORD)&v34 - 2] & 0xFFFFFFFE];
    while ( 1 )
    {
      *(_WORD *)v9 = v15;
      v9 = (_BYTE *)result;
      v15 = 0;
      if ( (_BYTE *)result == v16 )
        break;
      result -= 2;
    }
  }
  v4 = (unsigned __int16 *)v33;
LABEL_14:
  if ( v3 > 0 )
  {
    v17 = 0;
    do
    {
      v18 = *v4++;
      v19 = v17 + 10;
      v20 = (unsigned int)(v17 + 10) > 0x1F;
      v3 -= 3;
      result = word_43A6A8[v18];
      v21 = *a2 | (result << v17);
      v17 -= 22;
      *a2 = v21;
      if ( v20 )
      {
        a2[1] |= result >> (10 - v17);
        ++a2;
      }
      else
      {
        v17 = v19;
      }
    }
    while ( v3 > 0 );
  }
  return result;
}
