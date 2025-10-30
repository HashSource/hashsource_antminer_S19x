int __fastcall sub_70924(_DWORD *a1, _DWORD *a2)
{
  int v3; // [sp+Ch] [bp-8h]

  v3 = 0;
  if ( a1[15] == 256 )
  {
    v3 = a1[16];
    *a2 = a1[17];
    a1[16] = 0;
    a1[17] = 0;
  }
  return v3;
}
