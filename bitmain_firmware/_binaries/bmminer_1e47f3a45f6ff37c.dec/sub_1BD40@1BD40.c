int __fastcall sub_1BD40(int a1)
{
  int v1; // r4
  int v2; // r0
  unsigned int v4; // r6
  int v5; // r5
  const char *v6; // r0
  int v7; // r3
  const char *v8; // r0
  unsigned int v9; // r8
  int v10; // r5
  int v11; // r3
  const char *v12; // r0
  int v13; // r3
  int v14; // r7
  int v15; // r7
  char *v16; // r0
  unsigned __int8 v17; // r3
  int v18; // [sp+0h] [bp-1Ch] BYREF
  char haystack[4]; // [sp+4h] [bp-18h] BYREF
  int v20; // [sp+8h] [bp-14h]
  int v21; // [sp+Ch] [bp-10h]
  int v22; // [sp+10h] [bp-Ch]
  int v23; // [sp+14h] [bp-8h]

  v1 = sub_1AD38() + a1;
  v2 = sub_1AA28();
  if ( !v2 )
  {
    v2 = sub_1AB0C();
    if ( !v2 || dword_B6EB4 != 2 )
      goto LABEL_3;
LABEL_24:
    v6 = (const char *)sub_26A14();
    if ( !strcmp(v6, "BHB56902") )
    {
      v2 = sub_1AA28();
      if ( v2 )
        v7 = 30;
      else
        v7 = 20;
      v1 += v7;
    }
    else
    {
      v12 = (const char *)sub_26A14();
      v2 = strcmp(v12, "BHB56903");
      if ( !v2 )
      {
        v2 = sub_1AA28();
        if ( v2 )
          v13 = 40;
        else
          v13 = 30;
        v1 += v13;
      }
    }
    goto LABEL_3;
  }
  if ( dword_B6EB4 == 2 )
    goto LABEL_24;
LABEL_3:
  if ( sub_42B0C(v2) )
    v1 -= 15;
  if ( dword_B6EB4 )
    return v1;
  if ( sub_1ABF0() )
    goto LABEL_8;
  v8 = (const char *)sub_26A14();
  if ( strcmp(v8, "BHB56902") )
    goto LABEL_8;
  v9 = 0;
  v10 = 0;
  *(_DWORD *)haystack = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v18 = 20;
  do
  {
    if ( sub_26C0C(v10) )
    {
      v14 = *(_DWORD *)(dword_B3CC0 + 4 * v10);
      if ( (*(int (__fastcall **)(int))(v14 + 188))(v14) == 1390 )
      {
        (*(void (__fastcall **)(int, char *, int *))(v14 + 68))(v14, haystack, &v18);
        v15 = (*(int (__fastcall **)(int))(v14 + 84))(v14);
        v16 = strstr(haystack, "C2");
        v17 = v9 + 1;
        if ( v16 )
        {
          if ( v15 <= 1 )
            goto LABEL_34;
LABEL_55:
          v9 = v17;
          goto LABEL_34;
        }
        v17 = v9 + 1;
        if ( v15 > 2 )
          goto LABEL_55;
      }
    }
LABEL_34:
    ++v10;
  }
  while ( v10 != 4 );
  if ( v9 <= 1 )
    v11 = 0;
  else
    v11 = 10;
  v1 -= v11;
LABEL_8:
  if ( sub_1ABF0() && (sub_1AA28() || sub_1AB0C()) )
    v1 += sub_1B5A8();
  if ( sub_1AC94() && (sub_1AA28() || sub_1AB0C()) )
    v1 += sub_1BBF4();
  if ( !sub_1AA28() && !sub_1AB0C() )
    return v1;
  v4 = 0;
  v5 = 0;
  *(_DWORD *)haystack = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v18 = 20;
  do
  {
    if ( sub_26C0C(v5) )
    {
      (*(void (__fastcall **)(_DWORD, char *, int *, _DWORD))(*(_DWORD *)(dword_B3CC0 + 4 * v5) + 68))(
        *(_DWORD *)(dword_B3CC0 + 4 * v5),
        haystack,
        &v18,
        *(_DWORD *)(*(_DWORD *)(dword_B3CC0 + 4 * v5) + 68));
      if ( strstr(haystack, "C1") )
        v4 = (unsigned __int8)(v4 + 1);
    }
    ++v5;
  }
  while ( v5 != 4 );
  if ( v4 <= 1 )
  {
    if ( (unsigned int)sub_1A8B4() > 0x234 )
      return v1;
    return v1 + 10;
  }
  else
  {
    if ( (unsigned int)sub_1A8B4() <= 0x234 )
    {
      v1 += 20;
      return v1;
    }
    if ( (unsigned int)sub_1A8B4() <= 0x24D )
      return v1 + 10;
    return v1;
  }
}
