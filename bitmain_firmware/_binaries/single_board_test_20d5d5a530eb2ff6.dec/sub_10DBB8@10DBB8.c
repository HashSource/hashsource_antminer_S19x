bool __fastcall sub_10DBB8(int a1, int a2, int a3, int a4)
{
  int v8; // r10
  int v9; // r11
  const char *v10; // r1
  int v11; // r2
  int v12; // r1
  int v13; // r2
  _BOOL4 v14; // r4
  unsigned int v16; // r0
  int *v17; // r9
  const char *v18; // r3
  int v19; // r8
  int v20; // r2
  int v21; // r3
  int *v22; // r9
  int v23; // r0
  int v24; // r0
  _DWORD *v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r8
  int v31; // r3
  const char *v32; // r2
  int *v33; // [sp+10h] [bp-Ch] BYREF
  int *v34[2]; // [sp+14h] [bp-8h] BYREF

  if ( (a3 & 0xF0000) == 0x40000 )
  {
    v9 = 12;
    v8 = 10;
  }
  else
  {
    v8 = 32;
    if ( a3 )
      v9 = 0;
    else
      v9 = 16;
  }
  if ( (a4 & 1) == 0 && (sub_B69CC(a1, (int)"Certificate:\n", 13) <= 0 || sub_B69CC(a1, (int)"    Data:\n", 10) <= 0) )
    goto LABEL_22;
  v10 = (const char *)(a4 << 30);
  if ( (a4 & 2) != 0 )
    goto LABEL_7;
  v16 = sub_10FD34(a2, v10);
  if ( v16 > 2 )
  {
    if ( sub_B550C(a1, "%8sVersion: Unknown (%ld)\n", &byte_1A4198, v16) <= 0 )
      goto LABEL_22;
LABEL_7:
    v11 = a4 << 29;
    if ( (a4 & 4) != 0 )
      goto LABEL_8;
    goto LABEL_28;
  }
  if ( sub_B550C(a1, "%8sVersion: %ld (0x%lx)\n", &byte_1A4198, v16 + 1, v16) <= 0 )
    goto LABEL_22;
  v11 = a4 << 29;
  if ( (a4 & 4) == 0 )
  {
LABEL_28:
    if ( sub_B69CC(a1, (int)"        Serial Number:", 22) <= 0 )
      goto LABEL_22;
    v17 = (int *)sub_10E664(a2);
    if ( *v17 > 4 || (sub_D1260(), v30 = sub_126F04(v17), sub_D128C(), v30 == -1) )
    {
      if ( v17[1] == 258 )
        v18 = " (Negative)";
      else
        v18 = &byte_1A4198;
      if ( sub_B550C(a1, "\n%12s%s", &byte_1A4198, v18) <= 0 )
        goto LABEL_22;
      v19 = 0;
      while ( 1 )
      {
        v10 = "%02x%c";
        if ( v19 >= *v17 )
          break;
        v20 = *(unsigned __int8 *)(v17[2] + v19++);
        if ( *v17 == v19 )
          v21 = 10;
        else
          v21 = 58;
        if ( sub_B550C(a1, "%02x%c", v20, v21) <= 0 )
          goto LABEL_22;
      }
    }
    else
    {
      if ( v17[1] == 258 )
      {
        v31 = -v30;
        v32 = "-";
      }
      else
      {
        v31 = v30;
        v32 = &byte_1A4198;
      }
      if ( sub_B550C(a1, " %s%lu (%s0x%lx)\n", v32, v31, v32, v31) <= 0 )
        goto LABEL_22;
    }
  }
LABEL_8:
  if ( (a4 & 8) != 0 )
  {
    if ( (a4 & 0x10) != 0 )
      goto LABEL_10;
  }
  else
  {
    v22 = (int *)sub_10FD74(a2, v10, v11);
    if ( sub_B6C30(a1, (int)"    ") <= 0 || sub_10D908(a1, v22, (int *)(a4 & 8)) <= 0 )
      goto LABEL_22;
    if ( (a4 & 0x10) != 0 )
      goto LABEL_10;
  }
  if ( sub_B550C(a1, "        Issuer:%c", v8) <= 0 )
    goto LABEL_22;
  v23 = sub_10E65C(a2);
  if ( sub_129FD4(a1, v23, v9, a3) < 0 || sub_B69CC(a1, (int)"\n", 1) <= 0 )
    goto LABEL_22;
LABEL_10:
  if ( (a4 & 0x20) == 0 )
  {
    if ( sub_B69CC(a1, (int)"        Validity\n", 17) <= 0 )
      goto LABEL_22;
    if ( sub_B69CC(a1, (int)"            Not Before: ", 24) <= 0 )
      goto LABEL_22;
    v26 = sub_10FD3C(a2);
    if ( !sub_12B2A0(a1, v26) )
      goto LABEL_22;
    if ( sub_B69CC(a1, (int)"\n            Not After : ", 25) <= 0 )
      goto LABEL_22;
    v27 = sub_10FD40(a2);
    if ( !sub_12B2A0(a1, v27) || sub_B69CC(a1, (int)"\n", 1) <= 0 )
      goto LABEL_22;
  }
  v12 = a4 << 25;
  if ( (a4 & 0x40) == 0 )
  {
    if ( sub_B550C(a1, "        Subject:%c", v8) <= 0 )
      goto LABEL_22;
    v28 = sub_10E660(a2);
    if ( sub_129FD4(a1, v28, v9, a3) < 0 || sub_B69CC(a1, (int)"\n", 1) <= 0 )
      goto LABEL_22;
  }
  if ( (a4 & 0x80) == 0 )
  {
    v24 = sub_10FD5C(a2);
    sub_116488(v34, a4 & 0x80, a4 & 0x80, a4 & 0x80, v24);
    if ( sub_B69CC(a1, (int)"        Subject Public Key Info:\n", 33) > 0
      && sub_B550C(a1, "%12sPublic Key Algorithm: ", &byte_1A4198) > 0
      && sub_127D14(a1, v34[0]) > 0
      && sub_B6C30(a1, (int)"\n") > 0 )
    {
      v25 = (_DWORD *)sub_10E89C(a2);
      if ( v25 )
      {
        sub_DA638(a1, v25, 16);
      }
      else
      {
        sub_B550C(a1, "%12sUnable to load Public Key\n", &byte_1A4198);
        sub_D1440(a1);
      }
      goto LABEL_13;
    }
LABEL_22:
    v14 = 0;
    goto LABEL_23;
  }
LABEL_13:
  v13 = a4 << 19;
  if ( (a4 & 0x1000) == 0 )
  {
    sub_10FD64(a2, &v33, v34);
    if ( v33 )
    {
      if ( sub_B550C(a1, "%8sIssuer Unique ID: ", &byte_1A4198) <= 0 || !sub_10D840(a1, v33, 12) )
        goto LABEL_22;
    }
    if ( v34[0] && (sub_B550C(a1, "%8sSubject Unique ID: ", &byte_1A4198) <= 0 || !sub_10D840(a1, v34[0], 12)) )
      goto LABEL_22;
  }
  if ( (a4 & 0x100) == 0 )
  {
    v29 = sub_10FD60(a2, v12, v13, a4 << 23);
    sub_11FC5C(a1, "X509v3 extensions", v29, a4, 8);
  }
  if ( (a4 & 0x200) == 0 )
  {
    sub_116918(v34, &v33, a2);
    if ( sub_10D908(a1, v33, v34[0]) <= 0 )
      goto LABEL_22;
  }
  v14 = (a4 & 0x400) != 0 || sub_10D994(a1, a2, 0) != 0;
LABEL_23:
  CRYPTO_free(0);
  return v14;
}
