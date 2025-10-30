int __fastcall sub_10D994(int a1, int a2, int a3)
{
  _DWORD *v7; // r6
  _DWORD *v8; // r5
  int v9; // r10
  int v10; // r0
  int v11; // r0
  unsigned int v12; // r1
  int v13; // r7
  int v14; // r0
  int v15; // r0
  unsigned int v16; // r1
  const char *v17; // r0
  int v18; // r6
  int v19; // r1
  const char *v20; // r2
  int v21; // [sp+8h] [bp-5Ch] BYREF
  int i; // [sp+Ch] [bp-58h] BYREF
  _BYTE v23[84]; // [sp+10h] [bp-54h] BYREF

  if ( !sub_116988(a2) )
    return 1;
  v7 = (_DWORD *)sub_116BAC(a2);
  v8 = (_DWORD *)sub_116BB8(a2);
  if ( v7 )
  {
    v9 = 1;
    sub_B550C(a1, "%*sTrusted Uses:\n%*s", a3, &byte_1A4198, a3 + 2, &byte_1A4198);
    for ( i = 0; ; ++i )
    {
      v11 = sub_10C010((int)v7);
      v12 = i;
      if ( v11 <= i )
        break;
      if ( !v9 )
      {
        sub_B6C30(a1, (int)", ");
        v12 = i;
      }
      v9 = 0;
      v10 = sub_10C01C(v7, v12);
      sub_EACFC(v23, 80, v10, 0);
      sub_B6C30(a1, (int)v23);
    }
    sub_B6C30(a1, (int)"\n");
  }
  else
  {
    sub_B550C(a1, "%*sNo Trusted Uses.\n", a3, &byte_1A4198);
  }
  if ( v8 )
  {
    v13 = 1;
    sub_B550C(a1, "%*sRejected Uses:\n%*s", a3, &byte_1A4198, a3 + 2, &byte_1A4198);
    for ( i = 0; ; ++i )
    {
      v15 = sub_10C010((int)v8);
      v16 = i;
      if ( v15 <= i )
        break;
      if ( !v13 )
      {
        sub_B6C30(a1, (int)", ");
        v16 = i;
      }
      v13 = 0;
      v14 = sub_10C01C(v8, v16);
      sub_EACFC(v23, 80, v14, 0);
      sub_B6C30(a1, (int)v23);
    }
    sub_B6C30(a1, (int)"\n");
  }
  else
  {
    sub_B550C(a1, "%*sNo Rejected Uses.\n", a3, &byte_1A4198);
  }
  v17 = (const char *)sub_116A8C(a2, &i);
  if ( v17 )
    sub_B550C(a1, "%*sAlias: %.*s\n", a3, &byte_1A4198, i, v17);
  v18 = sub_116AA0(a2, &v21);
  if ( !v18 )
    return 1;
  sub_B550C(a1, "%*sKey Id: ", a3, &byte_1A4198);
  v19 = 0;
  i = 0;
  if ( v21 > 0 )
  {
    v20 = &byte_1A4198;
    while ( 1 )
    {
      sub_B550C(a1, "%s%02X", v20, *(unsigned __int8 *)(v18 + v19));
      v19 = ++i;
      if ( i >= v21 )
        break;
      if ( v19 )
        v20 = (const char *)&word_1B5258;
      else
        v20 = &byte_1A4198;
    }
  }
  sub_B69CC(a1, (int)"\n", 1);
  return 1;
}
