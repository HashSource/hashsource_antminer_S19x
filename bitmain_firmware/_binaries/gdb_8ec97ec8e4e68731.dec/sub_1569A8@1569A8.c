int __fastcall sub_1569A8(int a1, int a2, const char *a3)
{
  int result; // r0
  int v7; // r5
  int v8; // r7
  int v9; // r9
  int v10; // r0
  int v11; // r3
  int v12; // r10
  int v13; // t1
  int v14; // r2

  sub_25A418(a2, "Dump of expression @ ");
  sub_25A44C(a1, a2);
  if ( a3 )
    sub_25A418(a2, ", %s:", a3);
  sub_25A418(a2, "\n\tLanguage %s, %d elements, %ld bytes each.\n", **(const char ***)a1, *(_DWORD *)(a1 + 8), 16);
  result = sub_25A418(a2, "\t%5s  %20s  %16s  %s\n", "Index", "Opcode", "Hex Value", "String Value");
  if ( *(int *)(a1 + 8) > 0 )
  {
    v7 = a1 + 31;
    v8 = 0;
    do
    {
      sub_25A418(a2, "\t%5d  ", v8);
      v9 = v7 - 16;
      v10 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)(*(_DWORD *)a1 + 32) + 12))(*(_DWORD *)(v7 - 15));
      sub_25A418(a2, "%20s  ", v10);
      sub_266EA4(a2, 100, 0, v11, *(_DWORD *)(v7 - 15), *(_DWORD *)(v7 - 11));
      sub_25A418(a2, "  ");
      do
      {
        v13 = *(unsigned __int8 *)++v9;
        v12 = v13;
        if ( isprint(v13) )
          v14 = v12;
        else
          v14 = 46;
        sub_25A418(a2, "%c", v14);
      }
      while ( v7 != v9 );
      ++v8;
      result = sub_25A418(a2, (const char *)&word_356638);
      v7 += 16;
    }
    while ( *(_DWORD *)(a1 + 8) > v8 );
  }
  return result;
}
