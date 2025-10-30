int __fastcall sub_12C9EC(int a1, unsigned __int8 **a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // r4
  unsigned __int8 *v9; // r8
  int v11; // r10
  unsigned __int8 *v12; // r3
  int v14; // r6
  unsigned __int8 *v15; // r7
  int v16; // r10
  int v17; // r1
  char v18; // r4
  const char *v19; // r1
  int v20; // r0
  int v21; // r6
  int *v22; // r7
  int v23; // r5
  const char *v25; // r2
  int v26; // r4
  bool v27; // zf
  int v28; // r3
  bool v29; // cc
  int v30; // r3
  int v31; // r2
  int v32; // r0
  int v33; // r7
  unsigned __int8 *v34; // r7
  int v35; // r8
  int v36; // r4
  bool v37; // zf
  unsigned __int8 *v38; // r3
  int v39; // r0
  unsigned __int8 *v40; // lr
  unsigned int v41; // r7
  unsigned __int8 *v42; // r6
  int v43; // r0
  int v44; // r4
  int v45; // r2
  int v46; // r6
  unsigned __int8 *v47; // r7
  int v48; // t1
  int v49; // r0
  int *v50; // r0
  int v51; // r4
  char *v52; // r2
  char *v53; // r4
  unsigned int v54; // r3
  unsigned int v55; // t1
  int v56; // r0
  _BOOL4 v57; // r1
  int v58; // r6
  int v59; // r2
  int *v60; // r7
  int v61; // r6
  int v62; // r4
  int v63; // r2
  int v64; // r2
  int v65; // [sp+10h] [bp-CCh]
  int v66; // [sp+14h] [bp-C8h]
  signed int v67; // [sp+18h] [bp-C4h]
  unsigned __int8 *v68; // [sp+30h] [bp-ACh]
  unsigned int v69; // [sp+3Ch] [bp-A0h]
  unsigned __int8 *v70; // [sp+40h] [bp-9Ch] BYREF
  char *v71; // [sp+44h] [bp-98h] BYREF
  int v72; // [sp+48h] [bp-94h] BYREF
  int v73; // [sp+4Ch] [bp-90h] BYREF
  int v74; // [sp+50h] [bp-8Ch] BYREF
  int v75; // [sp+54h] [bp-88h] BYREF
  _BYTE v76[132]; // [sp+58h] [bp-84h] BYREF

  v8 = 0;
  v75 = 0;
  if ( a5 > 128 )
  {
    sub_B6C30(a1, (int)"BAD RECURSION DEPTH\n");
    return 0;
  }
  v9 = *a2;
  v11 = a3;
  v12 = &(*a2)[a3];
  v70 = *a2;
  v69 = (unsigned int)v12;
  if ( a3 <= 0 )
  {
    v20 = 0;
    v23 = 1;
    v21 = 0;
    v22 = 0;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v14 = sub_ADD48(&v70, &v72, &v73, &v74, v11);
    v65 = v14 & 0x80;
    if ( (v14 & 0x80) != 0 )
    {
      v8 = 0;
      v43 = a1;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      sub_B69CC(v43, (int)"Error in encoding\n", 18);
      v20 = v75;
      goto LABEL_13;
    }
    v15 = (unsigned __int8 *)(v70 - v9);
    v68 = v70;
    v16 = v11 - (v70 - v9);
    if ( sub_B550C(a1, "%5ld:", v9 - *a2 + a4) <= 0 )
    {
LABEL_83:
      v8 = 0;
      v20 = v75;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      goto LABEL_13;
    }
    if ( v14 == 33 )
    {
      if ( sub_B550C(a1, "d=%-2d hl=%ld l=inf  ", a5, v15) <= 0 )
        goto LABEL_83;
      v67 = v73;
      v18 = v74;
      if ( a6 )
      {
        v19 = "cons: ";
        v65 = a5;
        v66 = 32;
      }
      else
      {
        v66 = 32;
        v19 = "cons: ";
      }
    }
    else
    {
      if ( sub_B550C(a1, "d=%-2d hl=%ld l=%4ld ", a5, v15, v72) <= 0 )
        goto LABEL_83;
      v17 = 0;
      if ( a6 )
        v17 = a5;
      v65 = v17;
      v67 = v73;
      v18 = v74;
      v66 = v14 & 0x20;
      if ( (v14 & 0x20) != 0 )
        v19 = "cons: ";
      else
        v19 = "prim: ";
    }
    if ( sub_B69CC(a1, (int)v19, 6) <= 5 )
      goto LABEL_12;
    sub_B6E94(a1, v65, 128);
    if ( (v18 & 0xC0) == 0xC0 )
    {
      sub_B5560(v76, 0x80u, "priv [ %d ] ", v67);
      v25 = v76;
    }
    else if ( v18 < 0 )
    {
      sub_B5560(v76, 0x80u, "cont [ %d ]", v67);
      v25 = v76;
    }
    else if ( (v18 & 0x40) != 0 )
    {
      sub_B5560(v76, 0x80u, "appl [ %d ]", v67);
      v25 = v76;
    }
    else if ( v67 <= 30 )
    {
      v25 = sub_12C9C0(v67);
    }
    else
    {
      sub_B5560(v76, 0x80u, "<ASN1 %d>", v67);
      v25 = v76;
    }
    if ( sub_B550C(a1, "%-18s", v25) <= 0 )
      goto LABEL_12;
    if ( v66 )
    {
      v34 = v70;
      v35 = v72;
      if ( sub_B69CC(a1, (int)"\n", 1) <= 0 )
        goto LABEL_12;
      v36 = v72;
      if ( v16 < v72 )
      {
        v8 = 0;
        v49 = a1;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        sub_B550C(v49, "length is greater than %ld\n", v16);
        v20 = v75;
        goto LABEL_13;
      }
      v37 = v72 == 0;
      if ( !v72 )
        v37 = v14 == 33;
      if ( v37 )
      {
        v38 = v70;
        while ( 1 )
        {
          v39 = sub_12C9EC(a1, &v70, v69 - (_DWORD)v38, v38 - *a2 + a4, a5 + 1, a6, a7);
          if ( !v39 )
            goto LABEL_12;
          if ( v39 == 2 )
            break;
          v38 = v70;
          if ( v69 <= (unsigned int)v70 )
            goto LABEL_71;
        }
        v38 = v70;
LABEL_71:
        v33 = v38 - v34;
        v72 = v33;
      }
      else
      {
        v40 = v70;
        v41 = (unsigned int)&v34[v35];
        if ( (unsigned int)v70 < v41 )
        {
          do
          {
            v42 = v40;
            if ( !sub_12C9EC(a1, &v70, v36, v40 - *a2 + a4, a5 + 1, a6, a7) )
              goto LABEL_12;
            v40 = v70;
            v36 -= v70 - v42;
          }
          while ( v41 > (unsigned int)v70 );
          v33 = v72;
        }
        else
        {
          v33 = v72;
        }
      }
      goto LABEL_58;
    }
    if ( !v74 )
      break;
    v70 += v72;
    if ( sub_B69CC(a1, (int)"\n", 1) <= 0 )
      goto LABEL_12;
    v33 = v72;
LABEL_58:
    v11 = v16 - v33;
    if ( v11 <= 0 )
    {
      v8 = 0;
      v20 = v75;
      v21 = 0;
      v22 = 0;
      v23 = 1;
      goto LABEL_13;
    }
    v9 = v70;
  }
  v26 = v73;
  v27 = v73 == 26;
  if ( v73 != 26 )
    v27 = v73 == 12;
  v28 = v27;
  if ( ((v73 - 18) & 0xFFFFFFFB) <= 2 )
    v28 |= 1u;
  if ( v28 )
  {
    if ( sub_B69CC(a1, (int)&word_1B5258, 1) <= 0 )
      goto LABEL_12;
    if ( v72 > 0 )
    {
      v32 = sub_B69CC(a1, (int)v70, v72);
      if ( v32 != v72 )
        goto LABEL_12;
    }
    goto LABEL_55;
  }
  switch ( v73 )
  {
    case 6:
      v71 = (char *)v9;
      if ( sub_128020(&v75, (unsigned __int8 **)&v71, (int)&v15[v72]) )
      {
        if ( sub_B69CC(a1, (int)&word_1B5258, 1) <= 0 )
          goto LABEL_12;
        sub_127D14(a1, v75);
        goto LABEL_55;
      }
      if ( sub_B6C30(a1, (int)":BAD OBJECT") <= 0 )
        goto LABEL_12;
      goto LABEL_101;
    case 1:
      if ( v72 == 1 )
      {
        v26 = 0;
      }
      else
      {
        if ( sub_B6C30(a1, (int)":BAD BOOLEAN") <= 0 )
        {
          v8 = 0;
          v20 = v75;
          v21 = 0;
          v22 = 0;
          v23 = 0;
          goto LABEL_13;
        }
        if ( v72 <= 0 )
          goto LABEL_101;
      }
      sub_B550C(a1, ":%u", *v70);
      goto LABEL_100;
    case 30:
      goto LABEL_55;
  }
  if ( v73 != 4 )
  {
    if ( v73 == 2 )
    {
      v71 = (char *)v9;
      v60 = (int *)sub_B2074(0, (void **)&v71, (int)&v15[v72]);
      if ( v60 )
      {
        if ( sub_B69CC(a1, (int)&word_1B5258, 1) <= 0 || v60[1] == 258 && sub_B69CC(a1, (int)"-", 1) <= 0 )
          goto LABEL_137;
        v61 = *v60;
        if ( *v60 > 0 )
        {
          v62 = 0;
          while ( 1 )
          {
            v63 = *(unsigned __int8 *)(v60[2] + v62++);
            if ( sub_B550C(a1, (unsigned __int8 *)"%02X", v63) <= 0 )
              break;
            v61 = *v60;
            if ( *v60 <= v62 )
              goto LABEL_141;
          }
LABEL_137:
          v8 = 0;
          v21 = (int)v60;
          v20 = v75;
          v22 = 0;
          v23 = 0;
          goto LABEL_13;
        }
LABEL_141:
        if ( !v61 && sub_B69CC(a1, (int)"00", 2) <= 0 )
          goto LABEL_137;
        v26 = 0;
      }
      else
      {
        if ( sub_B6C30(a1, (int)":BAD INTEGER") <= 0 )
          goto LABEL_137;
        v26 = 1;
      }
      ASN1_INTEGER_free((int)v60);
    }
    else
    {
      if ( v73 != 10 )
      {
        v29 = a7 <= 0;
        if ( a7 )
          v29 = v72 <= 0;
        if ( !v29 )
        {
          if ( sub_B69CC(a1, (int)"\n", 1) <= 0 )
            goto LABEL_12;
          if ( a7 == -1 )
          {
            v30 = v72;
            goto LABEL_49;
          }
          v31 = a7;
          v30 = v72;
          if ( a7 > v72 )
LABEL_49:
            v31 = v30;
          if ( sub_12F2E8(a1, v70, v31, 6) <= 0 )
            goto LABEL_12;
LABEL_56:
          v33 = v72;
          v70 += v72;
          if ( !v73 )
          {
            v8 = v74;
            if ( !v74 )
            {
              v20 = v75;
              v21 = 0;
              v22 = 0;
              v23 = 2;
              goto LABEL_13;
            }
          }
          goto LABEL_58;
        }
LABEL_55:
        if ( sub_B69CC(a1, (int)"\n", 1) <= 0 )
          goto LABEL_12;
        goto LABEL_56;
      }
      v71 = (char *)v9;
      v22 = (int *)sub_B20B0(0, (void **)&v71, (int)&v15[v72]);
      if ( v22 )
      {
        if ( sub_B69CC(a1, (int)&word_1B5258, 1) <= 0 || v22[1] == 266 && sub_B69CC(a1, (int)"-", 1) <= 0 )
          goto LABEL_95;
        v21 = *v22;
        if ( *v22 > 0 )
        {
          v44 = 0;
          while ( 1 )
          {
            v45 = *(unsigned __int8 *)(v22[2] + v44++);
            if ( sub_B550C(a1, (unsigned __int8 *)"%02X", v45) <= 0 )
              break;
            v21 = *v22;
            if ( *v22 <= v44 )
              goto LABEL_146;
          }
LABEL_95:
          v21 = 0;
          v8 = (int)v22;
          v20 = v75;
          v22 = 0;
          v23 = 0;
          goto LABEL_13;
        }
LABEL_146:
        if ( !v21 && sub_B69CC(a1, (int)"00", 2) <= 0 )
        {
          v8 = (int)v22;
          v20 = v75;
          v22 = 0;
          v23 = 0;
          goto LABEL_13;
        }
        v26 = 0;
      }
      else
      {
        if ( sub_B6C30(a1, (int)":BAD ENUMERATED") <= 0 )
        {
          v8 = 0;
          v20 = v75;
          v21 = 0;
          v23 = 0;
          goto LABEL_13;
        }
        v26 = 1;
      }
      j_ASN1_STRING_free_1((int)v22);
    }
LABEL_100:
    if ( !v26 )
      goto LABEL_55;
LABEL_101:
    if ( sub_B6C30(a1, (int)":[") <= 0 )
      goto LABEL_12;
    if ( v72 > 0 )
    {
      v46 = 0;
      v47 = v68 - 1;
      while ( 1 )
      {
        v48 = *++v47;
        ++v46;
        if ( sub_B550C(a1, (unsigned __int8 *)"%02X", v48) <= 0 )
          break;
        if ( v72 <= v46 )
          goto LABEL_106;
      }
LABEL_12:
      v20 = v75;
      v8 = 0;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      goto LABEL_13;
    }
LABEL_106:
    if ( sub_B6C30(a1, (int)"]") <= 0 )
      goto LABEL_12;
    goto LABEL_55;
  }
  v71 = (char *)v9;
  v50 = (int *)sub_B2038(0, (void **)&v71, (int)&v15[v72]);
  v22 = v50;
  if ( !v50 || (v51 = *v50, *v50 <= 0) )
  {
LABEL_140:
    j_ASN1_STRING_free(v22);
    goto LABEL_55;
  }
  v71 = (char *)v50[2];
  v52 = v71;
  v53 = &v71[v51];
  while ( 2 )
  {
    v55 = (unsigned __int8)*v52++;
    v54 = v55;
    v56 = v55 & 0xFB;
    v57 = v55 <= 0x1F;
    if ( v55 == 10 )
      v57 = 0;
    if ( v57 )
    {
      if ( v56 != 9 )
        goto LABEL_122;
LABEL_117:
      if ( v52 == v53 )
      {
        if ( sub_B69CC(a1, (int)&word_1B5258, 1) <= 0 || sub_B69CC(a1, (int)v71, *v22) <= 0 )
          goto LABEL_128;
        goto LABEL_140;
      }
      continue;
    }
    break;
  }
  if ( v54 <= 0x7E )
    goto LABEL_117;
LABEL_122:
  if ( a7 )
  {
    if ( sub_B69CC(a1, (int)"\n", 1) <= 0 )
      goto LABEL_128;
    v64 = *v22;
    if ( a7 != -1 && v64 >= a7 )
      v64 = a7;
    if ( sub_12F2E8(a1, v71, v64, 6) <= 0 )
    {
LABEL_128:
      v8 = 0;
      v20 = v75;
      v21 = 0;
      v23 = 0;
      goto LABEL_13;
    }
    j_ASN1_STRING_free(v22);
    goto LABEL_56;
  }
  if ( sub_B69CC(a1, (int)"[HEX DUMP]:", 11) > 0 )
  {
    if ( *v22 <= 0 )
      goto LABEL_140;
    v58 = 0;
    while ( 1 )
    {
      v59 = (unsigned __int8)v71[v58++];
      if ( sub_B550C(a1, (unsigned __int8 *)"%02X", v59) <= 0 )
        goto LABEL_128;
      if ( *v22 <= v58 )
        goto LABEL_140;
    }
  }
  v8 = 0;
  v20 = v75;
  v21 = 0;
  v23 = 0;
LABEL_13:
  ASN1_OBJECT_free(v20);
  j_ASN1_STRING_free(v22);
  ASN1_INTEGER_free(v21);
  j_ASN1_STRING_free_1(v8);
  *a2 = v70;
  return v23;
}
