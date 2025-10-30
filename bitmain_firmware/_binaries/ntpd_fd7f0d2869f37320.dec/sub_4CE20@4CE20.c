int __fastcall sub_4CE20(int a1, int a2)
{
  _DWORD *v3; // r5
  unsigned __int8 *v4; // r4
  int v5; // r3
  char v6; // r12
  char v7; // lr
  char v8; // r5
  char v9; // lr
  char v10; // r5
  char v11; // lr
  char v12; // lr
  char v13; // r12
  int result; // r0
  __int16 v15; // r1
  int v16; // r12
  int v17; // lr
  unsigned int v18; // r3
  __int16 v19; // r2
  int v20; // r1
  int v21; // r3
  int v22; // r2
  int *v23; // r0
  int v24; // r2
  char v25; // r3
  int v26; // r0
  __int16 v27; // r1
  int (**v28)(); // r3
  char *v29; // r4
  size_t v30; // r5
  int *v31; // r1
  int v32; // r0
  bool v33; // zf
  __int16 v34; // r2
  int (**v35)(); // r3
  _DWORD *v36; // r3
  int v37; // r1
  int v38; // r0
  _DWORD *v39; // r0
  int v40; // r3
  __int16 v41; // r12
  int v42; // r0
  _BYTE buf[16]; // [sp+Ch] [bp-3Ch] BYREF
  char v44[40]; // [sp+1Ch] [bp-2Ch] BYREF

  v3 = *(_DWORD **)(a2 + 84);
  v4 = (unsigned __int8 *)*v3;
  if ( *(_BYTE *)(*v3 + 10) )
    return sub_4B63C(a2, 7, "Ignore polling because of error during initializing");
  v5 = v3[194];
  if ( v5 && !*((_DWORD *)v4 + 5) )
  {
    sub_39C88(a2, 1);
    v5 = v3[194];
  }
  v3[194] = v5 + 1;
  v6 = *(_BYTE *)(a2 + 298);
  if ( v6 < 0 )
    v7 = 49;
  else
    v7 = 48;
  buf[4] = v7;
  if ( (v6 & 0x40) != 0 )
    v8 = 49;
  else
    v8 = 48;
  buf[5] = v8;
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
  buf[11] = 0;
  if ( (v6 & 8) != 0 )
    v11 = 49;
  else
    v11 = 48;
  buf[8] = v11;
  buf[12] = 0;
  if ( (v6 & 4) != 0 )
    v12 = 49;
  else
    v12 = 48;
  buf[9] = v12;
  if ( (v6 & 2) != 0 )
    v13 = 49;
  else
    v13 = 48;
  buf[10] = v13;
  sub_6D00C(v44, 40, "polls=%ld reach=%s");
  result = sub_4B63C(a2, 5, v44);
  v18 = *v4;
  v19 = 1;
  *((_WORD *)v4 + 8) = 0;
  *((_WORD *)v4 + 9) = 0;
  *((_DWORD *)v4 + 5) = 0;
  v4[15] = 0;
  *((_DWORD *)v4 + 46) = 0;
  *((_WORD *)v4 + 6) = 1;
  if ( v18 == 4 )
    goto LABEL_66;
  if ( v18 > 4 )
  {
    if ( v18 != 6 )
    {
      if ( v18 >= 6 )
      {
        if ( v18 == 100 )
        {
          v20 = *(_DWORD *)(a2 + 84);
          v21 = *(_DWORD *)v20;
          v22 = *(__int16 *)(*(_DWORD *)v20 + 500);
          if ( !*(_WORD *)(*(_DWORD *)v20 + 500) )
          {
            *(_DWORD *)(v21 + 184) = v22;
            *(_DWORD *)(v21 + 296) = v22;
            *(_DWORD *)(v21 + 400) = v22;
          }
          *(_WORD *)(v21 + 502) = 1;
          return sub_4A8B8(a2, v20, v21);
        }
        return result;
      }
      v31 = *(int **)(a2 + 84);
      v32 = *v31;
      *(_DWORD *)(*v31 + 56) = 0;
      v33 = (v31[192] & 1) == 0;
      if ( (v31[192] & 1) != 0 )
        v19 = *(_WORD *)(v32 + 16);
      else
        *(_DWORD *)(v32 + 20) = 1;
      if ( v33 )
      {
        v16 = 2;
        v34 = 2;
      }
      else
      {
        v34 = v19 + 1;
      }
      *(_WORD *)(v32 + 16) = v34;
      v26 = v31[7];
      if ( !v33 )
        v16 = v34;
      v35 = &off_B56E4[4 * v16];
      v29 = (char *)v35[241];
      v30 = (size_t)v35[242];
      goto LABEL_46;
    }
LABEL_66:
    *(_BYTE *)(**(_DWORD **)(a2 + 84) + 15) = 0;
    return result;
  }
  if ( v18 != 2 )
  {
    if ( v18 > 2 )
    {
      v36 = *(_DWORD **)(a2 + 84);
      v37 = *(__int16 *)(*v36 + 2);
      *(_BYTE *)(*v36 + 15) = 0;
      if ( v37 == 1 )
      {
        buf[0] = 84;
      }
      else if ( v37 >= 1 && v37 <= 3 )
      {
        buf[0] = 67;
      }
      v29 = buf;
      v38 = v36[7];
      buf[1] = 0;
      if ( write(v38, buf, 1u) == 1 )
        return sub_4B63C(a2, 2, v29);
      goto LABEL_47;
    }
    if ( v18 != 1 )
      return result;
    v23 = *(int **)(a2 + 84);
    v24 = *v23;
    *(_BYTE *)(v24 + 15) = 0;
    *(_DWORD *)(v24 + 56) = 0;
    v25 = *((_BYTE *)v23 + 768);
    v26 = v23[7];
    if ( (v25 & 1) != 0 )
    {
      v15 = *(_WORD *)(v24 + 16);
    }
    else
    {
      v17 = 3;
      *(_DWORD *)(v24 + 20) = 2;
    }
    if ( (v25 & 1) != 0 )
      v27 = v15 + 1;
    else
      v27 = v17;
    *(_WORD *)(v24 + 16) = v27;
    if ( (v25 & 1) != 0 )
      v17 = v27;
    v28 = &off_B56E4[5 * v17];
    v29 = (char *)v28[206];
    v30 = (size_t)v28[207];
LABEL_46:
    if ( v30 == write(v26, v29, v30) )
      return sub_4B63C(a2, 2, v29);
LABEL_47:
    sub_39C88(a2, 3);
    return sub_4B63C(a2, 2, v29);
  }
  v39 = *(_DWORD **)(a2 + 84);
  v40 = *v39;
  v41 = *(_WORD *)(*v39 + 16);
  *(_BYTE *)(v40 + 15) = 0;
  v42 = v39[7];
  *(_DWORD *)(v40 + 184) = 0;
  *(_DWORD *)(v40 + 296) = 0;
  *(_DWORD *)(v40 + 400) = 0;
  *(_WORD *)(v40 + 16) = v41 + 1;
  if ( write(v42, byte_99524, 4u) != 4 )
    sub_39C88(a2, 3);
  return sub_4B63C(a2, 2, byte_99524);
}
