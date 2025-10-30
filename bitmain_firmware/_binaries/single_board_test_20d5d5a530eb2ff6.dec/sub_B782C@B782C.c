int __fastcall sub_B782C(int a1, const char *a2)
{
  FILE *v4; // r5
  int v5; // r6
  void *v6; // r0
  _DWORD *v7; // r0
  int v8; // r4
  int *v10; // r8
  const char *v11; // r3
  bool v12; // zf
  int v13; // r2
  int v14; // r2
  int v15; // [sp+0h] [bp-8h]

  v4 = (FILE *)sub_E9E04(a1, a2);
  if ( strchr(a2, 98) )
    v5 = 1;
  else
    v5 = 17;
  if ( v4 )
  {
    v6 = sub_B7820();
    v7 = sub_B655C((int)v6);
    v8 = (int)v7;
    if ( v7 )
    {
      sub_B66FC((int)v7, 0);
      sub_B6ECC(v8, 106, v5, (int)v4);
      return v8;
    }
    else
    {
      fclose(v4);
      return 0;
    }
  }
  else
  {
    v10 = _errno_location();
    sub_D0048(2, 1, *v10, "crypto/bio/bss_file.c", 69);
    sub_D1240(5, "fopen('", a1);
    v11 = (const char *)(*v10 & 0xFFFFFFFB);
    v12 = v11 == (const char *)2;
    if ( v11 == (const char *)2 )
      v13 = 76;
    else
      v13 = 78;
    v15 = v13;
    if ( v11 == (const char *)2 )
      v11 = "crypto/bio/bss_file.c";
    if ( v12 )
    {
      v14 = 128;
    }
    else
    {
      v11 = "crypto/bio/bss_file.c";
      v14 = 2;
    }
    sub_D0048(32, 109, v14, v11, v15);
    return 0;
  }
}
