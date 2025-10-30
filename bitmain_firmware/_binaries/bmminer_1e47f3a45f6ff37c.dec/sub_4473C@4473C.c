char *__fastcall sub_4473C(int *a1)
{
  size_t v2; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r2
  const char *v6; // r12
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int *v11; // r12
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r1
  int v21; // r2
  int v22; // r3
  char *result; // r0
  int v24; // r1
  int v25; // r2
  int *v26; // r7
  int *v27; // r6
  int v28; // r1
  int v29; // r2
  int v30; // r3
  bool v31; // zf
  int v32; // r1
  int v33; // r2
  int *v34; // r5
  int *v35; // r12
  int v36; // r0
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int v40; // r1
  int v41; // r2
  int v42; // [sp+4h] [bp-6Ch] BYREF
  char s[4]; // [sp+8h] [bp-68h] BYREF
  int v44; // [sp+Ch] [bp-64h]
  int v45; // [sp+10h] [bp-60h]
  int v46; // [sp+14h] [bp-5Ch]
  int v47; // [sp+18h] [bp-58h] BYREF
  int v48; // [sp+1Ch] [bp-54h]
  int v49; // [sp+20h] [bp-50h]
  int v50; // [sp+24h] [bp-4Ch]
  int v51; // [sp+28h] [bp-48h]
  int v52; // [sp+2Ch] [bp-44h]
  int v53; // [sp+30h] [bp-40h]
  int v54; // [sp+34h] [bp-3Ch]
  _DWORD v55[3]; // [sp+38h] [bp-38h] BYREF
  int v56; // [sp+44h] [bp-2Ch] BYREF
  int v57; // [sp+48h] [bp-28h]
  int v58; // [sp+4Ch] [bp-24h]
  int v59; // [sp+50h] [bp-20h]
  int v60; // [sp+54h] [bp-1Ch]
  int v61; // [sp+58h] [bp-18h]
  int v62; // [sp+5Ch] [bp-14h]
  int v63; // [sp+60h] [bp-10h]
  _DWORD v64[3]; // [sp+64h] [bp-Ch] BYREF

  v42 = 0;
  *(_DWORD *)s = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  sub_1C55C(0, &v42);
  sub_1C608(0, s, 0x10u);
  v2 = strlen(s);
  sprintf(&s[v2], "-%d", v42);
  if ( strstr(s, "F1V23B3C2R-3") )
    goto LABEL_2;
  if ( strstr(s, "F1V23B3C2R-2") || strstr(s, "F1V23B2C2R-3") )
  {
    memset(a1, 0, 0x84u);
    v47 = *(_DWORD *)"6";
    v48 = *(_DWORD *)"9";
    v49 = *(_DWORD *)";";
    v50 = *(_DWORD *)">";
    v3 = *(_DWORD *)"B";
    v4 = *(_DWORD *)"D";
    v5 = *(_DWORD *)"F";
    v6 = (const char *)&unk_98630;
    goto LABEL_3;
  }
  if ( strstr(s, "F1V23B1C2R-3") )
  {
LABEL_2:
    memset(a1, 0, 0x84u);
    v47 = *(_DWORD *)"6";
    v48 = *(_DWORD *)"9";
    v49 = *(_DWORD *)";";
    v50 = *(_DWORD *)">";
    v3 = *(_DWORD *)"B";
    v4 = *(_DWORD *)"D";
    v5 = *(_DWORD *)"F";
    v6 = "\n";
LABEL_3:
    v51 = v3;
    v52 = v4;
    v53 = v5;
    v7 = *(_DWORD *)v6;
    v8 = *((_DWORD *)v6 + 1);
    v9 = *((_DWORD *)v6 + 2);
    v10 = *((_DWORD *)v6 + 3);
    v11 = (int *)(v6 + 16);
    v56 = v7;
    v57 = v8;
    v58 = v9;
    v59 = v10;
    v12 = v11[1];
    v13 = v11[2];
    v60 = *v11;
    v61 = v12;
    v62 = v13;
    v14 = v48;
    v15 = v49;
    v16 = v50;
    *a1 = v47;
    a1[1] = v14;
    a1[2] = v15;
    v17 = v51;
    v18 = v52;
    v19 = v53;
    a1[3] = v16;
    a1[4] = v17;
    a1[5] = v18;
    a1[6] = v19;
    v20 = v57;
    v21 = v58;
    v22 = v59;
    a1[16] = v56;
    a1[17] = v20;
    a1[18] = v21;
    result = (char *)v60;
    v24 = v61;
    v25 = v62;
    a1[19] = v22;
    a1[32] = 7;
    a1[20] = (int)result;
    a1[21] = v24;
    a1[22] = v25;
    return result;
  }
  result = strstr(s, "F1V23B4C2R-2");
  if ( result )
  {
    memset(a1, 0, 0x84u);
    v26 = &v47;
    v27 = a1;
    v47 = 54;
    v48 = 58;
    v49 = 60;
    v50 = 62;
    v51 = 64;
    v52 = 66;
    v53 = 70;
    v54 = 72;
    v55[0] = 76;
    v55[1] = 78;
    v55[2] = 80;
    v56 = 10;
    v57 = 20;
    v58 = 30;
    v59 = 40;
    v60 = 50;
    v61 = 60;
    v62 = 70;
    v63 = 80;
    v64[0] = 90;
    v64[1] = 110;
    v64[2] = 130;
    do
    {
      v28 = v26[1];
      v29 = v26[2];
      v30 = v26[3];
      v27 += 4;
      v31 = v26 + 4 == v55;
      *(v27 - 4) = *v26;
      v26 += 4;
      *(v27 - 3) = v28;
      *(v27 - 2) = v29;
      *(v27 - 1) = v30;
    }
    while ( !v31 );
    v32 = v26[1];
    v33 = v26[2];
    v34 = a1 + 16;
    v35 = &v56;
    *v27 = *v26;
    v27[1] = v32;
    v27[2] = v33;
    do
    {
      v34 += 4;
      v36 = *v35;
      v37 = v35[1];
      v38 = v35[2];
      v39 = v35[3];
      v35 += 4;
      *(v34 - 4) = v36;
      *(v34 - 3) = v37;
      *(v34 - 2) = v38;
      *(v34 - 1) = v39;
    }
    while ( v35 != v64 );
    result = (char *)*v35;
    v40 = v35[1];
    v41 = v35[2];
    *v34 = *v35;
    v34[1] = v40;
    v34[2] = v41;
    a1[32] = 11;
  }
  return result;
}
