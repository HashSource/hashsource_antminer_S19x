__int64 __fastcall sub_2B8470(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  __int64 v7; // r2
  __int64 v9; // r2
  int *v10; // r4
  __int64 v11; // r2
  __int64 result; // r0
  int v13; // t1

  LODWORD(v7) = (16 * a4) & 0xF0000 | a4 & 0xFFF | 0xE300C000;
  HIDWORD(v7) = *a3;
  sub_2B73D0(*(_DWORD *)(a1 + 364), *(_DWORD *)(a2 + 4), v7);
  LODWORD(v9) = HIWORD(a4) & 0xFFF | (a4 >> 12) & 0xF0000 | 0xE340C000;
  HIDWORD(v9) = *a3 + 4;
  v10 = (int *)&unk_413C4C;
  sub_2B73D0(*(_DWORD *)(a1 + 364), *(_DWORD *)(a2 + 4), v9);
  for ( LODWORD(v11) = -527646705; ; LODWORD(v11) = v13 )
  {
    HIDWORD(v11) = (char *)v10 + *a3 - (_DWORD)&unk_413C40 - 4;
    result = sub_2B73D0(*(_DWORD *)(a1 + 364), *(_DWORD *)(a2 + 4), v11);
    if ( v10 == (int *)&unk_413C80 )
      break;
    v13 = *v10++;
  }
  return result;
}
