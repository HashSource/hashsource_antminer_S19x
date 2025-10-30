int __fastcall sub_2CC3D4(int result, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // r3
  int v5; // r7
  int v7; // r2
  int v8; // r1
  int v9; // r8
  int v10; // r9
  int v11; // r5
  int v12; // r4
  int v13; // r3
  _DWORD *v14; // r11
  _DWORD *v15; // r10
  int v16; // r2
  int v17; // r12
  int v18; // r2
  int v19; // r12
  int v20; // r2
  int v21; // r2
  int v22; // r2
  int v23; // r5
  int v24; // r1
  int v25; // r1
  int v26; // r2
  int v27; // r1
  int v28; // r2
  int v29; // r1
  int v30; // r0
  bool v31; // zf
  int v32; // r2
  int i; // r1

  if ( (a2[5] & 0x2100000) != 0x2000000 || *a3 )
    return result;
  v3 = (_DWORD *)a2[35];
  v5 = result;
  v7 = v3[8];
  if ( !v7 )
  {
    v20 = v3[29];
    if ( !v20 || (v21 = *(_DWORD *)(v20 + 20)) == 0 )
    {
      v22 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(result + 160) + 2348) + 8);
      if ( !v22 )
      {
        sub_2A6BBC("elf.c", 3454);
        v3 = (_DWORD *)a2[35];
        v22 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 160) + 2348) + 8);
      }
      v21 = *(_DWORD *)(*(_DWORD *)(v22 + 4 * a2[2]) + 20);
    }
    goto LABEL_28;
  }
  if ( v7 == -2 )
  {
    v26 = *(_DWORD *)(*(_DWORD *)(v3[31] + 140) + 120);
    v27 = *(_DWORD *)(v26 + 140);
    v28 = *(_DWORD *)(*(_DWORD *)(v26 + 148) + 160);
    v29 = *(_DWORD *)(v27 + 32);
    v30 = *(unsigned __int8 *)(v28 + 2341);
    v31 = (v30 & 0x40) == 0;
    if ( (v30 & 0x40) == 0 )
      v30 = *(_DWORD *)(v28 + 104);
    v32 = *(_DWORD *)(v28 + 536);
    if ( v31 )
      v29 -= v30;
    for ( i = *(_DWORD *)(v32 + 4 * v29); (unsigned int)*(unsigned __int8 *)(i + 12) - 6 <= 1; i = *(_DWORD *)(i + 20) )
      ;
    v21 = *(_DWORD *)(i + 28);
LABEL_28:
    v3[8] = v21;
  }
  result = a2[27];
  v8 = a2[9];
  if ( result )
  {
    v9 = 1;
  }
  else
  {
    result = sub_2ACBF4(v5, v8);
    v3 = (_DWORD *)a2[35];
    a2[27] = result;
    v3[12] = result;
    if ( !result )
    {
      *a3 = 1;
      return result;
    }
    v8 = a2[9];
    v9 = 0;
  }
  v10 = v3[31];
  v11 = result + v8;
  if ( !v10 )
    goto LABEL_30;
  v12 = v3[31];
  do
  {
    v14 = *(_DWORD **)(v12 + 140);
    if ( v9 )
    {
      v13 = v12;
    }
    else
    {
      v13 = *(_DWORD *)(v12 + 60);
      if ( !v13 )
        goto LABEL_11;
    }
    if ( (char **)v13 != &off_470950 )
    {
      v15 = *(_DWORD **)(v13 + 140);
      v16 = v15[15];
      if ( v16 )
      {
        if ( !v9 )
        {
          v24 = v14[15];
          if ( !v24 || (*(_DWORD *)(v24 + 8) & 0x200) == 0 )
          {
            v18 = v15[19];
            if ( !v18 )
              goto LABEL_22;
            goto LABEL_36;
          }
        }
        v11 -= 4;
        v17 = *(_DWORD *)(v5 + 4);
        *(_DWORD *)(v16 + 8) |= 0x200u;
        (*(void (__fastcall **)(_DWORD, int))(v17 + 84))(v15[17], v11);
      }
      v18 = v15[19];
      if ( !v18 )
      {
LABEL_22:
        v11 -= 4;
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(v5 + 4) + 84))(v15[23], v11);
        v14 = *(_DWORD **)(v12 + 140);
        goto LABEL_11;
      }
      if ( v9 )
      {
LABEL_21:
        v11 -= 4;
        v19 = *(_DWORD *)(v5 + 4);
        *(_DWORD *)(v18 + 8) |= 0x200u;
        (*(void (__fastcall **)(_DWORD, int))(v19 + 84))(v15[21], v11);
        goto LABEL_22;
      }
LABEL_36:
      v25 = v14[19];
      if ( !v25 || (*(_DWORD *)(v25 + 8) & 0x200) == 0 )
        goto LABEL_22;
      goto LABEL_21;
    }
LABEL_11:
    v12 = v14[31];
  }
  while ( v10 != v12 && v12 );
  result = a2[27];
LABEL_30:
  v23 = v11 - 4;
  if ( v23 != result )
    sub_2A6BBC("elf.c", 3559);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)(v5 + 4) + 84))((a2[5] >> 17) & 1, v23);
}
