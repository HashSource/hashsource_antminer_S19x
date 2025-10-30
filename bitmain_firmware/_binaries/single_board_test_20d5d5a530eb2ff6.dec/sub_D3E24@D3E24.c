int __fastcall sub_D3E24(int a1, int a2, size_t a3, _DWORD *a4)
{
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  int v10; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  __int16 v15; // r4
  unsigned int v16; // r3
  int v17; // r4
  int v18; // r3
  int v19; // r0
  _DWORD *v20; // r3
  _DWORD *v21; // r0
  void *v22; // r0

  v8 = (_DWORD *)sub_D8934(a1);
  v9 = v8;
  switch ( a2 )
  {
    case 0:
      v8[75] = 12;
      v8[70] = 0;
      v8[71] = 0;
      v8[72] = 0;
      v8[73] = 0;
      v8[74] = 8;
      v8[76] = -1;
      return 1;
    case 8:
      v19 = sub_D8934(a4);
      v20 = (_DWORD *)v9[89];
      if ( !v20 )
        return 1;
      if ( v20 != v9 )
        return 0;
      *(_DWORD *)(v19 + 356) = v19;
      return 1;
    case 9:
      a3 = 15 - a3;
      goto LABEL_3;
    case 16:
      if ( !sub_D8924(a1) || !v9[72] || !sub_E3C40((int)(v9 + 78), a4) )
        return 0;
      v10 = 1;
      v9[72] = 0;
      v9[71] = 0;
      v9[73] = 0;
      return v10;
    case 17:
      if ( (a3 & 1) != 0 || a3 - 4 > 0xC )
        return 0;
      if ( sub_D8924(a1) )
      {
        if ( a4 )
          return 0;
      }
      else if ( a4 )
      {
        v9[72] = 1;
        v22 = (void *)sub_D8AC4(a1);
        memcpy(v22, a4, a3);
      }
      v9[75] = a3;
      return 1;
    case 18:
      if ( a3 != 4 )
        return 0;
      v21 = (_DWORD *)sub_D8AC0(a1);
      v10 = 1;
      *v21 = *a4;
      return v10;
    case 20:
LABEL_3:
      if ( a3 - 2 > 6 )
        return 0;
      v8[74] = a3;
      return 1;
    case 22:
      if ( a3 != 13 )
        return 0;
      v12 = sub_D8AC4(a1);
      v13 = a4[1];
      v14 = a4[2];
      *(_DWORD *)v12 = *a4;
      *(_DWORD *)(v12 + 4) = v13;
      *(_DWORD *)(v12 + 8) = v14;
      *(_BYTE *)(v12 + 12) = *((_BYTE *)a4 + 12);
      v9[76] = 13;
      v15 = *(char *)(sub_D8AC4(a1) + 11) << 8;
      v16 = (unsigned __int16)(*(unsigned __int8 *)(sub_D8AC4(a1) + 12) | v15);
      if ( v16 <= 7 )
        return 0;
      v17 = (unsigned __int16)(v16 - 8);
      if ( sub_D8924(a1) )
        goto LABEL_14;
      v18 = v9[75];
      if ( v17 < v18 )
        return 0;
      LOWORD(v17) = v17 - v18;
LABEL_14:
      *(_BYTE *)(sub_D8AC4(a1) + 11) = BYTE1(v17);
      *(_BYTE *)(sub_D8AC4(a1) + 12) = v17;
      return v9[75];
    case 37:
      *a4 = 15 - v8[74];
      return 1;
    default:
      return -1;
  }
}
