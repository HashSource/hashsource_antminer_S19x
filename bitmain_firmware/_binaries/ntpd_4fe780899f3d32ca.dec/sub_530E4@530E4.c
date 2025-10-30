__int16 *__fastcall sub_530E4(int a1)
{
  int v1; // r9
  unsigned __int8 *v3; // r5
  _BYTE *v4; // r10
  size_t v5; // r2
  int v6; // r4
  __int16 *result; // r0
  unsigned __int8 *v8; // r6
  int v9; // r3
  int v10; // r2
  int v11; // t1
  int v12; // r3
  int v13; // r2
  int *v14; // r8
  int v15; // r11
  int v16; // r12
  _DWORD *v17; // r3
  _DWORD *v18; // r8
  int v19; // r1
  int v20; // r2
  unsigned __int8 *v21; // r1
  int v22; // r5
  int v23; // r3
  char *v24; // r2
  int v25; // r3

  v1 = *(_DWORD *)(a1 + 4);
  v3 = (unsigned __int8 *)(a1 + 88);
  v4 = *(_BYTE **)(v1 + 84);
  v5 = *(_DWORD *)(a1 + 84);
  v6 = *(_DWORD *)v4;
  result = (__int16 *)_stack_chk_guard;
  if ( *(_DWORD *)(*(_DWORD *)v4 + 140) != 1 || !praecis_msg )
  {
    v8 = &v3[v5];
    if ( &v3[v5] == v3 )
      return result;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *(unsigned __int8 *)(v6 + 9);
        v11 = *v3++;
        v10 = v11;
        if ( v9 != 3 )
          break;
        v12 = *(__int16 *)(v6 + 10);
        if ( v10 == 16 )
        {
          *(_BYTE *)(v6 + 9) = 4;
        }
        else
        {
          v13 = v6 + v12;
          v12 = (__int16)(v12 + 1);
          *(_WORD *)(v6 + 10) = v12;
          *(_BYTE *)(v13 + 13) = *(v3 - 1);
        }
LABEL_13:
        if ( v12 <= 128 )
          goto LABEL_8;
LABEL_14:
        *(_BYTE *)(v6 + 9) = 0;
        if ( v3 == v8 )
          return result;
      }
      if ( v9 == 4 )
      {
        if ( v10 == 16 )
        {
          v20 = *(__int16 *)(v6 + 10);
          *(_BYTE *)(v6 + 9) = 3;
          v12 = (__int16)(v20 + 1);
          *(_WORD *)(v6 + 10) = v12;
          *(_BYTE *)(v6 + v20 + 13) = *(v3 - 1);
          goto LABEL_13;
        }
        if ( v10 == 3 )
        {
          v25 = *(__int16 *)(v6 + 10);
          *(_BYTE *)(v6 + 9) = 1;
          if ( v25 > 128 )
            goto LABEL_14;
LABEL_25:
          v14 = *(int **)(v1 + 84);
          v15 = *v14;
          result = (__int16 *)sub_52A04(v1);
          if ( result && *(int *)(v15 + 4) > 0 )
          {
            v16 = v14[52];
            *(_DWORD *)(v15 + 4) = 0;
            v14[46] = 0;
            sub_6C054(v14 + 14, 128, "%4d %03d %02d:%02d:%02d.%09ld", v14[47], v14[48], v14[49], v14[50], v14[51], v16);
            v14[46] = 24;
            if ( sub_39CF8(v14) )
            {
              sub_41F44(v1 + 16, (const char *)v14 + 56);
              v17 = v14 + 58;
              v18 = v14 + 56;
              v19 = v17[1];
              *v18 = *v17;
              v18[1] = v19;
              result = (__int16 *)sub_39D44(v1);
            }
            else
            {
              result = sub_394A0((__int16 *)v1, 6);
            }
          }
          goto LABEL_8;
        }
        *(_BYTE *)(v6 + 9) = 2;
        *(_BYTE *)(v6 + 12) = *(v3 - 1);
      }
      else
      {
        if ( v9 == 2 )
        {
          if ( v10 != 3 && v10 != 16 && v10 )
          {
            v12 = *(__int16 *)(v6 + 10);
            *(_BYTE *)(v6 + 9) = 3;
            *(_BYTE *)(v6 + 12) = *(v3 - 1);
            goto LABEL_13;
          }
LABEL_7:
          *(_BYTE *)(v6 + 9) = 0;
          *(_WORD *)(v6 + 10) = 0;
          goto LABEL_8;
        }
        if ( v10 != 16 )
          goto LABEL_7;
        *(_BYTE *)(v6 + 9) = 2;
      }
      *(_WORD *)(v6 + 10) = 0;
      if ( (v4[768] & 2) != 0 )
      {
        result = (__int16 *)sub_5F724(v4 + 232);
        if ( *(_BYTE *)(v6 + 9) == 1 )
          goto LABEL_25;
      }
LABEL_8:
      if ( v3 == v8 )
        return result;
    }
  }
  v21 = v3;
  v22 = dword_BD5FC;
  result = (__int16 *)memcpy(&byte_BD600[dword_BD5FC], v21, v5);
  v23 = v22 + *(_DWORD *)(a1 + 84);
  dword_BD5FC = v23;
  v24 = (char *)&dword_BD5F8 + v23 - 2;
  if ( v24[8] == 13 && *((_BYTE *)&dword_BD5F8 + v23 + 7) == 10 )
  {
    v24[8] = 0;
    sub_41F44(v1 + 16, byte_BD600);
    dword_BD5FC = 0;
    praecis_msg = 0;
    result = (__int16 *)sub_52E7C((int)v4);
    if ( (int)result < 0 )
      return sub_394A0((__int16 *)v1, 3);
  }
  return result;
}
