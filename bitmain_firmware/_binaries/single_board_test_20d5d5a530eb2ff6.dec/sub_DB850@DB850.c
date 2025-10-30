int __fastcall sub_DB850(int a1, int a2, char *s)
{
  signed int v6; // r2

  v6 = strlen(s);
  if ( v6 < 0 )
    return -1;
  else
    return (*(int (__fastcall **)(int, int, signed int, char *))(*(_DWORD *)a1 + 100))(a1, a2, v6, s);
}
