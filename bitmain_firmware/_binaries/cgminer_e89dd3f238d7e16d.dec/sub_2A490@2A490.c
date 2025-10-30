int __fastcall sub_2A490(int a1)
{
  unsigned __int8 v3; // [sp+Fh] [bp-5h]

  v3 = 0;
  if ( *(_BYTE *)(a1 + 641) )
    sub_28EB4(a1);
  if ( (unsigned __int8)sub_28F90((_DWORD *)a1) == 1
    && (unsigned __int8)sub_29594((_DWORD *)a1) == 1
    && (!*(_BYTE *)(a1 + 580) || (unsigned __int8)sub_26718((_DWORD *)a1) == 1)
    && (unsigned __int8)sub_26CCC((_DWORD *)a1) == 1 )
  {
    v3 = 1;
  }
  if ( v3 != 1 )
    sub_348D4(a1);
  else
    sub_3E730(a1);
  return v3;
}
