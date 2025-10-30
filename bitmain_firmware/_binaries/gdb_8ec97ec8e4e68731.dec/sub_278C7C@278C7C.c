void __fastcall sub_278C7C(int **a1, const char *a2, int a3, int a4, int a5)
{
  int v6; // r6
  int v7; // r5
  int v8; // r3
  int v9; // r1
  _BYTE *v10; // r0

  if ( a5 )
  {
    v6 = **a1;
    sub_25A418(v6, "#ifndef %s\n# define %s", a2, a2);
    if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    {
      sub_25A6BC("(", v6);
      v7 = 0;
      v8 = (2 * *(_DWORD *)(a3 + 4)) >> 2;
      while ( 1 )
      {
        v9 = v6;
        if ( v8 <= v7 )
          break;
        while ( 1 )
        {
          v10 = *(_BYTE **)(*(_DWORD *)(a3 + 8) + 4 * v7++);
          sub_25A6BC(v10, v9);
          v8 = (2 * *(_DWORD *)(a3 + 4)) >> 2;
          if ( v7 >= v8 )
            break;
          sub_25A6BC(", ", v6);
          v9 = v6;
          if ( (2 * *(_DWORD *)(a3 + 4)) >> 2 <= v7 )
            goto LABEL_8;
        }
      }
LABEL_8:
      sub_25A6BC(")", v9);
    }
    sub_25A418(v6, " %s\n#endif\n", *(const char **)(a3 + 12));
  }
}
