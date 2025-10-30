int __fastcall sub_5E55C(int a1, int a2, int a3)
{
  int v5; // r4
  int v7; // [sp+8h] [bp-8h] BYREF
  _BYTE v8[4]; // [sp+Ch] [bp-4h] BYREF

  v7 = 0;
  if ( sub_602EC(&unk_359D50, a3, a2, &unk_359D44, &v7, v8) != -1 || (v5 = a3 - 1, v5 != v7) )
    sub_946E0("-target-file-delete: Usage: REMOTE_FILE");
  return sub_1F0F34(*(_DWORD *)(a2 + 4 * v5), 0);
}
