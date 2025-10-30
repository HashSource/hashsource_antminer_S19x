int __fastcall sub_7C85C(_DWORD *a1, int a2, _DWORD *a3, void *a4, size_t n, int a6, size_t *a7)
{
  bool v9; // cc
  _BOOL4 v10; // r2
  _BOOL4 v11; // r3
  int v12; // r0
  int v13; // r7
  _DWORD *v14; // r9
  _DWORD *v15; // lr
  int v16; // r1
  int *v17; // r3
  int v18; // r10
  int v19; // r12
  int v20; // r0
  int v21; // r12
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r2
  int v27; // r3
  bool v28; // zf
  int v29; // r1
  int v30; // r6
  int v31; // r0
  int v32; // r3
  int v33; // r1
  int v34; // r4
  int v35; // r1
  int v36; // r1
  int v37; // r7
  int v38; // r0
  int v39; // r3
  int v41; // r7
  int v42; // r9
  void (__fastcall *v43)(_DWORD, _DWORD); // r10
  void (__fastcall *v44)(_DWORD, _DWORD, _DWORD); // r3
  int v45; // r3
  int v46; // r3
  int v47; // r0
  _BOOL4 v48; // r3
  int v49; // r3
  int v50; // r3
  size_t v51; // r5
  size_t v52; // r3
  size_t v53; // r2
  int v54; // r3
  int v55; // r2
  int v56; // r3
  int v57; // r1
  int v58; // r0
  _BOOL4 v59; // [sp+18h] [bp-44h]
  void (__fastcall *v60)(_DWORD, _DWORD, _DWORD); // [sp+1Ch] [bp-40h]
  _BYTE s[48]; // [sp+2Ch] [bp-30h] BYREF

  if ( !a1[409] && !sub_7F140(a1) )
    return -1;
  v9 = a2 != 0;
  if ( a2 )
    v9 = (unsigned int)(a2 - 22) > 1;
  if ( v9 || (a6 ? (v10 = a2 != 23) : (v10 = 0), v10) )
  {
    v49 = 362;
LABEL_92:
    sub_95494(a1, 80, 258, 68, "ssl/record/rec_layer_d1.c", v49);
    return -1;
  }
  if ( !sub_95DA0(a1) && sub_95448(a1) )
  {
    v31 = ((int (__fastcall *)(_DWORD *))a1[6])(a1);
    if ( v31 < 0 )
      return v31;
    if ( !v31 )
      return -1;
  }
  v11 = a2 == 22;
  if ( !a3 )
    v11 = 0;
  v59 = v11;
  v60 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          a1[5] = 1;
          if ( sub_9544C(a1) )
          {
            if ( !a1[576] )
            {
              v12 = sub_A874C(*(_DWORD *)(a1[974] + 48));
              v13 = v12;
              if ( v12 )
                break;
            }
          }
          if ( sub_A728C(a1) <= 0 )
            goto LABEL_21;
        }
        v14 = *(_DWORD **)(v12 + 8);
        sub_7EFB8(a1 + 409);
        v15 = a1 + 574;
        v16 = v14[1];
        v17 = v14 + 7;
        a1[958] = *v14;
        a1[959] = v16;
        v18 = v14[3];
        v19 = v14[4];
        v20 = v14[5];
        a1[409] = v14[2];
        a1[410] = v18;
        a1[411] = v19;
        a1[412] = v20;
        a1[413] = v14[6];
        do
        {
          v21 = *v17;
          v17 += 4;
          v22 = *(v17 - 3);
          v15 += 4;
          v23 = *(v17 - 2);
          v24 = *(v17 - 1);
          *(v15 - 4) = v21;
          *(v15 - 3) = v22;
          *(v15 - 2) = v23;
          *(v15 - 1) = v24;
        }
        while ( v17 != v14 + 19 );
        v25 = *v14 + 5;
        *(_DWORD *)((char *)a1 + 3874) = *(_DWORD *)v25;
        *((_WORD *)a1 + 1939) = *(_WORD *)(v25 + 4);
        CRYPTO_free(*(_DWORD *)(v13 + 8), "ssl/record/rec_layer_d1.c", 406);
        sub_A86B0(v13);
      }
      while ( sub_A728C(a1) > 0 );
LABEL_21:
      if ( sub_95D8C(a1) )
        return -1;
      if ( a1[576] && a1[406] != 241 )
      {
        v26 = a1[575];
        if ( v26 == 21 )
          goto LABEL_26;
LABEL_25:
        a1[973] = 0;
        goto LABEL_26;
      }
      a1[407] = 0;
      v35 = sub_8105C(a1);
      if ( v35 > 0 )
        break;
      v31 = sub_9A868(a1, v35);
      if ( v31 <= 0 )
        return v31;
    }
    v26 = a1[575];
    a1[407] = 1;
    if ( v26 != 21 && a1[576] )
      goto LABEL_25;
LABEL_26:
    v27 = *(_DWORD *)(a1[31] + 220);
    v28 = v27 == 0;
    if ( v27 )
      v28 = v26 == 22;
    if ( !v28 )
    {
      if ( sub_7C644(a1, a1[974] + 44, (int)(a1 + 584)) < 0 )
        return -1;
      goto LABEL_32;
    }
    v29 = a1[10];
    v30 = v29 & 2;
    if ( (v29 & 2) != 0 )
    {
      a1[576] = 0;
      a1[582] = 1;
      a1[5] = 1;
      return 0;
    }
    if ( a2 == v26 )
      break;
    if ( v26 == 20 )
    {
      if ( v59 )
        break;
      if ( (v29 & 1) != 0 )
      {
LABEL_108:
        a1[5] = 1;
        a1[582] = 1;
        a1[576] = 0;
        return v30;
      }
      a1[576] = 0;
      a1[582] = 1;
    }
    else if ( v26 == 21 )
    {
      v36 = a1[576];
      v37 = a1[579];
      v38 = a1[578];
      v39 = v37 + v38;
      if ( v36 <= 0
        || (v41 = *(unsigned __int8 *)(v37 + v38), v36 == 1)
        || (v42 = *(unsigned __int8 *)(v39 + 1), v36 != 2) )
      {
        sub_95494(a1, 10, 258, 205, "ssl/record/rec_layer_d1.c", 561);
        return -1;
      }
      v43 = (void (__fastcall *)(_DWORD, _DWORD))a1[33];
      if ( v43 )
        v43(0, *a1);
      v44 = (void (__fastcall *)(_DWORD, _DWORD, _DWORD))a1[301];
      if ( v44 || (v44 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(a1[308] + 160)) != 0 || (v44 = v60) != 0 )
      {
        v60 = v44;
        v44(a1, 16388, v42 | (v41 << 8));
      }
      if ( v41 != 1 )
      {
        if ( v41 == 2 )
        {
          v55 = a1[31];
          a1[5] = 1;
          *(_DWORD *)(v55 + 228) = v42;
          sub_95494(a1, -1, 258, v42 + 1000, "ssl/record/rec_layer_d1.c", 615);
          sub_B5560(s, 16, "%d", v42);
          sub_D1240(2, "SSL alert number ", s);
          v56 = a1[10];
          a1[582] = 1;
          v57 = a1[285];
          v58 = a1[376];
          a1[10] = v56 | 2;
          sub_8DB08(v58, v57);
        }
        else
        {
          v30 = -1;
          sub_95494(a1, 47, 258, 246, "ssl/record/rec_layer_d1.c", 624);
        }
        return v30;
      }
      v45 = a1[973] + 1;
      *(_DWORD *)(a1[31] + 224) = v42;
      a1[973] = v45;
      a1[582] = 1;
      if ( v45 == 5 )
      {
        sub_95494(a1, 10, 258, 409, "ssl/record/rec_layer_d1.c", 586);
        return -1;
      }
      if ( !v42 )
      {
        a1[10] |= 2u;
        return v30;
      }
    }
    else
    {
      if ( (v29 & 1) != 0 )
        goto LABEL_108;
      if ( v26 != 22 )
        goto LABEL_94;
      if ( sub_95DA0(a1) )
      {
        v26 = a1[575];
LABEL_94:
        if ( v26 < 20 )
          goto LABEL_113;
        if ( v26 > 22 )
        {
          if ( v26 == 23 )
          {
            v50 = a1[31];
            if ( *(_DWORD *)(v50 + 252) && *(_DWORD *)(v50 + 244) && sub_95E70(a1) )
            {
              v30 = -1;
              *(_DWORD *)(a1[31] + 252) = 2;
              return v30;
            }
            v54 = 774;
            goto LABEL_114;
          }
LABEL_113:
          v54 = 746;
LABEL_114:
          sub_95494(a1, 10, 258, 245, "ssl/record/rec_layer_d1.c", v54);
          return -1;
        }
        sub_95494(a1, 10, 258, 68, "ssl/record/rec_layer_d1.c", 757);
        return -1;
      }
      if ( a1[583] == *(unsigned __int16 *)a1[974] && a1[576] > 0xBu )
      {
        sub_9ABF0(a1[579], s);
        if ( s[0] == 20 )
        {
          if ( sub_A7204(a1) < 0 || sub_9AB60(a1) <= 0 && sub_95D8C(a1) )
            return -1;
          v46 = a1[316];
          a1[582] = 1;
          a1[576] = 0;
          if ( (v46 & 4) == 0 )
            goto LABEL_47;
        }
        else
        {
          if ( !sub_9544C(a1) )
          {
            v49 = 709;
            goto LABEL_92;
          }
          sub_95D9C(a1, 1);
          v31 = ((int (__fastcall *)(_DWORD *))a1[6])(a1);
          if ( v31 < 0 )
            return v31;
          if ( !v31 )
            return -1;
          v32 = a1[316];
          v33 = v32 << 29;
          if ( (v32 & 4) == 0 )
          {
LABEL_47:
            if ( !a1[413] )
            {
              a1[5] = 3;
              v30 = -1;
              v34 = sub_882E0(a1, v33);
              sub_B66FC(v34, 15);
              sub_B6710(v34, 9);
              return v30;
            }
          }
        }
      }
      else
      {
LABEL_32:
        a1[582] = 1;
        a1[576] = 0;
      }
    }
  }
  v47 = sub_95448(a1);
  v48 = a2 == 23;
  if ( !v47 )
    v48 = 0;
  if ( v48 && !a1[243] )
  {
    sub_95494(a1, 10, 258, 100, "ssl/record/rec_layer_d1.c", 492);
    return -1;
  }
  if ( a3 )
    *a3 = a1[575];
  if ( n )
  {
    v51 = a1[576];
    if ( v51 >= n )
      v51 = n;
    memcpy(a4, (const void *)(a1[579] + a1[578]), v51);
    if ( a6 )
    {
      if ( !a1[576] )
        a1[582] = 1;
    }
    else
    {
      v52 = a1[576] - v51;
      v53 = a1[578] + v51;
      a1[576] = v52;
      a1[578] = v53;
      if ( !v52 )
      {
        a1[406] = 240;
        a1[582] = 1;
        a1[578] = 0;
      }
    }
    v30 = 1;
    *a7 = v51;
  }
  else if ( !a1[576] )
  {
    a1[582] = 1;
  }
  return v30;
}
