int __fastcall sub_10508C(int a1)
{
  int v2; // r3
  int v3; // r0
  int (__fastcall *v4)(char *); // r7
  int v5; // r7
  int v6; // r0
  int v7; // r3
  int result; // r0
  int v9; // r3

  v2 = dword_47B25C;
  v3 = dword_47B260;
  if ( dword_47B25C == dword_47B254 )
  {
    sub_104F0C((_DWORD *)dword_47B260);
    v3 = dword_47B260;
    v2 = dword_47B25C;
  }
  v4 = *(int (__fastcall **)(char *))(*(_DWORD *)(v3 + 4) + 76);
  ++dword_478988;
  v5 = v4((char *)&unk_47B2A4 + 12 * v2);
  (*(void (__fastcall **)(char *))(*(_DWORD *)(dword_47B260 + 4) + 88))((char *)&unk_47B2A4 + 12 * dword_47B25C + 6);
  v6 = sub_2A78D4(dword_47B260);
  v7 = *(_DWORD *)(dword_47B260 + 4);
  if ( v6 )
    (*(void (__fastcall **)(char *))(v7 + 80))((char *)&unk_47B2A4 + 12 * dword_47B25C + 8);
  else
    (*(void (__fastcall **)(char *))(v7 + 76))((char *)&unk_47B2A4 + 12 * dword_47B25C + 8);
  result = dword_47B264 + v5 + dword_47B268;
  v9 = dword_47B25C + 1;
  ++*(_DWORD *)(a1 + 196);
  dword_47B25C = v9;
  return result;
}
