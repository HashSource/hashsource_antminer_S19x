int __fastcall sub_328A00(int result, int *a2, unsigned __int16 *a3, int a4, int *a5, int *a6)
{
  int v6; // r12
  int v7; // lr
  int v8; // r6
  int v9; // t1
  unsigned __int16 *v10; // r3
  int i; // r6
  int v12; // t1
  int v13; // r8
  unsigned int v14; // lr
  int v15; // r9
  unsigned int v16; // r3
  int v17; // r6
  unsigned int v18; // lr
  int v19; // r1
  int v20; // r7
  _WORD *v21; // r6
  int v22; // r10
  int v23; // r9
  int v24; // r12
  __int16 v25; // r11
  unsigned int v26; // t1
  bool v27; // cc
  __int16 v28; // r3
  unsigned __int16 *v29; // r12
  unsigned __int16 *v30; // r2
  int v31; // r1
  unsigned __int16 v32; // t1
  int v33; // r3
  int v34; // r3
  unsigned __int16 v35; // t1

  v6 = a4 - *a2;
  if ( v6 > 0 )
  {
    *(_DWORD *)(result + 4) += v6;
    v7 = *a6 | 0x800;
    *a6 = v7;
    v8 = *a5;
    if ( *a5 <= 1 )
    {
      if ( a4 < v6 )
      {
        if ( v8 > 0 )
          goto LABEL_5;
        if ( a4 > 0 )
        {
          if ( *a3 )
          {
LABEL_59:
            *a5 = 1;
            goto LABEL_4;
          }
          while ( 1 )
          {
            a4 -= 3;
            if ( a4 <= 0 )
              break;
            v9 = a3[1];
            ++a3;
            if ( v9 )
              goto LABEL_59;
          }
        }
        if ( !v8 )
          goto LABEL_6;
        goto LABEL_5;
      }
    }
    else
    {
      *a5 = 1;
      if ( a4 < v6 )
      {
LABEL_4:
        v7 = *a6;
LABEL_5:
        *a6 = v7 | 0x20;
LABEL_6:
        *(_WORD *)(result + 10) = 0;
        *(_DWORD *)result = 1;
        return result;
      }
    }
    if ( v6 > 3 )
    {
      v10 = a3;
      for ( i = 3; ; i += 3 )
      {
        v12 = *v10++;
        a3 = v10;
        if ( v12 )
          *a5 = 1;
        if ( v6 <= i + 3 )
          break;
      }
      v6 -= i;
    }
    v13 = v6 - 1;
    v14 = *a3;
    if ( v6 == 3 )
    {
      if ( v14 < 0x1F4 )
      {
        if ( *a3 )
          *a5 = 3;
      }
      else
      {
        if ( v14 > 0x1F4 )
          v33 = 7;
        else
          v33 = *a5;
        if ( v14 <= 0x1F4 )
          v33 += 5;
        *a5 = v33;
      }
      v34 = *a2;
      if ( *a2 > 0 )
      {
        *(_DWORD *)result = v34;
        result += 10;
        do
        {
          v34 -= 3;
          v35 = a3[1];
          ++a3;
          *(_WORD *)result = v35;
          result += 2;
        }
        while ( v34 > 0 );
        goto LABEL_34;
      }
    }
    else
    {
      LOWORD(v15) = (unsigned __int16)dword_438B18;
      if ( v6 == 1 )
      {
        v16 = *a3;
        HIWORD(v15) = (unsigned int)dword_438B18 >> 16;
        v17 = *a5;
      }
      else
      {
        HIWORD(v15) = (unsigned int)dword_438B18 >> 16;
        v16 = (*(_DWORD *)(v15 + 4 * v13) * (v14 >> v13)) >> 17;
        if ( dword_438D00[v13] * v16 == v14 )
          v17 = *a5;
        else
          v17 = 1;
      }
      v18 = (6554 * v16) >> 16;
      *a5 = *(unsigned __int8 *)(v15 + v16 - 10 * v18 + 72) + v17;
      v19 = *a2;
      if ( v19 > 0 )
      {
        v20 = v6;
        *(_DWORD *)result = v19;
        v21 = (_WORD *)(result + 10);
        *(_WORD *)(result + 10) = v18;
        if ( v19 - 3 + v6 > 0 )
        {
          v22 = *(_DWORD *)(v15 + 4 * v6);
          v23 = dword_438D00[v6];
          result = -3;
          v24 = v19 - 3;
          v25 = dword_438D00[2 - v13];
          do
          {
            v26 = a3[1];
            ++a3;
            v27 = v24 <= 0;
            v24 -= 3;
            v28 = (v26 - v23 * ((unsigned __int16)((v22 * (v26 >> v20)) >> 16) >> 1)) * v25 + v18;
            LOWORD(v18) = (unsigned __int16)((v22 * (v26 >> v20)) >> 16) >> 1;
            *v21 = v28;
            if ( v27 )
              break;
            v21[1] = v18;
            ++v21;
          }
          while ( v20 + v24 > 0 );
        }
        goto LABEL_34;
      }
    }
    *(_WORD *)(result + 10) = 0;
    *(_DWORD *)result = 1;
LABEL_34:
    if ( *a5 )
      *a6 |= 0x20u;
    return result;
  }
  v29 = (unsigned __int16 *)(result + 10);
  if ( (unsigned __int16 *)(result + 10) != a3 )
  {
    if ( a4 > 0 )
    {
      v30 = a3 - 1;
      v31 = a4;
      do
      {
        v31 -= 3;
        v32 = v30[1];
        ++v30;
        *v29++ = v32;
      }
      while ( v31 > 0 );
    }
    *(_DWORD *)result = a4;
  }
  if ( *a5 )
    *a6 |= 0x820u;
  return result;
}
