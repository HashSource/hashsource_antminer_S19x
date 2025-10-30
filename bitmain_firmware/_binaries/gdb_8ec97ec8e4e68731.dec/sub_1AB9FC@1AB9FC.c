int __fastcall sub_1AB9FC(int a1, int a2, int *a3, int a4, _DWORD *a5, int a6, const char *a7)
{
  int v8; // r12
  int v12; // r1
  int v13; // r9
  int v14; // r0
  int v15; // r7
  unsigned int v16; // r12
  int v17; // r10
  int v18; // r5
  char v19; // r3
  int v20; // r2
  int v21; // r1
  int v22; // r2
  int v24; // r0
  int v25; // r0
  int v26; // r2
  int v27; // r1
  int v28; // r0
  int v29; // r12
  _DWORD *v30; // r2
  bool v31; // zf
  char v32; // r2
  int v33; // r2
  int v34; // r3
  int v35; // r2
  int v36; // r2
  int v37; // r2
  int v38; // r0
  unsigned int v39; // [sp+1Ch] [bp-18h] BYREF
  _BYTE v40[4]; // [sp+20h] [bp-14h] BYREF
  int v41; // [sp+24h] [bp-10h] BYREF
  unsigned int v42; // [sp+2Ch] [bp-8h]

  v8 = dword_487AA8;
  *a3 = 0;
  (*(void (__fastcall **)(int, int, unsigned int *))(v8 + 76))(a6, a2, &v39);
  if ( (v39 & 0xFFF) != 0xFFF )
  {
    v12 = v39 & 0xFFF;
    v13 = 1;
    goto LABEL_4;
  }
  v24 = a2 + 4;
  if ( a6 )
  {
    v12 = sub_2AB5EC(v24);
    if ( v12 == -1 )
      goto LABEL_14;
  }
  else
  {
    v12 = sub_2AB5F8(v24);
    if ( v12 == -1 )
    {
LABEL_14:
      *a5 = "<undefined>";
      v25 = ((int (__fastcall *)(int, int, _DWORD))loc_1734E0)(dword_487ABC, a4, 0);
      v26 = *(_DWORD *)(v25 + 24);
      *a3 = v25;
      *(_BYTE *)(v26 + 1) |= 4u;
      return 2;
    }
  }
  v13 = 2;
LABEL_4:
  if ( v39 == 4095 )
  {
    *a5 = "<undefined>";
    return v13;
  }
  v14 = sub_1A721C(a1, v12);
  v15 = v14;
  v16 = v39 >> 12;
  v17 = 954437177 * ((v14 - *(_DWORD *)(dword_487AA4 + 152)) >> 3);
  if ( (signed int)(v39 >> 12) >= *(_DWORD *)(v14 + 20) )
  {
    v36 = dword_47AC88;
    *a5 = "<illegal>";
    if ( v36 > 0 )
      sub_F43B4(&off_46D334, "bad rfd entry for %s: file %d, index %d", a7, v17, v16);
    return v13;
  }
  v18 = *(_DWORD *)(dword_487AA4 + 108) + *(_DWORD *)(dword_487AA8 + 20) * (v16 + *(_DWORD *)(v14 + 16));
  (*(void (__fastcall **)(int, int, int *))(dword_487AA8 + 52))(dword_487AAC, v18, &v41);
  v19 = v42;
  v20 = v42 & 0x7C0;
  v21 = v42 & 0x3F;
  if ( v20 == 704 )
  {
    v31 = v21 == 7;
    if ( v21 != 7 )
      v31 = v21 == 10;
    v32 = !v31;
    if ( v21 == 34 )
      v32 = 0;
    if ( (unsigned int)(v21 - 26) > 2 )
      v33 = v32 & 1;
    else
      v33 = 0;
    if ( !v33 )
      goto LABEL_18;
LABEL_8:
    v22 = dword_47AC88;
    *a5 = "<illegal>";
    if ( v22 > 0 )
    {
      sub_F43B4(&off_46D334, "bad rfd entry for %s: file %d, index %d", a7, v17, v39 >> 12);
      return v13;
    }
    return v13;
  }
  if ( v21 != 7 || ((v20 - 1088) & 0xFF80) != 0 )
    goto LABEL_8;
LABEL_18:
  v27 = dword_487AA4;
  v28 = v41;
  v29 = v41 + *(_DWORD *)(v15 + 8);
  v30 = *(_DWORD **)(dword_487AB8 - 477218588 * ((v15 - *(_DWORD *)(dword_487AA4 + 152)) >> 3));
  *a5 = *(_DWORD *)(dword_487AA4 + 120) + v29;
  if ( !v30 )
  {
LABEL_35:
    v34 = v19 & 0x3F;
    if ( v28 )
    {
      if ( v34 != 34 )
      {
        if ( v34 == 10 )
        {
          v35 = sub_1AAC98(
                  v17,
                  *(_DWORD *)(v27 + 116) + 4 * *(_DWORD *)(v15 + 44),
                  v42 >> 12,
                  0,
                  *(unsigned __int8 *)(v15 + 60) >> 7,
                  (const char *)(*(_DWORD *)(v27 + 120) + v29));
          *a3 = v35;
          goto LABEL_39;
        }
LABEL_38:
        v35 = ((int (__fastcall *)(int, int, _DWORD))loc_1734E0)(dword_487ABC, a4, 0);
        *a3 = v35;
LABEL_39:
        sub_1A7318(v15, v18, v35);
        return v13;
      }
    }
    else if ( v34 != 10 && v34 != 34 )
    {
      goto LABEL_38;
    }
    (*(void (__fastcall **)(int, unsigned int, _BYTE *))(dword_487AA8 + 72))(
      a6,
      *(_DWORD *)(v27 + 116) + 4 * (*(_DWORD *)(v15 + 44) + (v42 >> 12)),
      v40);
    if ( (v40[2] & 0xF) != 0 && dword_47AC88 > 0 )
      sub_F43B4(&off_46D334, "illegal tq0 in forward typedef for %s", a7);
    v37 = v40[0] >> 2;
    switch ( v37 )
    {
      case 12:
      case 13:
      case 14:
        sub_1AB9FC(
          v17,
          *(_DWORD *)(dword_487AA4 + 116) + 4 * ((v42 >> 12) + 1 + *(_DWORD *)(v15 + 44)),
          a3,
          a4,
          a5,
          *(unsigned __int8 *)(v15 + 60) >> 7,
          a7);
        break;
      case 15:
        v38 = sub_1AAC98(
                v17,
                *(_DWORD *)(dword_487AA4 + 116) + 4 * *(_DWORD *)(v15 + 44),
                v42 >> 12,
                0,
                *(unsigned __int8 *)(v15 + 60) >> 7,
                (const char *)(*(_DWORD *)(dword_487AA4 + 120) + *(_DWORD *)(v15 + 8) + v41));
        *a3 = v38;
        sub_1A7318(v15, v18, v38);
        break;
      case 26:
        *a3 = ((int (__fastcall *)(int, int, _DWORD))loc_1734E0)(dword_487ABC, a4, 0);
        *a5 = "<undefined>";
        break;
      default:
        if ( dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "illegal bt %d in forward typedef for %s", v37, a7);
        *a3 = ((int (__fastcall *)(int, int, _DWORD))loc_1734E0)(dword_487ABC, a4, 0);
        break;
    }
    return v13;
  }
  while ( v18 != v30[1] )
  {
    v30 = (_DWORD *)*v30;
    if ( !v30 )
      goto LABEL_35;
  }
  *a3 = v30[2];
  return v13;
}
