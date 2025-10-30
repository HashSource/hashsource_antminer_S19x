void __fastcall sub_5E934(int a1, const char **a2, int a3)
{
  int v5; // r8
  const char *v6; // r5
  int v7; // r0
  const char *v8; // r7
  const char *v9; // r9
  int v10; // r0
  int v11; // r4
  int v12; // r10
  int v13; // r11
  const char *v14; // r0
  int v15; // r0
  int v16; // r4
  int v17; // r0
  _BYTE *v18; // r3
  int v19; // r2
  void *ptr; // [sp+8h] [bp-34h] BYREF
  int v21; // [sp+Ch] [bp-30h]
  _DWORD v22[4]; // [sp+10h] [bp-2Ch] BYREF
  void *v23; // [sp+20h] [bp-1Ch] BYREF
  int v24; // [sp+24h] [bp-18h]
  _DWORD v25[5]; // [sp+28h] [bp-14h] BYREF

  v5 = *(_DWORD *)sub_242FDC(a1);
  if ( a3 != 3 )
    sub_946E0("-var-create: Usage: NAME FRAME EXPRESSION.");
  v6 = *a2;
  v21 = 0;
  ptr = v22;
  LOBYTE(v22[0]) = 0;
  v7 = strcmp(v6, (const char *)&word_3C1464);
  v8 = a2[1];
  v9 = a2[2];
  if ( v7 )
  {
    if ( !isalpha(*(unsigned __int8 *)v6) )
      sub_946E0("-var-create: name of object must begin with a letter");
    goto LABEL_4;
  }
  sub_26FB78(&v23);
  v18 = ptr;
  if ( v23 == v25 )
  {
    sub_33B48C(&ptr, &v23);
    v18 = v23;
    goto LABEL_19;
  }
  if ( ptr == v22 )
  {
    ptr = v23;
    v21 = v24;
    v22[0] = v25[0];
    goto LABEL_23;
  }
  ptr = v23;
  v21 = v24;
  v19 = v22[0];
  v22[0] = v25[0];
  if ( !v18 )
  {
LABEL_23:
    v23 = v25;
    v18 = v25;
    goto LABEL_19;
  }
  v23 = v18;
  v25[0] = v19;
LABEL_19:
  v24 = 0;
  *v18 = 0;
  if ( v23 != v25 )
    sub_339E64(v23);
  v6 = (const char *)ptr;
LABEL_4:
  v10 = strcmp(v8, "*");
  v11 = v10;
  if ( v10 )
  {
    v10 = strcmp(v8, "@");
    v11 = v10;
    if ( v10 )
    {
      v10 = sub_25AD20(v8);
      v11 = v10;
      v12 = 0;
    }
    else
    {
      v12 = 2;
    }
  }
  else
  {
    v12 = 1;
  }
  if ( dword_48AA20 )
  {
    v13 = *(_DWORD *)sub_242FC8(v10);
    v14 = (const char *)sub_98B08(v11, 0);
    sub_2594B0(v13, "Name=\"%s\", Frame=\"%s\" (%s), Expression=\"%s\"\n", v6, v8, v14, v9);
  }
  v15 = sub_270FE0(v6, v9, v11, v12);
  v16 = v15;
  if ( !v15 )
    sub_946E0("-var-create: unable to create variable object");
  sub_5E730(v15, 1, 0);
  v17 = sub_26FC94(v16, 0);
  sub_257504(v5, "has_more", v17);
  if ( ptr != v22 )
    sub_339E64(ptr);
}
