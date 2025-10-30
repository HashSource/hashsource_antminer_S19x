void __fastcall sub_20504C(const char *a1)
{
  void **v2; // r0
  int *v3; // r4
  int *v4; // r6
  int v5; // r5
  int v6; // r3
  int *v7; // r11
  int v8; // r2
  int v9; // r0
  int v10; // r7
  bool v11; // zf
  const char *v12; // r0
  int *v13; // r2
  int v14; // r7
  int v15; // r0
  const char *v16; // r0
  int v17; // r0
  int *v18; // r0
  int v19; // r0
  int *v20; // r0
  int v21; // r1
  _BOOL4 v22; // r2
  int v23; // r7
  int v24; // r0
  int *v25; // r0
  const char *v26; // r0
  int v27; // r0
  int *v28; // r0
  int v29; // [sp+20h] [bp-44h]
  int v30; // [sp+24h] [bp-40h]
  unsigned int v31; // [sp+24h] [bp-40h]
  unsigned int v32; // [sp+24h] [bp-40h]
  unsigned int v33; // [sp+24h] [bp-40h]
  unsigned int v34; // [sp+24h] [bp-40h]
  int *v35; // [sp+28h] [bp-3Ch] BYREF
  int *v36; // [sp+2Ch] [bp-38h] BYREF
  int *v37; // [sp+30h] [bp-34h]
  _DWORD s[10]; // [sp+38h] [bp-2Ch] BYREF
  char v39; // [sp+60h] [bp-4h] BYREF

  memset(s, 0, sizeof(s));
  if ( !a1 )
  {
    v13 = &dword_4893EC;
    v3 = s;
    v4 = (int *)&v39;
    v6 = dword_487D2C;
    v7 = 0;
    if ( dword_489404 )
      s[4] = dword_489404;
    else
      v13 = (int *)dword_4893FC;
    s[1] = dword_4893EC;
    if ( !dword_489404 )
      s[4] = v13;
    v8 = dword_487D2C;
    s[0] = dword_487D2C;
    v29 = 1;
    while ( 1 )
    {
LABEL_6:
      if ( v6 != v8 )
        goto LABEL_4;
      v9 = v3[1];
      if ( !v9 )
        break;
      v10 = v3[4];
      if ( v10 > 0 )
      {
        v11 = sub_21E5C4(*v3, v3[1], v3[2], v3[3], v3[4], v3[5], v3[6], v3[7], v3[8], v3[9], &v35, &v36) == 0;
        v9 = v3[1];
        if ( !v11 )
        {
          v14 = sub_1B7250(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4));
          v15 = v3[1];
          v30 = v3[4];
          if ( v35 == v36 )
          {
            v26 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v15);
            sub_259F10("Line %d of \"%s\"", v30, v26);
            sub_259B58("  ");
            v27 = sub_259F10(" is at address ");
            v34 = (unsigned int)v35;
            v28 = (int *)sub_242F8C(v27);
            sub_1C7360(v14, v34, *v28);
            sub_259B58("  ");
            sub_259F10(" but contains no code.\n");
          }
          else
          {
            v16 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v15);
            sub_259F10("Line %d of \"%s\"", v30, v16);
            sub_259B58("  ");
            v17 = sub_259F10(" starts at address ");
            v31 = (unsigned int)v35;
            v18 = (int *)sub_242F8C(v17);
            sub_1C7360(v14, v31, *v18);
            sub_259B58("  ");
            v19 = sub_259F10(" and ends at ");
            v32 = (unsigned int)v36;
            v20 = (int *)sub_242F8C(v19);
            sub_1C7360(v14, v32, *v20);
            sub_259F10(".\n");
          }
          sub_1C6E7C(v14, (int)v35);
          v21 = v3[4];
          v22 = v29 == 1;
          if ( !dword_48968C )
            v22 = 0;
          dword_489404 = v21 + 1;
          if ( v22 )
            sub_204F60(v3[1], v21, 0, (int)v35);
LABEL_4:
          v3 += 10;
          if ( v4 == v3 )
            goto LABEL_13;
          goto LABEL_5;
        }
        v10 = v3[4];
      }
      v12 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v9);
      sub_259F10("Line number %d is out of range for \"%s\".\n", v10, v12);
      v3 += 10;
      if ( v4 == v3 )
        goto LABEL_13;
LABEL_5:
      v6 = *v3;
      v8 = dword_487D2C;
    }
    v23 = sub_B894C(0);
    sub_259F10("No line number information available");
    if ( v3[5] )
    {
      sub_259F10(" for address ");
      v24 = sub_259B58("  ");
      v33 = v3[5];
      v25 = (int *)sub_242F8C(v24);
      sub_1C7360(v23, v33, *v25);
    }
    else
    {
      sub_259F10(".");
    }
    sub_259F10((const char *)&word_356638);
    goto LABEL_4;
  }
  v2 = sub_19BAC0((void **)&v36, a1, 2u);
  v3 = v36;
  v4 = v37;
  v5 = (char *)v37 - (char *)v36;
  sub_243C34(v2);
  if ( v3 != v4 )
  {
    v6 = *v3;
    v7 = v3;
    v29 = -858993459 * (v5 >> 3);
    v8 = dword_487D2C;
    goto LABEL_6;
  }
  v7 = v3;
LABEL_13:
  if ( v7 )
    sub_339E64(v7);
}
