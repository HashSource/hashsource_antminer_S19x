int __fastcall sub_C9A3C(int a1, _DWORD *a2, int a3)
{
  int v6; // r5
  int v7; // r0
  int v8; // r4
  int v9; // r2
  int v10; // r9
  int v11; // r8
  int v12; // r7
  int v13; // r6
  int v15; // r0
  int v16; // r0
  int v17; // r0
  const char *v18; // r0
  const char *v19; // r6
  const char *v20; // r0
  int v21; // r1
  void *v22; // r0
  int v23; // r6
  int v24; // r2
  __int16 *v25; // r3
  int v26; // r1
  int v27; // r6
  const char *v28; // r0
  int v29; // [sp+8h] [bp-A4h]
  int v30; // [sp+Ch] [bp-A0h]
  int v31; // [sp+10h] [bp-9Ch]
  int v32; // [sp+10h] [bp-9Ch]
  int v33; // [sp+14h] [bp-98h]
  int v34; // [sp+18h] [bp-94h]
  int v35; // [sp+1Ch] [bp-90h]
  _BYTE s[136]; // [sp+20h] [bp-8Ch] BYREF

  if ( !a2 )
  {
    v8 = 0;
    v9 = 67;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v6 = 0;
    goto LABEL_7;
  }
  v6 = sub_130B08();
  if ( !v6 )
  {
    v8 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v9 = 65;
    goto LABEL_7;
  }
  if ( !sub_C628C((int)a2) )
  {
    v15 = sub_C620C((int)a2);
    v29 = sub_C6210(v15);
    v12 = sub_B822C();
    if ( !v12 )
    {
      v8 = 0;
      v10 = 0;
      v11 = 0;
      v9 = 65;
      goto LABEL_7;
    }
    v11 = sub_B822C();
    if ( !v11 )
    {
      v8 = 0;
      v10 = 0;
      v9 = 65;
      goto LABEL_7;
    }
    v10 = sub_B822C();
    if ( !v10 )
    {
      v8 = 0;
      v9 = 65;
      goto LABEL_7;
    }
    if ( !sub_C6348((int)a2) )
    {
      v8 = 0;
      v9 = 16;
      goto LABEL_7;
    }
    v17 = sub_C6214((int)a2);
    if ( !v17 )
    {
      v8 = 0;
      v9 = 16;
      goto LABEL_7;
    }
    v31 = v17;
    v30 = sub_C6244((int)a2);
    v33 = sub_C627C((int)a2);
    if ( !v30 )
    {
      v8 = 0;
      v9 = 16;
      goto LABEL_7;
    }
    v34 = sub_C6294((int)a2);
    v8 = sub_159C24(a2, v31, v34, 0, v6);
    if ( !v8 )
    {
      v9 = 16;
      goto LABEL_7;
    }
    v32 = sub_C630C((int)a2);
    if ( v32 )
      v35 = sub_C6310((int)a2);
    else
      v35 = 0;
    if ( sub_B6E94(a1, a3, 128) )
    {
      v20 = (const char *)sub_EAAB4(v29);
      if ( sub_B550C(a1, "Field Type: %s\n", v20) > 0 )
      {
        if ( v29 == 407 )
        {
          v27 = sub_C3290(a2, v21);
          if ( !v27 )
            goto LABEL_26;
          if ( !sub_B6E94(a1, a3, 128) )
            goto LABEL_26;
          v28 = (const char *)sub_EAAB4(v27);
          if ( sub_B550C(a1, "Basis Type: %s\n", v28) <= 0 || !sub_12D850(a1, "Polynomial:", v12, 0, a3) )
            goto LABEL_26;
        }
        else if ( !sub_12D850(a1, "Prime:", v12, 0, a3) )
        {
          goto LABEL_26;
        }
        if ( !sub_12D850(a1, "A:   ", v11, 0, a3) || !sub_12D850(a1, "B:   ", v10, 0, a3) )
          goto LABEL_26;
        if ( v34 == 2 )
        {
          if ( !sub_12D850(a1, "Generator (compressed):", v8, 0, a3) )
            goto LABEL_26;
        }
        else if ( v34 == 4 )
        {
          if ( !sub_12D850(a1, &unk_1B5240, v8, 0, a3) )
            goto LABEL_26;
        }
        else if ( !sub_12D850(a1, "Generator (hybrid):", v8, 0, a3) )
        {
          goto LABEL_26;
        }
        if ( sub_12D850(a1, "Order: ", v30, 0, a3) && (!v33 || sub_12D850(a1, "Cofactor: ", v33, 0, a3)) )
        {
          if ( !v32 )
          {
LABEL_71:
            v13 = 1;
            goto LABEL_8;
          }
          if ( a3 <= 0 )
          {
            a3 = 0;
          }
          else
          {
            if ( a3 >= 128 )
              a3 = 128;
            v22 = memset(s, 32, a3);
            if ( sub_B69CC(a1, (int)v22, a3) <= 0 )
              goto LABEL_26;
          }
          if ( sub_B550C(a1, (unsigned __int8 *)"%s", "Seed:") > 0 )
          {
            v23 = 0;
            while ( v35 != v23 )
            {
              sub_1892EC(v23, 15);
              if ( v26 || (s[0] = 10, memset(&s[1], 32, a3 + 4), sub_B69CC(a1, (int)s, a3 + 5) > 0) )
              {
                v24 = *(unsigned __int8 *)(v32 + v23++);
                v25 = (__int16 *)&byte_1A4198;
                if ( v35 != v23 )
                  v25 = &word_1B5258;
                if ( sub_B550C(a1, "%02x%s", v24, v25) > 0 )
                  continue;
              }
              goto LABEL_26;
            }
            if ( sub_B69CC(a1, (int)"\n", 1) > 0 )
              goto LABEL_71;
          }
        }
      }
    }
LABEL_26:
    v9 = 32;
    goto LABEL_7;
  }
  v7 = sub_B6E94(a1, a3, 128);
  if ( v7 )
  {
    v16 = sub_C6284((int)a2);
    v8 = v16;
    if ( v16 )
    {
      v18 = (const char *)sub_EAAB4(v16);
      if ( sub_B550C(a1, "ASN1 OID: %s", v18) > 0 && sub_B550C(a1, (unsigned __int8 *)"\n") > 0 )
      {
        v19 = (const char *)sub_C4F9C(v8);
        if ( !v19 )
          goto LABEL_32;
        v7 = sub_B6E94(a1, a3, 128);
        if ( !v7 )
          goto LABEL_5;
        if ( sub_B550C(a1, "NIST CURVE: %s\n", v19) > 0 )
        {
LABEL_32:
          v8 = 0;
          v13 = 1;
          v10 = 0;
          v11 = 0;
          v12 = 0;
          goto LABEL_8;
        }
      }
      v8 = 0;
    }
    v9 = 32;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    goto LABEL_7;
  }
LABEL_5:
  v8 = v7;
  v9 = 32;
  v10 = v7;
  v11 = v7;
  v12 = v7;
LABEL_7:
  v13 = 0;
  sub_D0048(16, 149, v9, "crypto/ec/eck_prn.c", 214);
LABEL_8:
  sub_B895C(v12);
  sub_B895C(v11);
  sub_B895C(v10);
  sub_B895C(v8);
  sub_130B5C(v6);
  return v13;
}
