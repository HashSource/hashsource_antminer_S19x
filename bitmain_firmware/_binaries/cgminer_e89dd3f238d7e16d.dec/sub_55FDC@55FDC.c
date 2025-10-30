int __fastcall sub_55FDC(int a1)
{
  int v1; // r3
  int v4; // [sp+Ch] [bp-10h] BYREF
  _BYTE *i; // [sp+10h] [bp-Ch]
  int v6; // [sp+14h] [bp-8h]

  v6 = 0;
  for ( i = sub_54F6C(&v4); i; i = sub_54FE8((int)i, &v4) )
  {
    if ( *(_UNKNOWN **)(dword_94324 + 28 * v4 + 24) != &unk_9432C )
    {
      v1 = v6++;
      *(_BYTE *)(a1 + v1) = *i;
    }
  }
  return v6;
}
