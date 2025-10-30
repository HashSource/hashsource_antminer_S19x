int __fastcall sub_2CD85C(int a1, unsigned int a2, unsigned int a3)
{
  int v3; // r3
  int v4; // r4
  int v5; // r8
  unsigned int v9; // r4
  unsigned int v11; // r3
  int v12; // r9
  unsigned int v13; // r10
  int v14; // r2
  int v15; // r1
  char *v16; // r3
  int v17; // r0
  int v18; // r2

  v3 = *(_DWORD *)(a1 + 160);
  v4 = *(_DWORD *)(v3 + 64);
  if ( !v4 || *(_DWORD *)(v3 + 532) <= a2 )
    return 0;
  v5 = *(_DWORD *)(v4 + 4 * a2);
  if ( *(_DWORD *)(v5 + 48) )
    goto LABEL_4;
  v11 = *(_DWORD *)(v5 + 4);
  v12 = v11 != 3;
  if ( v11 > 0x5FFFFFFF )
    v12 = 0;
  if ( v12 )
  {
    sub_2A6A5C("%B: attempt to load strings from a non-string section (number %d)", a1, a2);
    return 0;
  }
  v13 = *(_DWORD *)(v5 + 24);
  if ( v13 + 1 <= 1 )
    return 0;
  if ( sub_2A8A04(a1, *(_QWORD *)(v5 + 16), 0) || (v17 = sub_2ACBF4(a1, v13 + 1), (v12 = v17) == 0) )
  {
    *(_DWORD *)(*(_DWORD *)(v4 + 4 * a2) + 48) = v12;
    return v12;
  }
  if ( v13 == sub_2A87D8(v17, v13, a1) )
  {
    *(_BYTE *)(v12 + v13) = 0;
    *(_DWORD *)(*(_DWORD *)(v4 + 4 * a2) + 48) = v12;
LABEL_4:
    v9 = *(_DWORD *)(v5 + 24);
    if ( v9 > a3 )
      return *(_DWORD *)(v5 + 48) + a3;
    v14 = *(_DWORD *)v5;
    v15 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 60);
    if ( a2 == v15 && a3 == v14 )
      v16 = ".shstrtab";
    else
      v16 = sub_2CD844(a1, v15, v14);
    sub_2A6A5C("%B: invalid string offset %u >= %Lu for section `%s'", a1, a3, v9, v16);
    return 0;
  }
  if ( sub_2A6910() != 1 )
    ((void (__fastcall *)(int))loc_2A6C48)(18);
  sub_2AD1F0(a1);
  v18 = *(_DWORD *)(v4 + 4 * a2);
  *(_DWORD *)(v18 + 24) = 0;
  *(_DWORD *)(v18 + 48) = 0;
  return 0;
}
