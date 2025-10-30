int __fastcall sub_E8A60(int a1, int a2, int a3, int a4)
{
  int v5; // r1
  int v9; // r4
  int v10; // r0
  int result; // r0
  const char *v12; // r5
  int v13; // r0
  int v14; // r3
  int v15; // r3
  int v16; // r0

  v5 = *(_DWORD *)(a1 + 16);
  v9 = v5 & 1;
  if ( (v5 & 1) != 0 && (unsigned int)**(unsigned __int8 **)(a1 + 24) - 18 > 1 )
  {
    if ( a3 )
      sub_25A418(a2, (const char *)&word_3E1F84);
    sub_25A418(a2, "const");
    v5 = *(_DWORD *)(a1 + 16);
    if ( (v5 & 2) == 0 )
    {
      if ( (v5 & 0x80) == 0 )
        goto LABEL_7;
      goto LABEL_32;
    }
    goto LABEL_30;
  }
  if ( (v5 & 2) == 0 )
  {
    v9 = v5 & 0x80;
    if ( (v5 & 0x80) == 0 )
    {
LABEL_7:
      if ( (v5 & 0x100) != 0 )
      {
        if ( !(v9 | a3) )
          goto LABEL_9;
        goto LABEL_31;
      }
      goto LABEL_22;
    }
    if ( !a3 )
      goto LABEL_14;
    goto LABEL_32;
  }
  if ( a3 )
LABEL_30:
    sub_25A418(a2, (const char *)&word_3E1F84);
  sub_25A418(a2, "volatile");
  v15 = *(_DWORD *)(a1 + 16);
  if ( (v15 & 0x80) != 0 )
  {
LABEL_32:
    sub_25A418(a2, (const char *)&word_3E1F84);
LABEL_14:
    sub_25A418(a2, "restrict");
    if ( (*(_DWORD *)(a1 + 16) & 0x100) == 0 )
    {
      v13 = sub_170040(a1);
      result = sub_1703FC(v13, *(_DWORD *)(a1 + 16));
      v12 = (const char *)result;
      if ( result )
        goto LABEL_10;
      LOBYTE(v9) = 1;
LABEL_17:
      v14 = v9 & 1;
      goto LABEL_26;
    }
    goto LABEL_31;
  }
  if ( (v15 & 0x100) == 0 )
  {
    v9 = 1;
LABEL_22:
    v16 = sub_170040(a1);
    result = sub_1703FC(v16, *(_DWORD *)(a1 + 16));
    v12 = (const char *)result;
    if ( result )
    {
      if ( !(v9 | a3) )
        goto LABEL_24;
      goto LABEL_10;
    }
    goto LABEL_17;
  }
LABEL_31:
  sub_25A418(a2, (const char *)&word_3E1F84);
LABEL_9:
  sub_25A418(a2, "_Atomic");
  v10 = sub_170040(a1);
  result = sub_1703FC(v10, *(_DWORD *)(a1 + 16));
  v12 = (const char *)result;
  if ( result )
  {
LABEL_10:
    sub_25A418(a2, (const char *)&word_3E1F84);
LABEL_24:
    result = sub_25A418(a2, "@%s", v12);
  }
  v14 = 1;
LABEL_26:
  if ( !a4 )
    v14 = 0;
  if ( v14 )
    return sub_25A418(a2, (const char *)&word_3E1F84);
  return result;
}
