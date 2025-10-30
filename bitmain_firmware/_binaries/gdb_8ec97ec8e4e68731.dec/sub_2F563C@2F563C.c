unsigned int __fastcall sub_2F563C(_DWORD **a1, _DWORD *a2, unsigned int a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int result; // r0
  _DWORD *v11; // r12
  unsigned int v12; // r2
  int v13; // r3
  unsigned int v14; // r1
  int v15; // r3
  int v16; // r0
  _DWORD *v17; // r3
  int v18; // r2
  int v19; // r10
  unsigned int v20; // r9
  int v21; // r11
  int v22; // r0
  int v23; // r1
  int v24; // r3
  unsigned int v25; // r10
  unsigned int v26; // r11
  int v27; // r8
  int v28; // r0
  int v29; // r3
  int v30; // r0
  unsigned int v31; // r1
  unsigned int v32; // r12
  __int64 v33; // r2
  int v34; // r1
  int v35; // r2
  int v36; // r3
  bool v37; // zf
  int v38; // r3
  _DWORD *v39; // r0
  char *v40; // r0
  int v41; // r8
  int v42; // [sp+4h] [bp-4Ch]
  unsigned int s; // [sp+8h] [bp-48h] BYREF
  int v44; // [sp+Ch] [bp-44h]
  int v45; // [sp+10h] [bp-40h]
  int v46; // [sp+14h] [bp-3Ch]
  int v47; // [sp+1Ch] [bp-34h]
  __int16 v48; // [sp+24h] [bp-2Ch]

  if ( a2[2] > a3 || a2[3] <= a3 || !a2[4] )
    return 0;
  if ( !a2[8] )
  {
    v16 = (int)a1[5];
    if ( v16 )
    {
      v17 = a1[6];
    }
    else
    {
      v40 = sub_2AD7AC((int)*a1, ".line");
      if ( !v40 )
        return 0;
      v41 = *((_DWORD *)v40 + 10);
      if ( !v41 )
        v41 = *((_DWORD *)v40 + 9);
      v16 = sub_2AE08C(*a1, v40, 0, (int)a1[1]);
      a1[5] = (_DWORD *)v16;
      if ( !v16 )
        return 0;
      v17 = (_DWORD *)(v16 + v41);
      a1[6] = (_DWORD *)(v16 + v41);
    }
    v18 = a2[5];
    v19 = v16 + v18;
    v20 = v16 + v18 + 8;
    if ( (unsigned int)v17 >= v20 )
    {
      v21 = v19 + (*(int (__fastcall **)(int))((*a1)[1] + 40))(v16 + v18);
      v42 = (*(int (__fastcall **)(int))((*a1)[1] + 40))(v19 + 4);
      v22 = (int)*a1;
      v23 = (int)(v21 - v20) / 10;
      a2[7] = v23;
      v24 = sub_2ACBF4(v22, 8 * v23);
      a2[8] = v24;
      if ( !v24 )
        return 0;
      if ( a2[7] )
      {
        v25 = v19 + 18;
        v26 = 0;
        if ( v25 > (unsigned int)a1[6] )
        {
LABEL_28:
          a2[7] = v26;
        }
        else
        {
          while ( 1 )
          {
            v27 = v24 + 8 * v26;
            v28 = (*(int (__fastcall **)(unsigned int))((*a1)[1] + 40))(v20);
            v29 = (int)*a1;
            *(_DWORD *)(v27 + 4) = v28;
            v30 = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)(v29 + 4) + 40))(v20 + 6);
            v31 = v20 + 20;
            v24 = a2[8];
            v20 = v25;
            v32 = a2[7];
            v25 = v31;
            *(_DWORD *)(v24 + 8 * v26++) = v42 + v30;
            if ( v26 >= v32 )
              break;
            if ( v31 > (unsigned int)a1[6] )
              goto LABEL_28;
          }
        }
      }
    }
  }
  v11 = (_DWORD *)a2[9];
  if ( !v11 )
  {
    LODWORD(v33) = a2[6];
    if ( (_DWORD)v33 && (HIDWORD(v33) = a1[4], (unsigned int)v33 < HIDWORD(v33)) )
    {
      while ( sub_2F5414((int)(*a1 + 1), &s, v33, HIDWORD(v33)) )
      {
        v37 = v48 == 20;
        if ( v48 != 20 )
          v37 = v48 == 6;
        v38 = v37;
        if ( v48 == 29 )
          v38 |= 1u;
        if ( v48 == 3 )
          v38 |= 1u;
        if ( v38 )
        {
          v39 = sub_2AD09C((int)*a1, 0x10u);
          if ( !v39 )
            return 0;
          v34 = v47;
          v35 = v45;
          *v39 = a2[9];
          v36 = v46;
          a2[9] = v39;
          v39[1] = v34;
          v39[2] = v35;
          v39[3] = v36;
        }
        if ( v44 )
        {
          v33 = *(_QWORD *)(a1 + 3);
          LODWORD(v33) = v33 + v44;
          if ( HIDWORD(v33) > (unsigned int)v33 )
            continue;
        }
        result = a2[7];
        v11 = (_DWORD *)a2[9];
        if ( result )
          goto LABEL_8;
        goto LABEL_13;
      }
    }
    else
    {
      result = a2[7];
      if ( result )
        goto LABEL_8;
    }
    return 0;
  }
  result = a2[7];
  if ( !result )
  {
LABEL_14:
    while ( v11[2] > a3 || v11[3] <= a3 )
    {
      v11 = (_DWORD *)*v11;
      if ( !v11 )
        return result;
    }
    *a5 = v11[1];
    return 1;
  }
LABEL_8:
  v12 = 0;
  v13 = a2[8];
  while ( 1 )
  {
    v14 = *(_DWORD *)(a2[8] + 8 * v12++);
    if ( v14 <= a3 && *(_DWORD *)(v13 + 8) > a3 )
      break;
    v13 += 8;
    if ( v12 >= result )
    {
      result = 0;
      goto LABEL_13;
    }
  }
  result = 1;
  v15 = *(_DWORD *)(v13 + 4);
  *a4 = a2[1];
  *a6 = v15;
LABEL_13:
  if ( v11 )
    goto LABEL_14;
  return result;
}
