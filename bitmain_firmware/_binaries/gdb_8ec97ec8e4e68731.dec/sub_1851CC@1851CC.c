int __fastcall sub_1851CC(int a1, int a2, int a3)
{
  int v4; // r6
  const char *v5; // r0
  int v6; // r0
  int v7; // r5
  const char *v8; // r0
  int v9; // [sp+4h] [bp-Ch] BYREF
  int v10; // [sp+8h] [bp-8h]
  int v11; // [sp+Ch] [bp-4h]

  v9 = a1;
  v10 = a2;
  v11 = a3;
  if ( !dword_487930 || sub_98F78(&v9, &dword_4878EC) )
    return sub_23F9F0(v9, v10, v11);
  v4 = *(_DWORD *)sub_242FC8(0);
  v5 = (const char *)sub_23095C(dword_4878EC, dword_4878F0, dword_4878F4);
  v6 = sub_2594B0(v4, "infrun: Switching context from %s ", v5);
  v7 = *(_DWORD *)sub_242FC8(v6);
  v8 = (const char *)sub_23095C(v9, v10, v11);
  sub_2594B0(v7, "to %s\n", v8);
  return sub_23F9F0(v9, v10, v11);
}
