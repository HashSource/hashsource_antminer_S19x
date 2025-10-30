int __fastcall sub_2F0184(_DWORD *a1, const char *a2, int a3)
{
  char *v6; // r0
  char *v7; // r6
  __int64 v8; // r2
  size_t v9; // r0
  int v10; // r1
  int v11; // r3
  _DWORD *v12; // r0

  if ( !*a2 )
    return *(unsigned __int8 *)a2;
  if ( a1[9] )
    sub_2A6BBC("elf-strtab.c", 153);
  v6 = sub_2AAC2C(a1, a2, 1, a3);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 12);
    *((_DWORD *)v6 + 4) = HIDWORD(v8) + 1;
    if ( (_DWORD)v8 )
      return *((_DWORD *)v7 + 5);
    v9 = strlen(a2);
    v10 = a1[7];
    v11 = a1[8];
    *((_DWORD *)v7 + 3) = v9 + 1;
    v12 = (_DWORD *)a1[10];
    if ( v10 != v11 )
    {
LABEL_7:
      a1[7] = v10 + 1;
      *((_DWORD *)v7 + 5) = v10;
      v12[v10] = v7;
      return *((_DWORD *)v7 + 5);
    }
    a1[8] = 2 * v10;
    v12 = sub_2AB4B4(v12, 8 * v10);
    a1[10] = v12;
    if ( v12 )
    {
      v10 = a1[7];
      goto LABEL_7;
    }
  }
  return -1;
}
