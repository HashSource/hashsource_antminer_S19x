int __fastcall sub_14CFF4(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // r0
  int v9; // r8
  int v10; // r0
  __int64 v11; // r0
  int v12; // r9
  int v13; // r3
  int v14; // r2
  bool v15; // zf
  int v16; // r7
  int v17; // r11
  bool v18; // zf
  int v19; // r10
  int v20; // r0
  unsigned int v21; // r3
  unsigned int v22; // r12
  int v23; // r8
  char *v24; // r2
  int v25; // r1
  int v26; // r0
  int v27; // r7
  int v28; // kr00_4
  int v29; // kr04_4
  unsigned int v31; // [sp+0h] [bp-Ch]
  unsigned int v32; // [sp+0h] [bp-Ch]
  unsigned int v33; // [sp+4h] [bp-8h]

  *a3 = sub_26EA24(*a3);
  *a4 = sub_26EA24(*a4);
  v8 = sub_26BC70(*a3);
  v9 = sub_171258(v8);
  v10 = sub_26BC70(*a4);
  v11 = sub_171258(v10);
  v12 = v11;
  if ( (**(char **)(v9 + 24) & 0xFFFFFFEF) != 9 )
  {
    LODWORD(v11) = sub_1736DC(v9);
    if ( !(_DWORD)v11 )
      return v11;
  }
  if ( (**(char **)(v12 + 24) & 0xFFFFFFEF) != 9 )
  {
    LODWORD(v11) = sub_1736DC(v12);
    if ( !(_DWORD)v11 )
      return v11;
  }
  v13 = **(char **)(v9 + 24);
  if ( v13 == 25 )
    return v11;
  v14 = **(char **)(v12 + 24);
  if ( v14 == 25 )
    return v11;
  v15 = v13 == 9;
  if ( v13 != 9 )
    v15 = v14 == 9;
  if ( v15 )
  {
    switch ( *(_DWORD *)(a1 + 8) )
    {
      case 2:
      case 3:
      case 4:
      case 9:
      case 0xB:
        return v11;
      default:
        v16 = *(_DWORD *)(v9 + 20);
        if ( 8 * v16 > (unsigned int)((int (__fastcall *)(int, _DWORD))loc_166228)(a2, HIDWORD(v11))
          || (v27 = *(_DWORD *)(v12 + 20), 8 * v27 > (unsigned int)((int (__fastcall *)(int))loc_166228)(a2)) )
        {
          LODWORD(v11) = sub_1780B4(a2);
          v17 = *(_DWORD *)(v11 + 48);
        }
        else
        {
          LODWORD(v11) = sub_1780B4(a2);
          v17 = *(_DWORD *)(v11 + 44);
        }
        goto LABEL_12;
    }
    return v11;
  }
  v18 = v14 == 21;
  if ( v14 == 21 )
    v18 = v13 == 21;
  v19 = v18;
  if ( v18 )
    return v11;
  v20 = sub_1780B4(a2);
  v17 = *(_DWORD *)(v20 + 12);
  HIDWORD(v11) = v20;
  v21 = *(_DWORD *)(v9 + 20);
  LODWORD(v11) = *(_DWORD *)(v17 + 20);
  v22 = *(_DWORD *)(v12 + 20);
  v23 = *(_BYTE *)(*(_DWORD *)(v9 + 24) + 1) & 1;
  if ( (unsigned int)v11 > v21 )
  {
    v23 = v19;
    v21 = *(_DWORD *)(v17 + 20);
    if ( (unsigned int)v11 > v22 )
      goto LABEL_28;
  }
  else if ( (unsigned int)v11 > v22 )
  {
    if ( (unsigned int)v11 < v21 )
      goto LABEL_28;
    goto LABEL_33;
  }
  v19 = *(_BYTE *)(*(_DWORD *)(v12 + 24) + 1) & 1;
  if ( v22 < v21 )
    goto LABEL_28;
  if ( v22 > v21 )
  {
    v23 = *(_BYTE *)(*(_DWORD *)(v12 + 24) + 1) & 1;
    v21 = *(_DWORD *)(v12 + 20);
    goto LABEL_28;
  }
LABEL_33:
  v23 |= v19;
LABEL_28:
  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 2:
    case 3:
    case 4:
    case 9:
      if ( (unsigned int)v11 >= v21 )
      {
        if ( !v23 )
          goto LABEL_13;
        v17 = *(_DWORD *)(HIDWORD(v11) + 32);
        goto LABEL_12;
      }
      v17 = *(_DWORD *)(HIDWORD(v11) + 16);
      if ( *(_DWORD *)(v17 + 20) >= v21 )
      {
        if ( !v23 )
          goto LABEL_13;
        goto LABEL_47;
      }
      if ( v23 )
        goto LABEL_44;
      goto LABEL_54;
    case 0xB:
      v31 = v21;
      if ( *(_DWORD *)(sub_170DDC(a1, a2, "int") + 20) < v21 )
      {
        LODWORD(v11) = sub_170DDC(a1, a2, "long");
        if ( *(_DWORD *)(v11 + 20) < v31 )
          return v11;
        v24 = "long";
        v25 = a2;
        v26 = a1;
        if ( v23 )
          goto LABEL_36;
      }
      else
      {
        v24 = "int";
        v25 = a2;
        v26 = a1;
        if ( v23 )
        {
LABEL_36:
          LODWORD(v11) = sub_170D60(v26, v25, v24);
          v17 = v11;
          goto LABEL_12;
        }
      }
      LODWORD(v11) = sub_170DDC(v26, v25, v24);
      v17 = v11;
LABEL_12:
      if ( v17 )
      {
LABEL_13:
        *a3 = sub_2647C8(v17, *a3);
        LODWORD(v11) = sub_2647C8(v17, *a4);
        *a4 = v11;
      }
      break;
    default:
      v32 = HIDWORD(v11);
      v33 = v21;
      if ( v23 )
      {
        v11 = __PAIR64__(v32, ((int (__fastcall *)(int))loc_165EE0)(a2));
        v28 = v11;
        LODWORD(v11) = v11 + ((int)v11 < 0 ? 7 : 0);
        if ( v33 <= v28 / 8 )
LABEL_47:
          v17 = *(_DWORD *)(HIDWORD(v11) + 36);
        else
LABEL_44:
          v17 = *(_DWORD *)(HIDWORD(v11) + 72);
      }
      else
      {
        v11 = __PAIR64__(v32, ((int (__fastcall *)(int))loc_165EE0)(a2));
        v29 = v11;
        LODWORD(v11) = v11 + ((int)v11 < 0 ? 7 : 0);
        if ( v33 > v29 / 8 )
LABEL_54:
          v17 = *(_DWORD *)(HIDWORD(v11) + 68);
        else
          v17 = *(_DWORD *)(v32 + 16);
      }
      goto LABEL_12;
  }
  return v11;
}
