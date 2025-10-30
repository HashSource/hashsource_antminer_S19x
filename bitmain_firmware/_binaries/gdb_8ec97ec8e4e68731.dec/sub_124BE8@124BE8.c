int __fastcall sub_124BE8(int a1, int a2, unsigned __int16 *a3)
{
  int v6; // r0
  const char *v7; // r2
  const char *v8; // r2
  int result; // r0
  unsigned int v10; // r6
  int v11; // r7
  const char *v12; // r10
  int v13; // r0
  unsigned __int16 *v14; // r8
  int v15; // r0
  const char *v16; // r3
  unsigned int v17; // r2
  char *v18; // r0
  char *v19; // r0
  char *v20; // r0
  char *v21; // r0
  char *v22; // r0
  unsigned __int16 *v23; // r7
  char *v24; // r2
  char *v25; // r3
  char *v26; // r0
  char *v27; // r0

  sub_25A788(a2, a1);
  v6 = sub_320EC4(*a3);
  v7 = "DW_TAG_<unknown>";
  if ( v6 )
    v7 = (const char *)v6;
  sub_2594B0(a1, "Die: %s (abbrev %d, offset 0x%x)\n", v7, *((_DWORD *)a3 + 1), *((_DWORD *)a3 + 2));
  if ( *((_DWORD *)a3 + 5) )
  {
    sub_25A788(a2, a1);
    sub_2594B0(a1, "  parent at offset: 0x%x\n", *(_DWORD *)(*((_DWORD *)a3 + 5) + 8));
  }
  sub_25A788(a2, a1);
  v8 = "TRUE";
  if ( !*((_DWORD *)a3 + 3) )
    v8 = "FALSE";
  sub_2594B0(a1, "  has children: %s\n", v8);
  sub_25A788(a2, a1);
  result = sub_2594B0(a1, "  attributes:\n");
  if ( *((_BYTE *)a3 + 2) )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = 8 * v10;
      sub_25A788(a2, a1);
      if ( a3[8 * v10 + 12] == 0x2000 )
      {
        v12 = "DW_AT_HP_block_index";
      }
      else
      {
        v13 = sub_321970();
        v12 = "DW_AT_<unknown>";
        if ( v13 )
          v12 = (const char *)v13;
      }
      v14 = &a3[v11];
      v15 = sub_321640(a3[v11 + 13] & 0x7FFF);
      if ( v15 )
        v16 = (const char *)v15;
      else
        v16 = "DW_FORM_<unknown>";
      sub_2594B0(a1, "    %s (%s) ", v12, v16);
      v17 = v14[13] & 0x7FFF;
      if ( v17 == 16 )
      {
        sub_2594B0(a1, "ref address: ");
LABEL_42:
        v20 = sub_98B08(*((_DWORD *)v14 + 8), *((_DWORD *)v14 + 9));
        sub_25A6BC(v20, a1);
        goto LABEL_43;
      }
      if ( v17 <= 0x10 )
        break;
      if ( v17 == 30 )
      {
        sub_2594B0(a1, "constant of 16 bytes");
        goto LABEL_43;
      }
      if ( v17 > 0x1E )
      {
        if ( v17 != 7937 )
        {
          if ( v17 > 0x1F01 )
          {
            if ( v17 != 7968 )
            {
              if ( v17 == 7969 || v17 == 7938 )
              {
LABEL_57:
                v23 = &a3[v11];
                v24 = (char *)*((_DWORD *)v23 + 8);
                v25 = "not";
                if ( *((unsigned __int8 *)v23 + 27) >> 7 )
                  v25 = "is";
                if ( !v24 )
                  v24 = "";
                sub_2594B0(a1, "string: \"%s\" (%s canonicalized)", v24, v25);
                goto LABEL_43;
              }
LABEL_54:
              sub_2594B0(a1, "unsupported attribute form: %d.", v17);
              goto LABEL_43;
            }
            sub_2594B0(a1, "alt ref address: ");
            goto LABEL_42;
          }
          if ( v17 == 32 )
          {
            v22 = sub_98B08(*((_DWORD *)v14 + 8), *((_DWORD *)v14 + 9));
            sub_2594B0(a1, "signature: %s", v22);
            goto LABEL_43;
          }
          if ( v17 < 0x20 )
            goto LABEL_57;
          if ( v17 != 33 )
            goto LABEL_54;
          v19 = sub_988AC(*((_QWORD *)v14 + 4));
          goto LABEL_40;
        }
        goto LABEL_33;
      }
      if ( v17 == 22 )
      {
        sub_2594B0(a1, "unexpected attribute form: DW_FORM_indirect");
        goto LABEL_43;
      }
      if ( v17 >= 0x16 )
      {
        if ( v17 == 24 )
        {
          v27 = sub_98880(**((_DWORD **)v14 + 8), 0);
          sub_2594B0(a1, "expression: size %s", v27);
          goto LABEL_43;
        }
        if ( v17 >= 0x18 )
        {
          if ( v17 != 25 )
            goto LABEL_54;
LABEL_27:
          sub_2594B0(a1, "flag: TRUE");
          goto LABEL_43;
        }
        v21 = sub_98880(*((_DWORD *)v14 + 8), *((_DWORD *)v14 + 9));
        sub_2594B0(a1, "section offset: %s", v21);
      }
      else
      {
        sub_2594B0(a1, "constant ref: 0x%lx (adjusted)", *((_DWORD *)v14 + 8));
      }
LABEL_43:
      ++v10;
      result = sub_2594B0(a1, (const char *)&word_356638);
      if ( *((unsigned __int8 *)a3 + 2) <= v10 )
        return result;
    }
    if ( v17 <= 0xA )
    {
      if ( v17 >= 9 )
        goto LABEL_64;
      if ( v17 > 4 )
      {
        if ( v17 > 7 )
          goto LABEL_57;
        goto LABEL_63;
      }
      if ( v17 >= 3 )
      {
LABEL_64:
        v26 = sub_98880(**(_DWORD **)&a3[v11 + 16], 0);
        sub_2594B0(a1, "block: size %s", v26);
        goto LABEL_43;
      }
      if ( v17 != 1 )
        goto LABEL_54;
LABEL_33:
      sub_2594B0(a1, "address: ");
      v18 = sub_98B08(*(_DWORD *)&a3[v11 + 16], 0);
      sub_25A6BC(v18, a1);
      goto LABEL_43;
    }
    if ( v17 == 13 )
      goto LABEL_63;
    if ( v17 > 0xD )
    {
      if ( v17 == 14 )
        goto LABEL_57;
LABEL_63:
      v19 = sub_98880(*(_DWORD *)&a3[v11 + 16], *(_DWORD *)&a3[v11 + 18]);
LABEL_40:
      sub_2594B0(a1, "constant: %s", v19);
      goto LABEL_43;
    }
    if ( v17 == 11 )
      goto LABEL_63;
    if ( !*((_QWORD *)v14 + 4) )
    {
      sub_2594B0(a1, "flag: FALSE");
      goto LABEL_43;
    }
    goto LABEL_27;
  }
  return result;
}
