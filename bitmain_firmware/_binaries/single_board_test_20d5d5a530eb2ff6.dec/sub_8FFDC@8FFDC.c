int __fastcall sub_8FFDC(_DWORD *a1, int a2)
{
  unsigned int v2; // r4
  int v6; // r1
  int v7; // r3
  int v8; // r5
  int v9; // r1
  int v10; // [sp+8h] [bp-Ch] BYREF
  unsigned int v11; // [sp+Ch] [bp-8h] BYREF

  v2 = 0;
  v10 = 0;
  v11 = 0;
  if ( !sub_8FCAC(a1) )
    return 2;
  sub_A278C(a1, &v10, &v11);
  if ( !sub_A8450(a2, v6, 10, 0, 2) || !sub_A8398(a2, 2) || !sub_A8398(a2, 2) )
  {
    v7 = 207;
LABEL_6:
    sub_95494(a1, 80, 480, 68, "ssl/statem/extensions_clnt.c", v7);
    return 0;
  }
  if ( v11 )
  {
    while ( 1 )
    {
      v8 = *(unsigned __int16 *)(v10 + 2 * v2++);
      if ( sub_A2808(a1, v8, &loc_20004) )
      {
        if ( !sub_A8450(a2, v9, v8, 0, 2) )
          break;
      }
      if ( v11 <= v2 )
        goto LABEL_14;
    }
    v7 = 218;
    goto LABEL_6;
  }
LABEL_14:
  if ( !sub_A7EDC(a2) || !sub_A7EDC(a2) )
  {
    v7 = 226;
    goto LABEL_6;
  }
  return 1;
}
