int __fastcall sub_4B744(int a1, int a2)
{
  _DWORD *v2; // r5
  unsigned __int8 *v4; // r4
  int v5; // r3
  char v6; // r1
  char v7; // lr
  char v8; // r9
  char v9; // r12
  char v10; // lr
  char v11; // r12
  char v12; // r12
  char v13; // r12
  int result; // r0
  unsigned int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int *v19; // r0
  int v20; // r3
  int v21; // r1
  int (**v22)(); // r2
  int v23; // r5
  char *v24; // r4
  size_t v25; // r2
  int v26; // r12
  int v27; // r3
  int (**v28)(); // r2
  _DWORD *v29; // r3
  int v30; // r1
  int v31; // r0
  _DWORD *v32; // r0
  int v33; // r3
  __int16 v34; // r12
  int v35; // r0
  _BYTE buf[16]; // [sp+Ch] [bp-40h] BYREF
  char v37[40]; // [sp+1Ch] [bp-30h] BYREF

  v2 = *(_DWORD **)(a2 + 84);
  v4 = (unsigned __int8 *)*v2;
  if ( *(_BYTE *)(*v2 + 10) )
    return sub_4A084(a2, 7, "Ignore polling because of error during initializing");
  v5 = v2[194];
  if ( v5 && !*((_DWORD *)v4 + 5) )
  {
    sub_394A0((__int16 *)a2, 1);
    v5 = v2[194];
  }
  v2[194] = v5 + 1;
  v6 = *(_BYTE *)(a2 + 298);
  buf[11] = 0;
  if ( v6 < 0 )
    v7 = 49;
  else
    v7 = 48;
  buf[4] = v7;
  if ( (v6 & 0x40) != 0 )
    v8 = 49;
  else
    v8 = 48;
  if ( (v6 & 0x20) != 0 )
    v9 = 49;
  else
    v9 = 48;
  buf[6] = v9;
  if ( (v6 & 0x10) != 0 )
    v10 = 49;
  else
    v10 = 48;
  buf[7] = v10;
  if ( (v6 & 8) != 0 )
    v11 = 49;
  else
    v11 = 48;
  buf[8] = v11;
  if ( (v6 & 4) != 0 )
    v12 = 49;
  else
    v12 = 48;
  buf[9] = v12;
  if ( (v6 & 2) != 0 )
    v13 = 49;
  else
    v13 = 48;
  buf[5] = v8;
  buf[10] = v13;
  buf[12] = 0;
  sub_6C054(v37, 40, "polls=%ld reach=%s");
  result = sub_4A084(a2, 5, v37);
  v15 = *v4;
  *((_WORD *)v4 + 8) = 0;
  *((_WORD *)v4 + 9) = 0;
  *((_DWORD *)v4 + 5) = 0;
  v4[15] = 0;
  *((_DWORD *)v4 + 46) = 0;
  *((_WORD *)v4 + 6) = 1;
  if ( v15 == 4 )
    goto LABEL_54;
  if ( v15 > 4 )
  {
    if ( v15 != 6 )
    {
      if ( v15 >= 6 )
      {
        if ( v15 == 100 )
        {
          v16 = *(_DWORD *)(a2 + 84);
          v17 = *(_DWORD *)v16;
          v18 = *(__int16 *)(*(_DWORD *)v16 + 500);
          if ( !*(_WORD *)(*(_DWORD *)v16 + 500) )
          {
            *(_DWORD *)(v17 + 184) = v18;
            *(_DWORD *)(v17 + 296) = v18;
            *(_DWORD *)(v17 + 400) = v18;
          }
          *(_WORD *)(v17 + 502) = 1;
          return sub_498E8(a2, v16, v17);
        }
        return result;
      }
      v19 = *(int **)(a2 + 84);
      v26 = *v19;
      *(_DWORD *)(*v19 + 56) = 0;
      if ( (v19[192] & 1) != 0 )
      {
        v27 = (__int16)(*(_WORD *)(v26 + 16) + 1);
        v28 = &off_B46E4[4 * v27];
        v23 = (int)v28[242];
        v24 = (char *)v28[241];
        v25 = v23;
      }
      else
      {
        v25 = 6;
        v23 = 6;
        LOWORD(v27) = 2;
        *(_DWORD *)(v26 + 20) = 1;
        v24 = "time\r\n";
      }
      *(_WORD *)(v26 + 16) = v27;
      goto LABEL_45;
    }
LABEL_54:
    *(_BYTE *)(**(_DWORD **)(a2 + 84) + 15) = 0;
    return result;
  }
  if ( v15 != 2 )
  {
    if ( v15 > 2 )
    {
      v29 = *(_DWORD **)(a2 + 84);
      v30 = *(__int16 *)(*v29 + 2);
      *(_BYTE *)(*v29 + 15) = 0;
      if ( v30 == 1 )
      {
        buf[0] = 84;
      }
      else if ( v30 >= 1 && v30 <= 3 )
      {
        buf[0] = 67;
      }
      v24 = buf;
      v31 = v29[7];
      buf[1] = 0;
      if ( write(v31, buf, 1u) == 1 )
        return sub_4A084(a2, 2, v24);
      goto LABEL_46;
    }
    if ( v15 != 1 )
      return result;
    v19 = *(int **)(a2 + 84);
    v20 = *v19;
    *(_BYTE *)(v20 + 15) = 0;
    *(_DWORD *)(v20 + 56) = 0;
    if ( (v19[192] & 1) != 0 )
    {
      v21 = (__int16)(*(_WORD *)(v20 + 16) + 1);
      v22 = &off_B46E4[5 * v21];
      v23 = (int)v22[207];
      v24 = (char *)v22[206];
      v25 = v23;
    }
    else
    {
      v25 = 6;
      v23 = 6;
      LOWORD(v21) = 3;
      *(_DWORD *)(v20 + 20) = 2;
      v24 = "time\r\n";
    }
    *(_WORD *)(v20 + 16) = v21;
LABEL_45:
    if ( write(v19[7], v24, v25) == v23 )
      return sub_4A084(a2, 2, v24);
LABEL_46:
    sub_394A0((__int16 *)a2, 3);
    return sub_4A084(a2, 2, v24);
  }
  v32 = *(_DWORD **)(a2 + 84);
  v33 = *v32;
  v34 = *(_WORD *)(*v32 + 16);
  *(_BYTE *)(v33 + 15) = 0;
  *(_DWORD *)(v33 + 184) = 0;
  v35 = v32[7];
  *(_DWORD *)(v33 + 296) = 0;
  *(_DWORD *)(v33 + 400) = 0;
  *(_WORD *)(v33 + 16) = v34 + 1;
  if ( write(v35, byte_97F78, 4u) != 4 )
    sub_394A0((__int16 *)a2, 3);
  return sub_4A084(a2, 2, byte_97F78);
}
