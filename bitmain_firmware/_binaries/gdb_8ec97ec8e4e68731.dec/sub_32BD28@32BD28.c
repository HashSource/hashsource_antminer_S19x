int __fastcall sub_32BD28(int a1, int a2, int a3, int *a4)
{
  char v5; // r0
  int v7; // r1
  unsigned int v9; // r0
  int v10; // r6
  bool v11; // cc
  int v12; // r8
  int v13; // r3
  unsigned int v14; // r9
  int v15; // r3
  __int16 *v16; // r3
  __int16 *v17; // r7
  unsigned int v18; // r2
  int v19; // r6
  unsigned int v20; // r0
  int v21; // r11
  unsigned int v22; // r8
  unsigned int v23; // r6
  int v24; // r3
  __int16 *v25; // r3
  __int16 *v26; // r2
  __int16 v27; // r1
  __int16 *v28; // r3
  __int16 *v29; // r2
  __int16 v30; // r1
  __int16 *v31; // r3
  __int16 v32; // r2
  int v33; // r6
  int v34; // r1
  __int64 v35; // r0
  __int16 v36; // r2
  __int16 v37; // r10
  int v39; // [sp+Ch] [bp-18h]
  int v40; // [sp+10h] [bp-14h]
  unsigned int v41; // [sp+14h] [bp-10h]
  int v42; // [sp+14h] [bp-10h]
  int v43; // [sp+1Ch] [bp-8h] BYREF

  v5 = *(_BYTE *)(a2 + 8);
  v43 = 0;
  if ( (v5 & 0x30) != 0 || (*(_BYTE *)(a3 + 8) & 0x30) != 0 )
  {
    sub_32AC0C(a1, a2, a3, a4, &v43);
    goto LABEL_4;
  }
  if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 || *(_DWORD *)(a3 + 4) )
    goto LABEL_7;
  v9 = sub_327B04(a3);
  v10 = v9;
  v11 = v9 > 0x80000000;
  if ( v9 != 0x80000000 )
    v11 = v9 + 2147483646 > 1;
  if ( !v11 || (int)abs32(v9) > *a4 )
  {
LABEL_7:
    v7 = 128;
    v43 = 128;
    goto LABEL_8;
  }
  sub_32AB6C(a1, a2);
  if ( v10 < 0 )
    v10 += *a4;
  if ( v10 )
  {
    v12 = *a4;
    if ( *a4 != v10 && (*(_BYTE *)(a1 + 8) & 0x40) == 0 )
    {
      v13 = *(_DWORD *)a1;
      v14 = a1 + 10;
      if ( *(int *)a1 > 49 )
        v15 = (((2863311531u * (unsigned __int64)(unsigned int)(v13 + 2)) >> 32) & 0xFFFFFFFE) - 2;
      else
        v15 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v13) + 0x7FFFFFFF);
      v16 = (__int16 *)(v14 + v15 + 2);
      if ( v12 > 49 )
      {
        v18 = v12 + 2;
        v17 = (__int16 *)(v14 + (((2863311531u * (unsigned __int64)(unsigned int)(v12 + 2)) >> 32) & 0xFFFFFFFE) - 2);
        v40 = (((2863311531u * (unsigned __int64)(unsigned int)(v12 + 2)) >> 32) & 0xFFFFFFFE) - 2;
        if ( v16 > v17 )
        {
          *(_DWORD *)a1 = v12;
LABEL_45:
          v33 = v12 - v10;
          v21 = v33 / 3;
          v20 = v18 / 3;
          v39 = 2 * (v33 / 3);
          v23 = v33 % 3;
          v22 = v12 - 3 * (v18 / 3 - 1);
          if ( !v23 )
            goto LABEL_30;
          goto LABEL_28;
        }
      }
      else
      {
        v17 = (__int16 *)(v14 + 2 * (*((unsigned __int8 *)&dword_438B18[5] + v12) + 0x7FFFFFFF));
        v40 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v12) + 0x7FFFFFFF);
        if ( v16 > v17 )
        {
          *(_DWORD *)a1 = v12;
          goto LABEL_27;
        }
      }
      do
        *v16++ = 0;
      while ( v17 >= v16 );
      *(_DWORD *)a1 = v12;
      if ( v12 > 49 )
      {
        v18 = v12 + 2;
        goto LABEL_45;
      }
LABEL_27:
      v19 = v12 - v10;
      v20 = *((unsigned __int8 *)&dword_438B18[5] + v12);
      v21 = v19 / 3;
      v22 = v12 - 3 * (v20 - 1);
      v39 = 2 * (v19 / 3);
      v23 = v19 % 3;
      if ( !v23 )
      {
LABEL_30:
        if ( v21 )
        {
          if ( v22 != 3 )
          {
            v37 = (unsigned __int64)sub_347674(*(unsigned __int16 *)(a1 + 10), dword_438D00[3 - v22]) >> 32;
            sub_328630((_WORD *)(a1 + 10), v21, 3 - v22);
            *v17 += dword_438D00[v22] * v37;
          }
          v25 = (__int16 *)(v14 + v39);
          if ( v14 + v39 < (unsigned int)v17 )
          {
            v26 = v17;
            do
            {
              v27 = *v25;
              *v25++ = *v26;
              *v26-- = v27;
            }
            while ( v26 > v25 );
          }
          v28 = (__int16 *)(v14 + v39 - 2);
          if ( v14 < (unsigned int)v28 )
          {
            v29 = (__int16 *)(a1 + 10);
            do
            {
              v30 = *v29;
              *v29++ = *v28;
              *v28-- = v30;
            }
            while ( v28 > v29 );
          }
          if ( v14 < (unsigned int)v17 )
          {
            v31 = (__int16 *)(a1 + 10);
            do
            {
              v32 = *v31;
              *v31++ = *v17;
              *v17-- = v32;
            }
            while ( v17 > v31 );
          }
        }
        *(_DWORD *)a1 = sub_327CA8(a1 + 10, (v40 >> 1) + 1);
        goto LABEL_4;
      }
LABEL_28:
      v41 = v20;
      v24 = (unsigned __int64)sub_347674(*(unsigned __int16 *)(a1 + 10), dword_438D00[v23]) >> 32;
      v34 = v41;
      v42 = v24;
      sub_328630((_WORD *)(a1 + 10), v34, v23);
      if ( v22 >= v23 )
      {
        *v17 += dword_438D00[v22 - v23] * v42;
      }
      else
      {
        v35 = sub_347674(v42, dword_438D00[v23 - v22]);
        v36 = *(v17 - 1);
        *v17 = v35;
        *(v17 - 1) = dword_438D00[v22 + 3 - v23] * WORD2(v35) + v36;
      }
      goto LABEL_30;
    }
  }
LABEL_4:
  v7 = v43;
  if ( !v43 )
    return a1;
LABEL_8:
  sub_327DE4(a1, v7, (int)a4);
  return a1;
}
