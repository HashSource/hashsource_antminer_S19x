void __fastcall sub_2787F4(const char *a1)
{
  const char *v1; // r2
  int v2; // r4
  int v3; // r7
  int v4; // r5
  _BOOL4 v5; // r0
  int v6; // r6
  int v7; // r3
  int v8; // r0
  char *v9; // [sp+4h] [bp-10h] BYREF
  _DWORD *v10; // [sp+8h] [bp-Ch] BYREF
  _DWORD *v11; // [sp+Ch] [bp-8h] BYREF

  v1 = a1;
  v2 = dword_487668;
  v9 = (char *)a1;
  v3 = *(_DWORD *)(dword_487668 + 36);
  v4 = dword_487668 + 36;
  *(_DWORD *)(dword_487668 + 36) = 0;
  if ( a1 && (v5 = sub_2778F8((const char **)&v9), v1 = v9, v5) )
  {
    v1 = (const char *)sub_9360C(v9);
    v9 = (char *)v1;
    v6 = 2;
  }
  else
  {
    v6 = 1;
  }
  v9 = (char *)sub_9360C(v1);
  if ( v9 )
  {
    if ( sub_5B24C((const char **)&v9, "--", 2u) )
    {
      if ( !v9 )
        goto LABEL_13;
      v7 = (unsigned __int8)*v9;
    }
    else
    {
      v7 = (unsigned __int8)*v9;
      if ( v7 == 45 )
        sub_946E0("Unknown argument specified.", v9);
    }
    if ( v7 )
    {
      sub_277AB4(0, v9, (int *)v6, 0);
      goto LABEL_10;
    }
  }
LABEL_13:
  sub_57E90(&v10, 7, "");
  v8 = (int)v10;
  v10[3] = v6;
  sub_5903C(v8);
  if ( !v10 )
  {
LABEL_10:
    if ( v4 )
      *(_DWORD *)(v2 + 36) = v3;
    return;
  }
  v11 = v10;
  sub_57E18(&v11);
  if ( v4 )
    *(_DWORD *)(v2 + 36) = v3;
}
