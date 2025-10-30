void __fastcall sub_2785C4(const char *a1)
{
  int v1; // r4
  int v2; // r6
  int v3; // r5
  int v4; // r3
  char *v5; // [sp+4h] [bp-14h] BYREF
  _DWORD *v6; // [sp+8h] [bp-10h] BYREF
  _DWORD *v7; // [sp+Ch] [bp-Ch] BYREF
  _BYTE v8[8]; // [sp+10h] [bp-8h] BYREF

  v1 = dword_487668;
  v5 = (char *)a1;
  v2 = *(_DWORD *)(dword_487668 + 36);
  v3 = dword_487668 + 36;
  *(_DWORD *)(dword_487668 + 36) = 0;
  sub_1C7460((const char **)&v5, "compile print", (int)v8);
  if ( v5 && *v5 )
  {
    sub_277AB4(0, v5, (int *)3, (int)v8);
    if ( v3 )
      *(_DWORD *)(v1 + 36) = v2;
  }
  else
  {
    sub_57E90(&v6, 7, "");
    v4 = (int)v6;
    v6[4] = v8;
    *(_DWORD *)(v4 + 12) = 3;
    sub_5903C(v4);
    if ( v6 )
    {
      v7 = v6;
      sub_57E18(&v7);
    }
    if ( v3 )
      *(_DWORD *)(v1 + 36) = v2;
  }
}
