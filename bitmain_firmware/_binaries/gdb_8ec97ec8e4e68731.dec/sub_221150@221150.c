void __fastcall sub_221150(const char *a1, int a2, _DWORD **a3)
{
  const char *v5; // r0
  int v6; // r0
  const char *v7; // r6

  if ( j_strcmp(a1, "_globals_") )
  {
    if ( !sub_15A078(*a3, (int)a1) && !j_strncmp(a1, (const char *)a3[1], (size_t)a3[3]) )
    {
      v5 = a1;
LABEL_6:
      sub_220F00(v5, (char *)a3[1], (char *)a3[2], (int)a3[4]);
      return;
    }
    v6 = sub_3245A4(a1);
    v7 = (const char *)v6;
    if ( a1 != (const char *)v6 && !sub_15A078(*a3, v6) && !j_strncmp(v7, (const char *)a3[1], (size_t)a3[3]) )
    {
      v5 = v7;
      goto LABEL_6;
    }
  }
}
