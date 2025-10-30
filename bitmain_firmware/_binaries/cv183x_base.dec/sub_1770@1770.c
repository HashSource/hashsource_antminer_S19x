__int64 __fastcall sub_1770(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  bool v5; // cc
  unsigned __int64 v6; // x1
  _BOOL8 v8; // x2
  size_t v9; // x0
  const char *i; // x22
  __int64 v11; // x19
  size_t v12; // x21
  __int64 v13; // x20
  __int64 v14; // x19
  int v15; // w26
  size_t v16; // x21
  __int64 v18; // x1
  _DWORD *v19; // x1
  int v20; // [xsp+6Ch] [xbp+6Ch] BYREF
  _QWORD v21[4]; // [xsp+70h] [xbp+70h] BYREF
  char s[8]; // [xsp+90h] [xbp+90h] BYREF
  __int64 v23; // [xsp+98h] [xbp+98h]
  __int64 v24; // [xsp+A0h] [xbp+A0h]
  __int64 v25; // [xsp+A8h] [xbp+A8h]

  memset(v21, 0, sizeof(v21));
  if ( a2 )
    v5 = a3 > 0x1F;
  else
    v5 = 1;
  if ( v5 )
  {
    printk(&unk_3400, a2);
    return -22;
  }
  v6 = *(_QWORD *)(_ReadStatusReg(SP_EL0) + 8);
  v8 = !__CFADD__(a2, a3) && a2 + a3 <= v6;
  v9 = a3;
  if ( v8 )
  {
    v9 = _arch_copy_from_user(v21, a2, a3);
    if ( !v9 )
      goto LABEL_13;
LABEL_22:
    memset((char *)v21 + a3 - v9, 0, v9);
    printk(&unk_3418, v18);
    return -14;
  }
  if ( a3 )
    goto LABEL_22;
LABEL_13:
  i = "ALL";
  *(_QWORD *)s = 0;
  v23 = 0;
  v11 = qword_4200;
  v24 = 0;
  v25 = 0;
  snprintf(s, 0x20u, "%s=", "ALL");
  v12 = strlen(s);
  v13 = v11 + 593936;
  if ( !strncmp((const char *)v21, s, v12) )
  {
    if ( (unsigned int)kstrtouint((char *)v21 + v12, 10, &v20) )
    {
LABEL_28:
      strlen(s);
      printk(&unk_3438, i);
    }
    else
    {
      v19 = (_DWORD *)(v11 + 593936);
      do
        *v19++ = v20;
      while ( v19 != (_DWORD *)(v11 + 594068) );
    }
  }
  else
  {
    v14 = 0;
    for ( i = "BASE"; ; i = (&off_26A8)[v14] )
    {
      *(_QWORD *)s = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      snprintf(s, 0x20u, "%s=", i);
      v15 = v14++;
      v16 = strlen(s);
      if ( !strncmp((const char *)v21, s, v16) )
        break;
      if ( v14 == 33 )
      {
        printk(&unk_3470, v21);
        return a3;
      }
    }
    if ( (unsigned int)kstrtouint((char *)v21 + v16, 10, v13 + 4LL * v15) )
      goto LABEL_28;
  }
  return a3;
}
