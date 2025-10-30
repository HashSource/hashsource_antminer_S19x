void __fastcall sub_BA55C(int a1, char *a2)
{
  int v4; // r0
  int v5; // r0
  char *v6; // r4
  size_t v7; // r0
  size_t v8; // r7
  _DWORD *v9; // r0
  char *s; // [sp+4h] [bp-8h] BYREF

  v4 = sub_1B87A8(a1);
  sub_984A4((int *)&s, v4);
  v5 = sub_BA20C(a1, s, a2);
  v6 = s;
  if ( !v5 )
  {
    v7 = strlen(s);
    if ( v7 <= 4 )
      goto LABEL_3;
    v8 = v7 - 4;
    if ( strcasecmp(&s[v7 - 4], ".exe") )
      goto LABEL_3;
    v6[v8] = 0;
    if ( dword_478228 )
    {
      v9 = (_DWORD *)sub_242FC8(0);
      sub_2594B0(*v9, "auto-load: Stripped .exe suffix, retrying with \"%s\".\n", s);
    }
    sub_BA20C(a1, s, a2);
    v6 = s;
  }
  if ( v6 )
LABEL_3:
    free(v6);
}
