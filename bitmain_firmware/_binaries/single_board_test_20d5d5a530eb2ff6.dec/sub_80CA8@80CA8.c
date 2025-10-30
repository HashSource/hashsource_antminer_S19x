int __fastcall sub_80CA8(_DWORD *a1, int a2)
{
  unsigned int v2; // r2
  int v3; // r3
  int v4; // r8
  _DWORD *v6; // r1
  _DWORD *v8; // r5
  int v9; // r0
  int v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r6
  int (__fastcall *v13)(_DWORD *, _DWORD *, _BYTE *, _DWORD); // r11
  int v14; // r7
  int v15; // r0
  int v16; // r0
  size_t v17; // r8
  int v18; // r0
  int v19; // r0
  size_t v20; // r3
  _BYTE *v21; // r2
  _BOOL4 v22; // r10
  int v23; // r0
  int v24; // r3
  unsigned __int8 v25; // r3
  unsigned int v26; // r3
  int v28; // r3
  unsigned int v29; // [sp+8h] [bp-8Ch]
  _BYTE *v30; // [sp+8h] [bp-8Ch]
  int v31; // [sp+Ch] [bp-88h]
  _BYTE v32[64]; // [sp+10h] [bp-84h] BYREF
  _BYTE v33[68]; // [sp+50h] [bp-44h] BYREF

  v2 = a1[576];
  v3 = a1[958] + 13;
  v4 = a1[285];
  a1[580] = v3;
  if ( v2 > 0x4540 )
  {
    v14 = 0;
    sub_95494(a1, 22, 257, 150, "ssl/record/ssl3_record.c", 1647);
    return v14;
  }
  v6 = (_DWORD *)a1[31];
  a1[579] = v3;
  a1[577] = v2;
  v8 = a1 + 574;
  if ( (*v6 & 0x100) != 0 )
  {
    v9 = a1[248];
    if ( v9 )
    {
      v10 = sub_D8D8C(v9);
      v11 = sub_D8C78(v10);
      v12 = v11;
      if ( v11 > 0x40 )
      {
        v14 = 0;
        sub_95494(a1, 80, 257, 68, "ssl/record/ssl3_record.c", 1660);
        return v14;
      }
      if ( v11 > a1[577] )
      {
        sub_95494(a1, 50, 257, 160, "ssl/record/ssl3_record.c", 1665);
        return 0;
      }
      v29 = a1[576] - v11;
      v31 = a1[579];
      v13 = *(int (__fastcall **)(_DWORD *, _DWORD *, _BYTE *, _DWORD))(*(_DWORD *)(a1[1] + 100) + 4);
      a1[576] = v29;
      if ( !v13(a1, v8, v32, 0) || sub_BC33C(v32, v31 + v29, v12) )
      {
        sub_95494(a1, 20, 257, 281, "ssl/record/ssl3_record.c", 1673);
        return 0;
      }
    }
  }
  v14 = (**(int (__fastcall ***)(_DWORD *, _DWORD *, int, _DWORD))(a1[1] + 100))(a1, v8, 1, 0);
  if ( !v14 )
  {
    if ( sub_95D8C(a1) )
      return v14;
    goto LABEL_40;
  }
  if ( !v4 || (*(_DWORD *)a1[31] & 0x100) != 0 || !a1[243] || !sub_D8D8C(a1[248]) )
    goto LABEL_26;
  v15 = sub_D8D8C(a1[248]);
  v16 = sub_D8C78(v15);
  v17 = v16;
  if ( v16 < 0 )
  {
    sub_95494(a1, 80, 257, 6, "ssl/record/ssl3_record.c", 1716);
    return 0;
  }
  if ( v16 > 64 )
  {
    v28 = 1722;
LABEL_46:
    sub_95494(a1, 80, 257, 68, "ssl/record/ssl3_record.c", v28);
    return 0;
  }
  if ( (unsigned int)v16 > a1[577] || (v18 = sub_D8920(a1[243]), (sub_D8928(v18) & 0xF0007) == 2) && a1[577] < v17 + 1 )
  {
    sub_95494(a1, 50, 257, 160, "ssl/record/ssl3_record.c", 1737);
    return 0;
  }
  v19 = sub_D8920(a1[243]);
  if ( (sub_D8928(v19) & 0xF0007) != 2 )
  {
    v20 = a1[576] - v17;
    v21 = (_BYTE *)(a1[579] + v20);
    a1[576] = v20;
    v22 = v21 == 0;
    v30 = v21;
    goto LABEL_20;
  }
  if ( !sub_80004(v33, v8, v17) )
  {
    v28 = 1751;
    goto LABEL_46;
  }
  v22 = 0;
  v30 = v33;
  a1[576] -= v17;
LABEL_20:
  if ( (*(int (__fastcall **)(_DWORD *, _DWORD *, _BYTE *, _DWORD))(*(_DWORD *)(a1[1] + 100) + 4))(a1, v8, v32, 0) )
    v23 = v22;
  else
    v23 = v22 | 1;
  if ( v23 || sub_BC33C(v32, v30, v17) )
    v14 = -1;
  if ( a1[576] > v17 + 17408 )
    goto LABEL_40;
LABEL_26:
  if ( v14 < 0 )
  {
LABEL_40:
    a1[576] = 0;
    a1[959] = 0;
    return 0;
  }
  if ( !a1[250] )
  {
LABEL_30:
    v24 = a1[285];
    if ( v24 && (v25 = *(_BYTE *)(v24 + 492) - 1, v25 <= 3u) )
      v26 = 512 << v25;
    else
      v26 = 0x4000;
    if ( v26 >= a1[576] )
    {
      a1[578] = 0;
      a1[959] = 0;
      v14 = 1;
      sub_A897C(a1, a2);
      return v14;
    }
    sub_95494(a1, 22, 257, 146, "ssl/record/ssl3_record.c", 1801);
    return 0;
  }
  if ( a1[576] <= 0x4400u )
  {
    v14 = sub_7F2F8((int)a1, v8);
    if ( !v14 )
    {
      sub_95494(a1, 30, 257, 107, "ssl/record/ssl3_record.c", 1789);
      return v14;
    }
    goto LABEL_30;
  }
  sub_95494(a1, 22, 257, 140, "ssl/record/ssl3_record.c", 1784);
  return 0;
}
