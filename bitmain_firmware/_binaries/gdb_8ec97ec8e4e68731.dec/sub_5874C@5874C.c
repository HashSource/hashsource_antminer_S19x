int __fastcall sub_5874C(int a1, int a2)
{
  _DWORD *v2; // r4
  const char **v3; // r5
  int v4; // r10
  int v6; // r6
  int v7; // r7
  int v8; // r3
  int v9; // r9
  int v10; // r8
  int v11; // r10
  int result; // r0
  int v13; // r3
  __int64 v14; // kr00_8
  __int64 i; // r0
  int v16; // r0
  int v17; // r0
  int v18; // [sp+8h] [bp-Ch]

  if ( !a1 )
  {
    v14 = sub_94700("cli/cli-script.c", 1581, "called with NULL file pointer!");
    sub_92E40(v4);
    for ( i = v14;
          HIDWORD(i) == 1;
          LODWORD(i) = sub_92F64(
                         *(_DWORD *)(v16 + 4),
                         "%s:%d: Error in sourced command file:\n%s",
                         *v3,
                         *v2,
                         *(const char **)(v16 + 8)) )
    {
      v16 = sub_339E78(i);
    }
    v17 = sub_339E78(i);
    sub_92E60(v17);
  }
  v6 = dword_487668;
  v7 = dword_48A540;
  v8 = *(_DWORD *)(dword_487668 + 36);
  v9 = dword_487668 + 36;
  *(_DWORD *)(dword_487668 + 36) = 0;
  v10 = dword_48A53C;
  v18 = v8;
  dword_48A540 = 0;
  dword_48A53C = a2;
  v11 = sub_92E28(a1);
  sub_244348(a1);
  result = sub_92E40(v11);
  dword_48A53C = v10;
  if ( v9 )
    v13 = v18;
  dword_48A540 = v7;
  if ( v9 )
    *(_DWORD *)(v6 + 36) = v13;
  return result;
}
