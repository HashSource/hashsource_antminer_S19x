void __fastcall sub_C04C4(const char *a1, int a2)
{
  int v2; // r0
  int v3; // r8
  int v4; // r0
  int v5; // r7
  const char *v6; // r6
  const char *v7; // r0
  const char *v8; // r0
  const char *v9; // r12
  void *v10; // r0
  char *v11; // r1
  void *v12; // r3
  int v13; // r4
  int v14; // r0
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // r0
  void *v18; // r4
  const char *v19; // [sp+1Ch] [bp-2Ch] BYREF
  const char *v20; // [sp+20h] [bp-28h] BYREF
  void *ptr; // [sp+24h] [bp-24h] BYREF
  void *v22; // [sp+28h] [bp-20h] BYREF
  void *v23; // [sp+2Ch] [bp-1Ch] BYREF
  char *v24; // [sp+30h] [bp-18h]
  char *i; // [sp+34h] [bp-14h]
  void *v26; // [sp+38h] [bp-10h] BYREF
  void *v27; // [sp+44h] [bp-4h]

  v19 = a1;
  v2 = sub_15F70C(a1, a2);
  if ( dword_489690 )
    sub_946E0("GDB can't do agent expression translation with overlays.");
  v3 = v2;
  if ( !v19 )
    sub_51E9C("expression to translate");
  v4 = sub_9360C(v19);
  v5 = v4 + 1;
  v19 = (const char *)(v4 + 1);
  if ( *(_BYTE *)v4 != 34 )
    sub_946E0("Must start with a format string.");
  sub_96C4C(&v26, &v19);
  v6 = v19;
  v7 = ++v19;
  if ( *v6 != 34 )
    sub_946E0("Bad format string, non-terminated '\"'.");
  v8 = (const char *)sub_9360C(v7);
  v19 = v8;
  if ( *v8 == 44 )
  {
    v19 = ++v8;
  }
  else if ( *v8 )
  {
    sub_946E0("Invalid argument syntax");
  }
  v19 = (const char *)sub_9360C(v8);
  v23 = 0;
  v9 = v19;
  v24 = 0;
  for ( i = 0; *v19; v9 = v19 )
  {
    v20 = v9;
    v10 = (void *)sub_1C427C(&ptr, &v20, 0, 0, 1);
    v11 = v24;
    v12 = ptr;
    ptr = 0;
    v22 = v12;
    if ( v24 == i )
    {
      sub_C0788(&v23);
      v10 = ptr;
    }
    else
    {
      if ( v24 )
        *(_DWORD *)v24 = v12;
      else
        v10 = 0;
      if ( v11 )
        v10 = ptr;
      v24 = v11 + 4;
    }
    v19 = v20;
    if ( *v20 == 44 )
      v19 = v20 + 1;
    if ( v10 )
      free(v10);
  }
  v13 = sub_15DDFC(v3);
  v14 = sub_B894C(v13);
  sub_C032C((int *)&v22, v13, v14, 0, 0, 0, v5, (int)&v6[-v5], (v24 - (_BYTE *)v23) >> 2, (int)v23);
  v15 = sub_C11E8(v22);
  v16 = (_DWORD *)sub_242F8C(v15);
  v17 = sub_C0E94(*v16, v22);
  sub_243C34(v17);
  v18 = v22;
  if ( v22 )
  {
    sub_C0960(v22);
    sub_33AC04(v18);
  }
  if ( v23 )
    sub_339E64(v23);
  if ( v27 )
    free(v27);
  if ( v26 )
    sub_339E64(v26);
}
