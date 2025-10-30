int __fastcall sub_19CA0C(int a1, int a2)
{
  int v4; // r8
  const char *v5; // r7
  size_t v6; // r0
  size_t v7; // r0
  size_t v8; // r0
  int v9; // r3
  const char *v10; // r2
  int v11; // r4
  const char *v13; // r1
  int (**v14)(); // [sp+4h] [bp-1Ch] BYREF
  _BYTE *v15; // [sp+8h] [bp-18h]
  int v16; // [sp+Ch] [bp-14h]
  _BYTE v17[16]; // [sp+10h] [bp-10h] BYREF

  if ( a1 )
  {
    v4 = 58;
    sub_256760(&v14);
    v5 = *(const char **)a2;
    v15 = v17;
    v16 = 0;
    v14 = &off_3F2924;
    v17[0] = 0;
    if ( v5 )
      goto LABEL_3;
LABEL_30:
    if ( !*(_DWORD *)(a2 + 4) )
    {
      if ( !*(_DWORD *)(a2 + 12) )
      {
        if ( *(_DWORD *)(a2 + 20) == 3 )
          goto LABEL_23;
        goto LABEL_16;
      }
      goto LABEL_11;
    }
    goto LABEL_5;
  }
  sub_256760(&v14);
  v13 = *(const char **)a2;
  v16 = 0;
  v17[0] = 0;
  v14 = &off_3F2924;
  v15 = v17;
  if ( !v13 )
  {
    v4 = 32;
    goto LABEL_30;
  }
  sub_2564E4(&v14, "-source ", 8);
  v5 = *(const char **)a2;
  v4 = 32;
LABEL_3:
  v6 = strlen(v5);
  sub_2564E4(&v14, v5, v6);
  if ( *(_DWORD *)(a2 + 4) )
  {
    sub_2567F8(&v14, v4);
LABEL_5:
    if ( *(_DWORD *)(a2 + 8) == 1 )
      sub_2564E4(&v14, "-qualified ", 11);
    if ( !a1 )
      sub_2564E4(&v14, "-function ", 10);
    v7 = strlen(*(const char **)(a2 + 4));
    sub_2564E4(&v14, *(_DWORD *)(a2 + 4), v7);
    if ( !*(_DWORD *)(a2 + 12) )
    {
LABEL_14:
      if ( *(_DWORD *)(a2 + 20) == 3 )
        goto LABEL_23;
      goto LABEL_15;
    }
    goto LABEL_10;
  }
  if ( *(_DWORD *)(a2 + 12) )
  {
LABEL_10:
    sub_2567F8(&v14, v4);
LABEL_11:
    if ( !a1 )
      sub_2564E4(&v14, "-label ", 7);
    v8 = strlen(*(const char **)(a2 + 12));
    sub_2564E4(&v14, *(_DWORD *)(a2 + 12), v8);
    goto LABEL_14;
  }
  if ( *(_DWORD *)(a2 + 20) == 3 )
    goto LABEL_23;
LABEL_15:
  sub_2567F8(&v14, v4);
LABEL_16:
  if ( !a1 )
    sub_2564E4(&v14, "-line ", 6);
  v9 = *(_DWORD *)(a2 + 20);
  if ( v9 )
  {
    v10 = (const char *)&word_3C1464;
    if ( v9 == 1 )
      v10 = "+";
  }
  else
  {
    v10 = "";
  }
  sub_25678C(&v14, "%s%d", v10, *(_DWORD *)(a2 + 16));
LABEL_23:
  v11 = sub_327254(v15);
  sub_256478(&v14);
  return v11;
}
