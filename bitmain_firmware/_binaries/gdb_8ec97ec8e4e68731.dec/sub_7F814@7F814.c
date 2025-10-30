int __fastcall sub_7F814(int a1, unsigned __int8 *a2, int a3, int a4, int a5)
{
  unsigned __int8 *v5; // r10
  int v6; // r5
  char *v7; // r12
  unsigned __int8 *v8; // r3
  unsigned __int8 *v9; // r1
  char v10; // r2
  int v11; // t1
  size_t v12; // r0
  size_t v13; // r4
  size_t v14; // r8
  int v15; // r6
  char *v16; // r7
  int v17; // r0
  int v18; // r6
  int v20; // r4
  unsigned __int64 v21; // r8
  int v22; // r10
  int v23; // r2
  __int64 v24; // r0
  int v25; // r3
  bool v26; // zf
  int v27; // r1
  _BOOL4 v28; // r2
  int v29; // r2
  int v30; // r3
  int v31; // r0
  int v32; // r4
  int v33; // r2
  unsigned int v34; // r12
  unsigned int v35; // r3
  unsigned int v36; // r3
  int v37; // r0
  int v38; // r5
  int v39; // r0
  int v40; // r0
  int v41; // r0
  char v42[4]; // [sp+0h] [bp-4Ch] BYREF
  int v43; // [sp+4h] [bp-48h]
  int v44; // [sp+8h] [bp-44h]
  int v45; // [sp+Ch] [bp-40h]
  __int64 v46; // [sp+10h] [bp-3Ch]
  int v47; // [sp+18h] [bp-34h]
  unsigned __int8 *v48; // [sp+1Ch] [bp-30h]
  unsigned __int64 v49; // [sp+20h] [bp-2Ch]

  v5 = a2;
  v43 = a1;
  v6 = dword_46DE54;
  if ( a4 )
  {
    if ( a3 > 0 )
    {
      v8 = a2 - 1;
      v7 = v42;
      v9 = &a2[a3 - 1];
      do
      {
        v11 = *++v8;
        v10 = v11;
        if ( v11 != 95 )
          *v7++ = v10;
      }
      while ( v8 != v9 );
    }
    else
    {
      v7 = v42;
    }
    *v7 = 0;
    v12 = strlen(v42);
    v13 = v12;
    v14 = v12;
    v15 = *(_DWORD *)(v43 + 4);
    if ( !v12 )
    {
      v18 = *(_DWORD *)(v15 + 4);
      goto LABEL_12;
    }
    v16 = &v42[v12];
    v17 = tolower((unsigned __int8)v42[v12 - 1]);
    v18 = *(_DWORD *)(v15 + 4);
    if ( v17 != 105 )
    {
      if ( v17 == 102 )
      {
        --v13;
        *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_103A3C(v18) + 48);
      }
      else
      {
        if ( v17 != 108 )
        {
LABEL_12:
          *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_103A3C(v18) + 52);
          goto LABEL_13;
        }
        --v13;
        *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_103A3C(v18) + 56);
      }
LABEL_13:
      if ( sub_1C44E4(v42, v13) )
        return 264;
      else
        return 268;
    }
    if ( v13 != 1 )
    {
      v37 = tolower((unsigned __int8)*(v16 - 2));
      if ( v37 == 102 )
      {
        v13 -= 2;
        *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_103A3C(v18) + 60);
        goto LABEL_13;
      }
      if ( v37 == 108 )
      {
        v13 -= 2;
        *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_103A3C(v18) + 68);
        goto LABEL_13;
      }
    }
    v13 = v14 - 1;
    *(_DWORD *)(a5 + 16) = *(_DWORD *)(sub_103A3C(v18) + 64);
    goto LABEL_13;
  }
  if ( *a2 != 48 )
    goto LABEL_17;
  v36 = a2[1];
  if ( v36 == 88 )
    goto LABEL_66;
  if ( v36 <= 0x58 )
  {
    if ( v36 != 66 )
      goto LABEL_70;
LABEL_76:
    if ( a3 > 2 )
    {
      v5 = a2 + 2;
      a3 -= 2;
      v6 = 2;
    }
    goto LABEL_17;
  }
  if ( v36 == 98 )
    goto LABEL_76;
  if ( v36 == 120 )
  {
LABEL_66:
    if ( a3 > 2 )
    {
      v5 = a2 + 2;
      a3 -= 2;
      v6 = 16;
    }
    goto LABEL_17;
  }
LABEL_70:
  v6 = 8;
LABEL_17:
  v20 = a3;
  v47 = 0;
  v45 = 0;
  v21 = 0;
  v44 = 0;
  v48 = v5;
  v46 = v6;
  v22 = 0;
  while ( v20 > 0 )
  {
    v25 = *v48++;
    if ( v25 == 95 )
    {
      v49 = v21;
      goto LABEL_25;
    }
    if ( (unsigned int)(v25 - 65) <= 0x19 )
      v25 += 32;
    v26 = v25 == 108;
    if ( v25 != 108 )
      v26 = v25 == 117;
    v27 = !v26;
    if ( v26 )
    {
      v23 = v25 - 48;
      v49 = v21;
      if ( (unsigned int)(v25 - 48) > 9 )
      {
LABEL_38:
        v28 = (unsigned int)(v25 - 97) <= 5;
        if ( v6 <= 10 )
          v28 = 0;
        if ( v28 )
        {
          if ( v47 )
            return 268;
          v22 = v25 - 87;
          v49 += v25 - 87;
        }
        else
        {
          if ( v25 == 108 )
            v29 = ((unsigned __int8)v45 ^ 1) & 1;
          else
            v29 = 0;
          if ( v29 )
          {
            v47 = 1;
            v45 = 1;
          }
          else
          {
            if ( v25 == 117 )
              v30 = ((unsigned __int8)v44 ^ 1) & 1;
            else
              v30 = 0;
            if ( !v30 )
              return 268;
            v47 = 1;
            v44 = 1;
          }
        }
        goto LABEL_21;
      }
    }
    else
    {
      v49 = __PAIR64__(HIDWORD(v46), v6) * v21;
      v23 = v25 - 48;
      if ( (unsigned int)(v25 - 48) > 9 )
        goto LABEL_38;
    }
    if ( v47 )
      return 268;
    v22 = v23;
    v49 += v23;
LABEL_21:
    if ( v22 >= v6 )
      return 268;
    if ( v27 )
    {
      LODWORD(v24) = sub_347F74(v6 * v21, (__PAIR64__(HIDWORD(v46), v6) * v21) >> 32, v46, HIDWORD(v46));
      if ( v24 != v21 || __PAIR64__(HIDWORD(v46), v6) * v21 + v22 < v21 )
        sub_946E0("Numeric constant too large.");
    }
LABEL_25:
    v21 = v49;
    --v20;
  }
  v31 = *(_DWORD *)(*(_DWORD *)(v43 + 4) + 4);
  if ( v45 || HIDWORD(v21) )
  {
    v32 = *(_DWORD *)(sub_103A3C(v31) + 32);
    v33 = *(_DWORD *)(sub_103A3C(*(_DWORD *)(*(_DWORD *)(v43 + 4) + 4)) + 36);
    v34 = 0;
    v35 = 0x80000000;
    goto LABEL_57;
  }
  v32 = *(_DWORD *)(sub_103A3C(v31) + 24);
  if ( v6 == 10 )
    v38 = ((unsigned __int8)v44 ^ 1) & 1;
  else
    v38 = 0;
  v39 = *(_DWORD *)(*(_DWORD *)(v43 + 4) + 4);
  if ( v38 )
  {
    v40 = sub_103A3C(v39);
    v34 = 0x80000000;
    v33 = *(_DWORD *)(v40 + 32);
    v35 = v45;
    *(_QWORD *)a5 = v21;
    goto LABEL_59;
  }
  v41 = sub_103A3C(v39);
  v35 = v45;
  v34 = 0x80000000;
  v33 = *(_DWORD *)(v41 + 28);
LABEL_57:
  v26 = v44 == 0;
  *(_QWORD *)a5 = v21;
  if ( v26 )
  {
LABEL_59:
    if ( (unsigned int)v21 & v34 | HIDWORD(v21) & v35 )
      goto LABEL_71;
    *(_DWORD *)(a5 + 8) = v32;
    return 263;
  }
  else
  {
LABEL_71:
    *(_DWORD *)(a5 + 8) = v33;
    return 263;
  }
}
