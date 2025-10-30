int __fastcall sub_156B40(int *a1, int a2, int a3)
{
  int v6; // r3
  int v7; // r4
  int v8; // r2
  const char *v9; // r0
  int result; // r0

  sub_25A418(a2, (const char *)&word_356638);
  sub_25A418(a2, "\t%5d  ", a3);
  v6 = dword_4876C8;
  if ( dword_4876C8 > 0 )
  {
    v7 = 1;
    do
    {
      sub_25A418(a2, (const char *)&word_3E1F84);
      v6 = dword_4876C8;
      ++v7;
    }
    while ( dword_4876C8 >= v7 );
  }
  v8 = *a1;
  dword_4876C8 = v6 + 2;
  v9 = (const char *)(*(int (__fastcall **)(int))(*(_DWORD *)(v8 + 32) + 12))(a1[4 * a3 + 4]);
  sub_25A418(a2, "%-20s  ", v9);
  result = (*(int (__fastcall **)(int *, int, int))(*(_DWORD *)(*a1 + 32) + 16))(a1, a2, a3);
  dword_4876C8 -= 2;
  return result;
}
