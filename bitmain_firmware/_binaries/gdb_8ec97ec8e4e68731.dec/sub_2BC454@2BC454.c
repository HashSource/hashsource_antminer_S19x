int __fastcall sub_2BC454(
        int a1,
        int *a2,
        _DWORD *a3,
        unsigned int *a4,
        char a5,
        int *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // r4
  _DWORD *v12; // r6
  int result; // r0
  _BOOL4 v17; // r11
  int v18; // r0
  unsigned int v19; // r1
  unsigned int v20; // r9
  int v21; // r8
  _BOOL4 v22; // r10
  int v23; // r2
  int v24; // r3
  int v25; // r0
  int v26; // r1
  int v27; // r1
  _BOOL4 v28; // r3
  int v29; // r8
  int v30; // r5
  int v31; // r2
  _BOOL4 v32; // r3
  bool v33; // zf
  bool v34; // zf
  unsigned int v35; // r5
  bool v36; // cc
  unsigned int v37; // r8
  _BOOL4 v38; // r1
  int v39; // r1
  int v40; // r1
  int v41; // r3
  int v42; // r2
  int v43; // r0
  int v44; // r0
  int *v45; // r1
  int v46; // r1
  int v47; // r3
  int v48; // r1
  _BOOL4 v49; // [sp+0h] [bp-1Ch]
  _BOOL4 v51; // [sp+8h] [bp-14h]
  int v52; // [sp+Ch] [bp-10h]
  int v53; // [sp+10h] [bp-Ch]
  int v54; // [sp+14h] [bp-8h]

  v11 = *a6;
  if ( *a6 == 2 )
    return 0;
  v12 = *(_DWORD **)(a1 + 28);
  if ( v12[11] != 4 )
    return 0;
  v17 = sub_2B640C(v12 + 311);
  v51 = sub_2B6484(v12 + 311);
  v49 = sub_2B650C(v12[311]);
  v18 = sub_2EF5B0(v12[311], 0, 6);
  v19 = *a4;
  v52 = v18;
  v20 = (unsigned __int8)*a4;
  v21 = a2[14] + *a3 + *(_DWORD *)(a2[15] + 28);
  if ( v17 )
  {
    v22 = (unsigned __int8)v19 == 10;
    v23 = (unsigned __int8)v19 == 30;
    v24 = v22 | v23;
    if ( (unsigned __int8)v19 == 51 )
      v43 = 1;
    else
      v43 = v22 | v23;
    if ( v43 )
    {
      if ( !v11 )
        v11 = 1;
    }
    else
    {
      v24 = 0;
    }
  }
  else
  {
    v22 = (unsigned __int8)v19 == 10;
    v23 = (unsigned __int8)v19 == 30;
    v24 = v22 | v23;
  }
  if ( (((unsigned __int8)v19 - 91) & 0xFFFFFFFD) == 0 || (v25 = v12[57]) == 0 && !v12[64] )
  {
LABEL_42:
    if ( a5 == 10 )
    {
      v53 = v23;
      v54 = v24;
      sub_2A6BBC("elf32-arm.c", 3974);
      v23 = v53;
      v24 = v54;
    }
    v33 = v24 == 0;
    if ( v24 )
      v24 = 0;
    v29 = a8 - v21;
    v30 = v29;
    if ( !v33 )
      goto LABEL_25;
LABEL_48:
    v34 = v20 == 51;
    if ( v20 != 51 )
      v34 = v20 == 93;
    if ( v34 )
      goto LABEL_25;
    v35 = v20 - 27;
    v36 = v20 > 0x5B;
    if ( v20 != 91 )
      v36 = v35 > 2;
    if ( v36 )
      return 0;
    if ( a2[5] < 0 )
      sub_2A6A5C(
        "%B(%A): warning: long branch veneers used in section with SHF_ARM_PURECODE section attribute is only supported f"
        "or M-profile targets that implement the movw instruction.",
        a10,
        a2);
    v37 = v29 + 33554424;
    if ( v11 != 1 )
    {
      if ( v37 >= 0x3FFFFFD )
      {
        if ( *(_BYTE *)a1 & 1 | v12[102] )
        {
          if ( v20 == 91 )
          {
            result = 13;
          }
          else if ( v12[107] )
          {
            result = 16;
          }
          else
          {
            result = 7;
          }
        }
        else if ( v12[107] )
        {
          result = 15;
        }
        else
        {
          result = 1;
        }
        goto LABEL_64;
      }
      return 0;
    }
    if ( a9 )
    {
      v46 = *(_DWORD *)(a9 + 148);
      if ( v46 )
      {
        v47 = *(_DWORD *)(*(_DWORD *)(v46 + 160) + 32);
        if ( (v47 & 0xFF000000) <= 0x3FFFFFF && (v47 & 4) == 0 && (*(_DWORD *)(v46 + 40) & 0x20000) == 0 )
          sub_2A6A5C(
            "%B(%s): warning: interworking not enabled.\n  first occurrence: %B: ARM call to Thumb",
            v46,
            a11,
            a10);
      }
    }
    if ( v37 <= 0x3FFFFFE )
    {
      if ( v20 == 28 )
      {
        if ( !v12[97] )
        {
          if ( *(_BYTE *)a1 & 1 | v12[102] )
            result = 10;
          else
            result = 2;
          goto LABEL_64;
        }
        return 0;
      }
      if ( (v35 & 0xFFFFFFFD) != 0 )
        return 0;
    }
    v48 = v12[97];
    if ( *(_BYTE *)a1 & 1 | v12[102] )
    {
      if ( !v48 )
      {
        result = 10;
        goto LABEL_64;
      }
      goto LABEL_110;
    }
    if ( !v48 )
    {
      result = 2;
      goto LABEL_64;
    }
LABEL_145:
    v11 = 1;
    result = 1;
    goto LABEL_64;
  }
  if ( !a7 )
  {
    v44 = *(_DWORD *)(*(_DWORD *)(a10 + 160) + 2360);
    if ( !v44 )
      goto LABEL_42;
    v45 = *(int **)(v44 + 4 * (v19 >> 8));
    if ( !v45 )
      goto LABEL_42;
    v26 = *v45;
    if ( v26 == -1 )
      goto LABEL_42;
    goto LABEL_11;
  }
  v26 = *(_DWORD *)(a7 + 40);
  if ( v26 == -1 )
    goto LABEL_42;
  if ( (*(_BYTE *)(a7 + 93) & 1) != 0 )
LABEL_11:
    v25 = v12[64];
  if ( !v25 )
    goto LABEL_42;
  v27 = v26 + *(_DWORD *)(v25 + 56) + *(_DWORD *)(*(_DWORD *)(v25 + 60) + 28);
  if ( !v24 )
  {
    v29 = v27 - v21;
    v11 = 0;
    v30 = v29;
    v24 = 1;
    goto LABEL_48;
  }
  if ( v12[97] && (v17 ? (v28 = 0) : (v28 = v22), v28) )
  {
    v11 = 0;
  }
  else
  {
    if ( !v17 )
      v27 -= 4;
    v11 = 1;
  }
  v29 = v27 - v21;
  v24 = 1;
  v30 = v29;
LABEL_25:
  if ( v49 )
  {
    if ( (unsigned int)(v29 + 16777212) > 0x1FFFFFE )
      goto LABEL_27;
  }
  else if ( (unsigned int)(v29 + 4194300) > 0x7FFFFE )
  {
    goto LABEL_27;
  }
  if ( !v51 )
    goto LABEL_76;
  v38 = v29 + 1048572 > (unsigned int)&loc_1FFFFC + 2;
  if ( v20 != 51 )
    v38 = 0;
  if ( !v38 )
  {
LABEL_76:
    if ( v11 )
      return 0;
    v39 = v20 == 93 ? v22 | 1 : v22;
    if ( !v39 || v12[97] )
    {
      if ( v20 == 51 )
        v23 |= 1u;
      if ( !v23 )
        return 0;
    }
    if ( v24 )
      return 0;
    v31 = a2[5];
    goto LABEL_78;
  }
LABEL_27:
  if ( v11 != 1 )
    v24 = 0;
  v31 = a2[5];
  if ( !v24 )
  {
    if ( v11 != 1 )
      goto LABEL_78;
    if ( v17 )
      goto LABEL_32;
    if ( v31 < 0 )
      sub_2A6A5C(
        "%B(%A): warning: long branch veneers used in section with SHF_ARM_PURECODE section attribute is only supported f"
        "or M-profile targets that implement the movw instruction.",
        a10,
        a2);
    if ( !v12[97] )
      v22 = 0;
    if ( *(_BYTE *)a1 & 1 | v12[102] )
    {
      if ( !v22 )
      {
        result = 9;
        goto LABEL_64;
      }
LABEL_110:
      v11 = 1;
      result = 8;
      goto LABEL_64;
    }
    if ( !v22 )
    {
      result = 4;
      goto LABEL_64;
    }
    goto LABEL_145;
  }
  if ( !v17 )
  {
    v30 = v29 + 4;
    v11 = 0;
LABEL_78:
    if ( v31 < 0 )
      sub_2A6A5C(
        "%B(%A): warning: long branch veneers used in section with SHF_ARM_PURECODE section attribute is only supported f"
        "or M-profile targets that implement the movw instruction.",
        a10,
        a2);
    if ( a9 )
    {
      v40 = *(_DWORD *)(a9 + 148);
      if ( v40 )
      {
        v41 = *(_DWORD *)(*(_DWORD *)(v40 + 160) + 32);
        if ( (v41 & 0xFF000000) <= 0x3FFFFFF && (v41 & 4) == 0 && (*(_DWORD *)(v40 + 40) & 0x20000) == 0 )
          sub_2A6A5C(
            "%B(%s): warning: interworking not enabled.\n  first occurrence: %B: Thumb call to ARM",
            v40,
            a11,
            a10);
      }
    }
    v42 = v12[97];
    if ( *(_BYTE *)a1 & 1 | v12[102] )
    {
      if ( v20 == 93 )
      {
        if ( v42 )
          result = 13;
        else
          result = 14;
      }
      else
      {
        if ( !v42 )
          v22 = 0;
        if ( v22 )
          result = 7;
        else
          result = 11;
      }
    }
    else
    {
      if ( !v42 )
        v22 = 0;
      if ( v22 )
      {
        result = 1;
      }
      else if ( (unsigned int)(v30 + 4194300) > 0x7FFFFE )
      {
        result = 5;
      }
      else
      {
        result = 6;
      }
    }
    goto LABEL_64;
  }
LABEL_32:
  v32 = v52 == 16;
  if ( v51 )
    v32 = 1;
  if ( !v32 )
  {
    if ( v31 < 0 )
      sub_2A6A5C(
        "%B(%A): warning: long branch veneers used in section with SHF_ARM_PURECODE section attribute is only supported f"
        "or M-profile targets that implement the movw instruction.",
        a10,
        a2);
    goto LABEL_36;
  }
  if ( v31 >= 0 )
  {
LABEL_36:
    if ( *(_BYTE *)a1 & 1 | v12[102] )
    {
      v11 = 1;
      result = 12;
    }
    else
    {
      v11 = 1;
      if ( v51 )
        result = 22;
      else
        result = 3;
    }
    goto LABEL_64;
  }
  v11 = 1;
  result = 23;
LABEL_64:
  *a6 = v11;
  return result;
}
