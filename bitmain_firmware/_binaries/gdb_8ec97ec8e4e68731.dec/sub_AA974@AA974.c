int __fastcall sub_AA974(int a1, int a2)
{
  int result; // r0
  int v4; // r4
  int v5; // r6
  int v6; // r0
  int v7; // r3
  int v8; // r8
  int v9; // r10
  int v10; // r7
  char *v11; // r2
  int v12; // r5
  int v13; // r1
  int v14; // r0
  int v15; // r3
  bool v16; // zf
  char *v17; // r3
  int v18; // r1
  int v19; // r2
  bool v20; // zf
  char *v21; // r3
  int v22; // r3
  bool v23; // zf
  int v24; // r3
  int v25; // r0
  int v26; // r0
  int v27; // r3
  int v28; // r8
  int v29; // r7
  int v30; // r5
  int v31; // r2
  int v32; // r3
  int v33; // r10
  int v34; // r0
  int v35; // r5
  int v36; // r6
  int v37; // r0
  int v38; // r3
  int v39; // r0
  int v40; // r3
  int v41; // r3
  const char *v42; // r5
  size_t v43; // r0
  int v44; // r1
  size_t v45; // r7
  int v46; // r2
  int v47; // r6
  int v48; // r5
  bool v49; // zf
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r10
  int v54; // r3
  int v55; // r1
  int v56; // r0
  int v57; // r2
  char *v58; // r0
  _BYTE v59[4]; // [sp+8h] [bp-4Ch] BYREF
  const char *v60; // [sp+Ch] [bp-48h]
  int v61; // [sp+10h] [bp-44h]
  _BOOL4 v62; // [sp+14h] [bp-40h]
  int v63; // [sp+1Ch] [bp-38h] BYREF
  __int64 v64; // [sp+20h] [bp-34h] BYREF
  __int64 v65; // [sp+28h] [bp-2Ch] BYREF

  result = sub_A0870(a1);
  v4 = result;
  if ( (*(_BYTE *)(*(_DWORD *)(result + 24) + 2) & 8) == 0 )
  {
    v62 = sub_A0CFC(result);
    if ( v62 )
      goto LABEL_63;
    v5 = sub_A0E38(v4, (const char *)&dword_375E30);
    if ( !v5 )
      goto LABEL_42;
LABEL_4:
    v61 = v4;
    ((void (__fastcall *)(int))loc_A0928)(v5);
    do
    {
      v6 = sub_171258(v4);
      v7 = *(_DWORD *)(v5 + 24);
      v8 = v6;
      if ( *(__int16 *)(v7 + 4) <= 0 )
        break;
      v9 = *(_DWORD *)(*(_DWORD *)(v7 + 24) + 12);
      v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 24) + 24) + 12);
      v11 = *(char **)(v10 + 24);
      if ( *v11 == 12 )
      {
        v12 = 0;
        v60 = "___XDLU_";
        while ( 1 )
        {
          v13 = v10;
          while ( 1 )
          {
            v15 = *((_DWORD *)v11 + 5);
            v16 = v15 == v13;
            if ( v15 != v13 )
              v16 = v15 == 0;
            if ( v16 )
              break;
            v11 = *(char **)(v15 + 24);
            v13 = v15;
            v14 = *v11;
            if ( v14 != 12 )
              goto LABEL_16;
          }
          v14 = 12;
LABEL_16:
          if ( !v9 )
LABEL_50:
            __und(0);
          v17 = *(char **)(v9 + 24);
          v18 = *v17;
          if ( v18 == 12 )
          {
            v19 = *((_DWORD *)v17 + 5);
            v20 = v19 == v9;
            if ( v19 != v9 )
              v20 = v19 == 0;
            if ( !v20 )
            {
              while ( 1 )
              {
                v21 = *(char **)(v19 + 24);
                v18 = *v21;
                if ( v18 != 12 )
                  break;
                v22 = *((_DWORD *)v21 + 5);
                v23 = v22 == v19;
                if ( v22 != v19 )
                  v23 = v22 == 0;
                if ( v23 )
                  break;
                if ( !v22 )
                  goto LABEL_50;
                v19 = v22;
              }
            }
          }
          if ( v14 != v18 )
            break;
          if ( sub_172880(v10) )
            break;
          v51 = *(_DWORD *)(*(_DWORD *)(v9 + 24) + 8);
          if ( !v51 )
            break;
          v52 = sub_338BD4(v51, v60);
          v53 = v52;
          if ( !v52 )
            break;
          v54 = *(unsigned __int8 *)(v52 + 8);
          v63 = 8;
          if ( (unsigned int)(v54 - 48) > 9 )
            break;
          if ( !sub_9D47C(v52, 8, &v64, &v63) )
            break;
          if ( *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + 8) != v64 )
            break;
          v55 = v63 + 2;
          v63 = v55;
          if ( (unsigned int)*(unsigned __int8 *)(v53 + v55) - 48 > 9
            || !sub_9D47C(v53, v55, &v65, &v63)
            || *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + 24) != v65 )
          {
            break;
          }
          ++v12;
          v56 = sub_171258(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 20));
          v57 = *(_DWORD *)(v5 + 24);
          v8 = v56;
          if ( *(__int16 *)(v57 + 4) <= v12 )
            goto LABEL_45;
          v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v56 + 24) + 24) + 12);
          v9 = *(_DWORD *)(*(_DWORD *)(v57 + 24) + 24 * v12 + 12);
          v11 = *(char **)(v10 + 24);
          if ( *v11 != 12 )
            goto LABEL_62;
        }
        v24 = *(__int16 *)(*(_DWORD *)(v5 + 24) + 4);
        if ( v24 > 0 )
        {
          do
          {
            --v24;
            v4 = *(_DWORD *)(*(_DWORD *)(v4 + 24) + 20);
          }
          while ( v24 );
        }
        v25 = sub_A0870(v4);
        v26 = sub_A9EE8(v25, 0, 0, a2, 1);
        v27 = *(_DWORD *)(v5 + 24);
        v4 = v26;
        v28 = *(__int16 *)(v27 + 4);
        if ( v28 > 0 )
        {
          v29 = v61;
          v30 = 0;
          while ( 1 )
          {
            v31 = *(_DWORD *)(v27 + 24);
            v32 = 3 * (v28 - v30++);
            v33 = ((int (__fastcall *)(_DWORD, int))loc_A7D90)(*(_DWORD *)(v31 + 8 * v32 - 12), a2);
            v34 = sub_16FF58(v29);
            v4 = sub_172124(v34, v4, v33);
            v29 = *(_DWORD *)(*(_DWORD *)(v29 + 24) + 20);
            if ( v30 == v28 )
              break;
            v27 = *(_DWORD *)(v5 + 24);
          }
        }
        goto LABEL_37;
      }
LABEL_62:
      sub_94700(
        (int)"ada-lang.c",
        8850,
        "%s: Assertion `%s' failed.",
        "int ada_is_redundant_range_encoding(type*, type*)",
        "TYPE_CODE (range_type) == TYPE_CODE_RANGE");
LABEL_63:
      v4 = sub_A8280(v4);
      v5 = sub_A0E38(v4, (const char *)&dword_375E30);
      if ( v5 )
        goto LABEL_4;
      if ( !v4 )
      {
        ((void (*)(void))loc_A0928)();
        __und(0);
      }
LABEL_42:
      v41 = *(_DWORD *)(v4 + 24);
      v42 = *(const char **)(v41 + 8);
      if ( !v42 )
      {
        v42 = *(const char **)(v41 + 12);
        if ( !v42 )
        {
          v61 = v4;
          ((void (__fastcall *)(_DWORD))loc_A0928)(0);
          break;
        }
      }
      v43 = strlen(v42);
      v45 = v43 - 1;
      v46 = (unsigned __int8)v42[v43 - 1];
      if ( v46 != 80 )
      {
        ((void (__fastcall *)(_DWORD, int, int, _BYTE *))loc_A0928)(0, v44, v46, v59);
        v61 = v4;
        break;
      }
      v58 = (char *)memcpy(v59, v42, v43 + 1);
      *(_DWORD *)&v59[v45] = 1482645343;
      *(_WORD *)&v58[v45 + 4] = 65;
      v5 = sub_A0D3C(v4, v58);
      ((void (*)(void))loc_A0928)();
      v61 = v4;
    }
    while ( v5 );
LABEL_45:
    v47 = sub_A0870(*(_DWORD *)(*(_DWORD *)(v4 + 24) + 20));
    v48 = sub_A9EE8(v47, 0, 0, a2, 1);
    v49 = v47 == v48;
    if ( v47 == v48 )
      v49 = !v62;
    if ( v49 )
    {
      v35 = *(_DWORD *)(v4 + 24);
      goto LABEL_41;
    }
    v50 = sub_16FF58(v4);
    v4 = sub_172124(v50, v48, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 24) + 24) + 12));
LABEL_37:
    v35 = *(_DWORD *)(v4 + 24);
    v36 = *(_DWORD *)(v61 + 24);
    v16 = !v62;
    *(_DWORD *)(v35 + 8) = *(_DWORD *)(v36 + 8);
    if ( !v16 )
    {
      v37 = sub_347418(*(_DWORD *)(v4 + 20), *(_DWORD *)(*(_DWORD *)(v35 + 20) + 20));
      v38 = *(_DWORD *)(*(_DWORD *)(v36 + 24) + 8) >> 4;
      v39 = v37 * v38;
      *(_DWORD *)(*(_DWORD *)(v35 + 24) + 8) = *(_DWORD *)(*(_DWORD *)(v35 + 24) + 8) & 0xF | (16 * v38);
      v40 = v39 / 8;
      if ( v39 > (unsigned int)(8 * (v39 / 8)) )
        ++v40;
      *(_DWORD *)(v4 + 20) = v40;
    }
LABEL_41:
    *(_BYTE *)(v35 + 2) |= 8u;
    return v4;
  }
  return result;
}
