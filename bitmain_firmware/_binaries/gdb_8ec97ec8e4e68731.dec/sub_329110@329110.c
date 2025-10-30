int __fastcall sub_329110(int result, int *a2, unsigned __int64 a3)
{
  int v3; // r12
  unsigned __int16 *v4; // r5
  int v5; // r6
  unsigned int v6; // lr
  _WORD *v7; // r4
  int v8; // t1
  unsigned __int16 *i; // r4
  int v10; // r12
  int v11; // lr
  int v12; // r0
  int v13; // r1
  unsigned int v14; // lr
  _WORD *v15; // r4
  int v16; // t1
  _BOOL4 v17; // r2
  unsigned __int16 *j; // r2
  int v19; // r5
  int v20; // r2
  int v21; // r1
  int v22; // r2
  bool v23; // zf

  switch ( a2[3] )
  {
    case 0:
      if ( *(char *)(result + 8) < 0 )
        goto LABEL_27;
      goto LABEL_3;
    case 1:
      goto LABEL_3;
    case 2:
      if ( (int)a3 <= 4 )
        return result;
      goto LABEL_4;
    case 3:
      if ( (int)a3 > 5 )
        goto LABEL_4;
      if ( (_DWORD)a3 != 5 )
        return result;
      v3 = *(unsigned __int16 *)(result + 10);
      if ( (v3 & 1) == 0 )
        return result;
      goto LABEL_5;
    case 4:
      if ( (int)a3 <= 5 )
        return result;
      goto LABEL_4;
    case 5:
      if ( (a3 & 0x80000000) != 0LL )
        goto LABEL_28;
      return result;
    case 6:
      if ( *(char *)(result + 8) < 0 )
      {
LABEL_3:
        if ( (int)a3 <= 0 )
          return result;
LABEL_4:
        v3 = *(unsigned __int16 *)(result + 10);
LABEL_5:
        v4 = (unsigned __int16 *)(result + 10);
        v5 = *(_DWORD *)result;
        v6 = *(_DWORD *)result;
        if ( *(_DWORD *)result <= 3u )
        {
          v7 = (_WORD *)(result + 10);
        }
        else
        {
          if ( v3 != 999 )
            goto LABEL_15;
          v7 = (_WORD *)(result + 10);
          while ( 1 )
          {
            v6 -= 3;
            v8 = (unsigned __int16)v7[1];
            ++v7;
            v3 = v8;
            if ( v6 <= 3 )
              break;
            if ( v3 != 999 )
              goto LABEL_15;
          }
        }
        if ( v3 == dword_438D00[v6] - 1 )
        {
          *v7 = dword_438D00[v6 - 1];
          for ( i = v7 - 1; v4 <= i; --i )
            *i = 0;
          v10 = *(_DWORD *)(result + 4) + 1;
          v11 = a2[1] + 1;
          *(_DWORD *)(result + 4) = v10;
          if ( v5 + v10 > v11 )
            return sub_32790C(result, (int)a2, (_DWORD *)HIDWORD(a3));
          return result;
        }
LABEL_15:
        v12 = 1;
LABEL_16:
        if ( v5 <= 49 )
        {
          LODWORD(a3) = 35608;
        }
        else
        {
          HIDWORD(a3) = -1431655765;
          LODWORD(a3) = v5 + 2;
        }
        if ( v5 <= 49 )
        {
          WORD1(a3) = 67;
          LODWORD(a3) = a3 + v5;
        }
        else
        {
          a3 = (unsigned int)a3 * (unsigned __int64)HIDWORD(a3);
        }
        if ( v5 > 49 )
          v13 = HIDWORD(a3) >> 1;
        else
          v13 = *(unsigned __int8 *)(a3 + 20);
        return sub_3275B0(v4, v13, word_4714A4, 1, 0, (signed int)v4, v12);
      }
LABEL_27:
      if ( (a3 & 0x80000000) == 0LL )
        return result;
LABEL_28:
      v3 = *(unsigned __int16 *)(result + 10);
LABEL_29:
      v4 = (unsigned __int16 *)(result + 10);
      v5 = *(_DWORD *)result;
      v14 = *(_DWORD *)result;
      if ( *(_DWORD *)result <= 3u )
      {
        v15 = (_WORD *)(result + 10);
      }
      else
      {
        if ( v3 )
        {
LABEL_35:
          v12 = -1;
          goto LABEL_16;
        }
        v15 = (_WORD *)(result + 10);
        while ( 1 )
        {
          v14 -= 3;
          v16 = (unsigned __int16)v15[1];
          ++v15;
          v3 = v16;
          if ( v14 <= 3 )
            break;
          if ( v3 )
            goto LABEL_35;
        }
      }
      if ( v3 != dword_438D00[v14 - 1] )
        goto LABEL_35;
      *v15 = LOWORD(dword_438D00[v14]) - 1;
      for ( j = v15 - 1; v4 <= j; --j )
        *j = 999;
      v19 = *a2;
      v20 = a2[2];
      v21 = *(_DWORD *)(result + 4);
      v22 = v20 - v19 + 1;
      *(_DWORD *)(result + 4) = v21 - 1;
      if ( v21 == v22 )
      {
        v23 = v5 == 1;
        if ( v5 == 1 )
          v23 = v14 == 1;
        if ( v23 )
        {
          LOWORD(v22) = 0;
        }
        else
        {
          LOWORD(v3) = v3 - 1;
          --v5;
        }
        if ( v23 )
        {
          *v15 = v22;
        }
        else
        {
          *v15 = v3;
          *(_DWORD *)result = v5;
        }
        *(_DWORD *)(result + 4) = v21;
        *(_DWORD *)HIDWORD(a3) |= 0x3820u;
      }
      return result;
    case 7:
      v3 = *(unsigned __int16 *)(result + 10);
      if ( ((*(_WORD *)(result + 10) % 5u != 1) & ((unsigned int)a3 >> 31)) != 0 )
        goto LABEL_29;
      v17 = (int)a3 > 0;
      if ( *(_WORD *)(result + 10) % 5u )
        v17 = 0;
      if ( !v17 )
        return result;
      goto LABEL_5;
    default:
      *(_DWORD *)HIDWORD(a3) |= 0x40u;
      return result;
  }
}
