int __fastcall sub_90864(int a1, int a2)
{
  int v4; // r3
  int v6; // r3
  unsigned int v7; // r5
  int v8; // r8
  int v9; // r1
  int v10; // r7
  int v11; // r1
  int v12; // r8
  int v13; // r3
  int v14; // r0
  unsigned int v15; // [sp+Ch] [bp-10h] BYREF
  int v16; // [sp+10h] [bp-Ch] BYREF
  int v17; // [sp+14h] [bp-8h] BYREF

  v15 = 0;
  v16 = 0;
  if ( !sub_A8450(a2, 0, 51, 0, 2) || !sub_A8398(a2, 2) || !sub_A8398(a2, 2) )
  {
    v4 = 673;
LABEL_4:
    sub_95494(a1, 80, 470, 68, "ssl/statem/extensions_clnt.c", v4);
    return 0;
  }
  sub_A278C(a1, &v16, &v15);
  v6 = *(_DWORD *)(a1 + 124);
  v7 = *(unsigned __int16 *)(v6 + 854);
  if ( !*(_WORD *)(v6 + 854) )
  {
    if ( !v15 )
      goto LABEL_11;
    while ( 1 )
    {
      v8 = 2 * v7;
      v9 = *(unsigned __int16 *)(v16 + 2 * v7++);
      if ( sub_A2808(a1, v9, 131076) )
        break;
      if ( v15 <= v7 )
        goto LABEL_11;
    }
    v7 = *(unsigned __int16 *)(v16 + v8);
    if ( !*(_WORD *)(v16 + v8) )
    {
LABEL_11:
      sub_95494(a1, 80, 470, 101, "ssl/statem/extensions_clnt.c", 698);
      return 0;
    }
    v6 = *(_DWORD *)(a1 + 124);
  }
  v10 = *(_DWORD *)(v6 + 532);
  v17 = 0;
  if ( v10 )
  {
    if ( *(_DWORD *)(a1 + 1100) == 1 )
      goto LABEL_16;
    sub_95494(a1, 80, 512, 68, "ssl/statem/extensions_clnt.c", 608);
    return 0;
  }
  v10 = sub_82FA8(a1, v7);
  if ( !v10 )
    return 0;
LABEL_16:
  v12 = sub_DA760(v10, &v17);
  if ( !v12 )
  {
    sub_95494(a1, 80, 512, 16, "ssl/statem/extensions_clnt.c", 627);
LABEL_18:
    if ( !*(_DWORD *)(*(_DWORD *)(a1 + 124) + 532) )
      sub_DA240(v10);
    CRYPTO_free(v17, "ssl/statem/extensions_clnt.c", 652);
    return 0;
  }
  if ( !sub_A8450(a2, v11, v7, 0, 2) || !sub_A8544(a2, v17, v12, 2) )
  {
    sub_95494(a1, 80, 512, 68, "ssl/statem/extensions_clnt.c", 635);
    goto LABEL_18;
  }
  v13 = *(_DWORD *)(a1 + 124);
  v14 = v17;
  *(_DWORD *)(v13 + 532) = v10;
  *(_WORD *)(v13 + 854) = v7;
  CRYPTO_free(v14, "ssl/statem/extensions_clnt.c", 646);
  if ( !sub_A7EDC(a2) || !sub_A7EDC(a2) )
  {
    v4 = 709;
    goto LABEL_4;
  }
  return 1;
}
