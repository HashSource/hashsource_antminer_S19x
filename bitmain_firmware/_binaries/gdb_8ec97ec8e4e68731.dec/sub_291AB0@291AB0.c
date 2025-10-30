int __fastcall sub_291AB0(const char *a1)
{
  int v1; // r1
  bool v2; // zf
  const char *v3; // r8
  int v4; // r7
  size_t v5; // r2
  int v6; // r6

  v1 = dword_48AAD0;
  v2 = dword_48AAD0 == (_DWORD)sub_291A64;
  if ( (int (__fastcall *)(int, int))dword_48AAD0 != sub_291A64 )
    v2 = dword_48AAD0 == (_DWORD)sub_291AB0;
  if ( !v2 )
    goto LABEL_13;
  if ( !dword_48B6C8 )
    goto LABEL_13;
  v3 = *(const char **)(dword_48B6C8 + 4 * dword_48B6D0);
  a1 = (const char *)strlen(v3);
  v4 = dword_4900D8;
  v5 = (size_t)a1;
  v6 = dword_4900D8 - (_DWORD)a1;
  if ( dword_4900D8 - (int)a1 < 0
    || a1
    && ((v1 = *(unsigned __int8 *)v3,
         a1 = (const char *)(dword_48AAD4 + v6),
         *(unsigned __int8 *)(dword_48AAD4 + v6) != v1)
     || (a1 = (const char *)strncmp(a1, v3, v5)) != 0) )
  {
LABEL_13:
    sub_29121C((int)a1, v1);
  }
  sub_294F5C(v6, v4);
  dword_4900D8 = v6;
  if ( --dword_48B6D0 < 0 )
    dword_48B6D0 = dword_48B6CC - 1;
  sub_291A64(1, 0);
  return 0;
}
