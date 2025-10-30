int __fastcall sub_1C13F0(int a1, const char *a2, int a3, int a4, int a5, int a6)
{
  int v6; // r5
  int v10; // r6
  unsigned int v11; // r6

  if ( a4 <= 0 )
    v6 = a1;
  v10 = **(char **)(a1 + 24);
  if ( a4 > 0 )
    v6 = sub_171258((_DWORD *)a1);
  v11 = v10 & 0xFFFFFFF7;
  if ( v11 == 7 )
  {
    sub_1C0DD8(v6, a3, a4, 0, a6);
    sub_25A6BC(a2, a3);
    if ( !a2 )
    {
      sub_1C0044(v6, a3, a4, a5, a6);
      return sub_1C1190(v6, a3, a4, 0, (int)a2, a6);
    }
  }
  else
  {
    sub_25A6BC(a2, a3);
    if ( !a2 )
      goto LABEL_9;
  }
  if ( !*a2 )
  {
    if ( v11 != 7 )
      goto LABEL_9;
LABEL_13:
    sub_1C0044(v6, a3, a4, a5, a6);
    goto LABEL_10;
  }
  if ( v11 == 7 )
    goto LABEL_13;
  sub_25A6BC(&off_3A6E68, a3);
LABEL_9:
  sub_1C0DD8(v6, a3, a4, 0, a6);
  sub_1C0044(v6, a3, a4, a5, a6);
  if ( a2 )
LABEL_10:
    a2 = (const char *)(strchr(a2, 40) != 0);
  return sub_1C1190(v6, a3, a4, 0, (int)a2, a6);
}
