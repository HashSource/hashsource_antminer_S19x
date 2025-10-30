int __fastcall sub_B3048(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r10
  int v9; // r5
  int v11; // r8
  int v12; // r11
  int v13; // r4
  int v14; // r0
  char *v15; // r0
  int v16; // r6
  int v17; // r0
  int v18; // r3
  __int64 v19; // r0
  int v20; // r0
  int v21; // r7
  int v22; // r11
  _BYTE *v23; // r5
  int v24; // r1
  unsigned int v25; // r3
  int v26; // r0
  int v28; // r2
  int v29; // r1
  int v30; // r1
  int v32; // [sp+14h] [bp-30h]
  int v33; // [sp+18h] [bp-2Ch]
  int v34; // [sp+1Ch] [bp-28h]
  int v35; // [sp+2Ch] [bp-18h] BYREF
  __int64 v36; // [sp+30h] [bp-14h] BYREF
  __int64 v37; // [sp+38h] [bp-Ch] BYREF

  v8 = a1;
  if ( a3 <= a4 )
  {
    v11 = a3;
    v12 = a4 + 1;
    v9 = 0;
    while ( 1 )
    {
      sub_258BD4(a1);
      a1 = sub_A1938(v8, v11);
      if ( a1 )
        goto LABEL_5;
      a1 = sub_A2CAC(v8, v11);
      if ( a1 )
        goto LABEL_5;
      v13 = 24 * v11;
      if ( !sub_A0274(v8, v11) )
        break;
      v14 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + v13 + 12);
      a1 = sub_B3048(v14, v8, 0, *(__int16 *)(*(_DWORD *)(v14 + 24) + 4) - 1, a5, a6, a7, a8);
      v9 += a1;
LABEL_5:
      if ( ++v11 == v12 )
        return v9;
    }
    v32 = a7 + 4;
    if ( !sub_A0328(v8, v11) )
    {
      ++v9;
      sub_25A418(a5, "\n%*s", v32, "");
      v19 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + v13 + 12);
      sub_B232C(v19, (char *)HIDWORD(v19), a5, a6 - 1, v32, a8);
      a1 = sub_25A418(a5, ";");
      goto LABEL_5;
    }
    v15 = sub_A0410(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + v13 + 12));
    sub_25A418(a5, "\n%*scase %s is", a7 + 4, "", v15);
    v16 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + v13 + 12);
    v17 = sub_A2DCC(v16, a2);
    v18 = *(_DWORD *)(v16 + 24);
    v33 = v17;
    if ( *(_BYTE *)v18 == 1 )
    {
      v16 = *(_DWORD *)(v18 + 20);
      if ( !v16 || **(_BYTE **)(v16 + 24) != 4 )
        goto LABEL_14;
    }
    v20 = sub_A0E38(v16, "___XVU");
    if ( v20 )
      v16 = v20;
    if ( *(__int16 *)(*(_DWORD *)(v16 + 24) + 4) <= 0 )
    {
LABEL_14:
      a1 = sub_25A418(a5, "\n%*send case;", v32, "");
      v9 = 1;
      goto LABEL_5;
    }
    v21 = 0;
    v34 = v12;
    v22 = a7 + 8;
    while ( 1 )
    {
      sub_25A418(a5, "\n%*swhen ", v22, "");
      v23 = *(_BYTE **)(*(_DWORD *)(*(_DWORD *)(v16 + 24) + 24) + 24 * v21 + 16);
      if ( *v23 != 86 )
        break;
      if ( sub_A05D4(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v16 + 24) + 24) + 24 * v21 + 16), 1, 0, &v35) )
      {
        v24 = v35;
        goto LABEL_23;
      }
LABEL_37:
      sub_25A418(a5, "?? =>", v28);
      sub_B3048(v16, a2, v21, v21, a5, a6, v22, a8);
LABEL_38:
      if ( *(__int16 *)(*(_DWORD *)(v16 + 24) + 4) <= ++v21 )
      {
        v12 = v34;
        goto LABEL_14;
      }
    }
    v24 = 0;
    v35 = 0;
LABEL_23:
    v28 = 0;
LABEL_24:
    v25 = (unsigned __int8)v23[v24];
    while ( v25 <= 0x53 )
    {
      if ( v25 < 0x52 )
      {
        if ( !v25 )
          goto LABEL_40;
        if ( v25 != 79 )
          goto LABEL_37;
      }
      if ( v28 )
      {
        sub_25A418(a5, " | ");
        v24 = v35;
        v25 = (unsigned __int8)v23[v35];
      }
      v28 = 1;
      switch ( v25 )
      {
        case 'R':
          if ( sub_A05D4((int)v23, v24 + 1, &v36, &v35) && v23[v35] == 84 && sub_A05D4((int)v23, v35 + 1, &v37, &v35) )
          {
            sub_B3E5C(v33, v30, v36, HIDWORD(v36), a5);
            sub_25A418(a5, " .. ");
LABEL_45:
            sub_B3E5C(v33, v29, v37, HIDWORD(v37), a5);
            v24 = v35;
LABEL_35:
            v28 = 1;
            goto LABEL_24;
          }
          goto LABEL_37;
        case 'S':
          if ( sub_A05D4((int)v23, v24 + 1, &v37, &v35) )
            goto LABEL_45;
          goto LABEL_37;
        case 'O':
          sub_25A418(a5, "others", 1);
          v24 = ++v35;
          goto LABEL_35;
      }
    }
    if ( v25 != 95 )
      goto LABEL_37;
LABEL_40:
    sub_25A418(a5, " =>", v28);
    v26 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v16 + 24) + 24) + 24 * v21 + 12);
    if ( sub_B3048(v26, a2, 0, *(__int16 *)(*(_DWORD *)(v26 + 24) + 4) - 1, a5, a6, v22, a8) <= 0 )
      sub_25A418(a5, " null;");
    goto LABEL_38;
  }
  return *(unsigned __int8 *)(*(_DWORD *)(a1 + 24) + 1) << 29 >> 31;
}
