void __fastcall sub_255684(_BYTE *a1, int a2)
{
  int v4; // r1
  void *v5; // r9
  int v6; // r4
  _BYTE *v7; // r5
  char **v8; // r10
  int v9; // t1
  __int64 v10; // r0
  int v11; // r11
  _DWORD *v12; // r5
  int v13; // r4
  _DWORD *v14; // r0
  char *v15; // r4
  _DWORD *v16; // r0
  char *v17; // r1
  unsigned int v18; // r2
  bool v19; // cc
  _DWORD *v20; // r0
  int v21; // r3
  int v22; // [sp+8h] [bp-74h] BYREF
  int v23; // [sp+Ch] [bp-70h] BYREF
  _DWORD v24[2]; // [sp+10h] [bp-6Ch] BYREF
  _DWORD v25[3]; // [sp+18h] [bp-64h] BYREF
  char *v26; // [sp+24h] [bp-58h]
  void *v27; // [sp+28h] [bp-54h]
  void *ptr[6]; // [sp+2Ch] [bp-50h] BYREF
  int v29; // [sp+44h] [bp-38h]

  v22 = 0;
  v23 = 0;
  v25[0] = *(_DWORD *)&byte_46DD28;
  v25[1] = dword_46DD2C;
  v25[2] = unk_46DD30;
  v26 = (char *)unk_46DD34;
  v27 = (void *)dword_46DD38;
  v24[0] = -1;
  v24[1] = -1;
  v5 = sub_9253C((int)nullsub_39, 0);
  if ( a1 )
  {
    if ( *a1 == 47 )
    {
      v6 = (unsigned __int8)a1[1];
      v7 = a1 + 1;
      if ( !v6 )
        sub_946E0("flag expected");
      v8 = off_46D5A4[0];
      do
      {
        if ( isspace(v6) )
          goto LABEL_10;
        switch ( v6 )
        {
          case 'M':
            LOBYTE(v25[0]) |= 2u;
            break;
          case 'T':
            LOBYTE(v25[0]) |= 4u;
            break;
          case 'm':
            LOBYTE(v25[0]) &= ~2u;
            break;
          case 'o':
            if ( a2 == 1 && ((unsigned int)(v8[2] - 2) & 0xFFFFFFFD) == 0 )
              LOBYTE(v25[0]) = v25[0] & 0xF1 | 8;
            break;
          case 'r':
            LOBYTE(v25[0]) |= 1u;
            break;
          case 't':
            LOBYTE(v25[0]) &= ~4u;
            break;
          default:
            sub_946E0("unrecognized flag '%c'", v6);
        }
        v9 = (unsigned __int8)*++v7;
        v6 = v9;
      }
      while ( v9 );
      if ( !isspace(0) )
        goto LABEL_52;
LABEL_10:
      a1 = (_BYTE *)sub_9360C(v7);
    }
    sub_1C42A8((char **)ptr, a1);
    if ( a2 == -1 && *((_DWORD *)ptr[0] + 4) == 88 )
    {
      v12 = (_DWORD *)*((_DWORD *)ptr[0] + 8);
      sub_171258(v12);
      v21 = v12[6];
      if ( *(_BYTE *)v21 == 23 )
        v12 = *(_DWORD **)(v21 + 20);
      v11 = 0;
    }
    else
    {
      v11 = sub_14CD64((int *)ptr[0]);
      v12 = (_DWORD *)sub_26BC70(v11);
    }
    if ( ptr[0] )
      free(ptr[0]);
  }
  else
  {
    v11 = sub_26C838(0, v4);
    v12 = (_DWORD *)sub_26BC70(v11);
  }
  sub_2665F0(ptr);
  if ( !v11 )
  {
LABEL_32:
    v13 = 0;
    goto LABEL_18;
  }
  v13 = v29;
  if ( v29 )
  {
    v17 = (char *)v12[6];
    v18 = *v17;
    v19 = v18 > 1;
    if ( v18 != 1 )
      v19 = (unsigned __int8)(v18 - 18) > 1u;
    if ( !v19 && **(_BYTE **)(*((_DWORD *)v17 + 5) + 24) == 3 )
    {
      v13 = sub_26338C(v11, &v22, v24, &v23);
      goto LABEL_18;
    }
    if ( v18 == 3 )
    {
      v13 = sub_FC6D8(v11, (int)&v22, (int)v24, (int)&v23);
      goto LABEL_18;
    }
    goto LABEL_32;
  }
LABEL_18:
  if ( (v25[0] & 8) != 0 && (unsigned int)*(unsigned __int8 *)v12[6] - 3 <= 1 )
  {
    v20 = (_DWORD *)sub_242F8C();
    sub_25A418(*v20, "/* offset    |  size */  ");
  }
  sub_259F10("type = ");
  if ( (v25[0] & 1) == 0 )
  {
    if ( !v26 && !v27 )
    {
      v26 = sub_255610();
      v27 = sub_157BD0();
      sub_9253C((int)sub_255380, (int)v25);
      goto LABEL_22;
    }
    v10 = sub_94700(
            (int)"typeprint.c",
            252,
            "%s: Assertion `%s' failed.",
            "cleanup* create_global_typedef_table(type_print_options*)",
            "flags->global_typedefs == NULL && flags->global_printers == NULL");
LABEL_52:
    sub_946E0("expected space after format", HIDWORD(v10));
  }
LABEL_22:
  if ( v13 )
  {
    sub_259F10("/* real type = ");
    v14 = (_DWORD *)sub_242F8C();
    (*((void (__fastcall **)(int, char *, _DWORD, int, _DWORD, char *))off_46D5A4[0] + 15))(
      v13,
      "",
      *v14,
      -1,
      0,
      &byte_46DD28);
    if ( !v22 )
      sub_259F10(" (incomplete object)");
    sub_259F10(" */\n");
  }
  v15 = off_46D5A4[0][15];
  v16 = (_DWORD *)sub_242F8C();
  ((void (__fastcall *)(_DWORD *, char *, _DWORD, int, _DWORD, _DWORD *))v15)(v12, "", *v16, a2, 0, v25);
  sub_259F10((const char *)&word_356638);
  sub_92620(v5);
}
